
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct nx_sg {int dummy; } ;
struct nx_csbcpb {int dummy; } ;
struct nx_crypto_ctx {int kmem_len; int props; int * stats; struct nx_sg* out_sg; struct nx_csbcpb* csbcpb_aead; struct nx_sg* in_sg; struct nx_csbcpb* csbcpb; scalar_t__ kmem; } ;
struct alg_props {int dummy; } ;
struct TYPE_3__ {scalar_t__ status; int ** ap; } ;
struct TYPE_4__ {TYPE_1__ of; int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nx_crypto_ctx *VAR_8, u32 VAR_9, u32 VAR_10)
{
 if (VAR_7.of.status != VAR_5) {
  FUNC_2("Attempt to initialize NX crypto context while device "
         "is not available!\n");
  return -VAR_0;
 }


 if (VAR_10 == VAR_4 || VAR_10 == VAR_3)
  VAR_8->kmem_len = (5 * VAR_6) +
       sizeof(struct nx_csbcpb);
 else
  VAR_8->kmem_len = (4 * VAR_6) +
       sizeof(struct nx_csbcpb);

 VAR_8->kmem = FUNC_0(VAR_8->kmem_len, VAR_2);
 if (!VAR_8->kmem)
  return -VAR_1;


 VAR_8->csbcpb = (struct nx_csbcpb *)(FUNC_3((u64)VAR_8->kmem,
             (u64)VAR_6));
 VAR_8->in_sg = (struct nx_sg *)((u8 *)VAR_8->csbcpb + VAR_6);
 VAR_8->out_sg = (struct nx_sg *)((u8 *)VAR_8->in_sg + VAR_6);

 if (VAR_10 == VAR_4 || VAR_10 == VAR_3)
  VAR_8->csbcpb_aead =
   (struct nx_csbcpb *)((u8 *)VAR_8->out_sg +
          VAR_6);



 VAR_8->stats = &VAR_7.stats;
 FUNC_1(VAR_8->props, VAR_7.of.ap[VAR_9][VAR_10],
        sizeof(struct alg_props) * 3);

 return 0;
}
