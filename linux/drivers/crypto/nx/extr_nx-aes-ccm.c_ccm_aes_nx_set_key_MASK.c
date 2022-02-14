
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int key; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_8__ {TYPE_3__ aes_cca; TYPE_2__ hdr; TYPE_1__ aes_ccm; } ;
struct nx_csbcpb {TYPE_4__ cpb; } ;
struct nx_crypto_ctx {int * props; int * ap; struct nx_csbcpb* csbcpb_aead; struct nx_csbcpb* csbcpb; } ;
struct crypto_aead {int base; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nx_csbcpb*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct nx_crypto_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct nx_crypto_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_6,
         const u8 *VAR_7,
         unsigned int VAR_8)
{
 struct nx_crypto_ctx *VAR_9 = FUNC_1(&VAR_6->base);
 struct nx_csbcpb *VAR_10 = VAR_9->csbcpb;
 struct nx_csbcpb *VAR_11 = VAR_9->csbcpb_aead;

 FUNC_3(VAR_9, VAR_1);

 switch (VAR_8) {
 case 128:
  FUNC_0(VAR_10, VAR_2);
  FUNC_0(VAR_11, VAR_2);
  VAR_9->ap = &VAR_9->props[VAR_5];
  break;
 default:
  return -VAR_0;
 }

 VAR_10->cpb.hdr.mode = VAR_4;
 FUNC_2(VAR_10->cpb.aes_ccm.key, VAR_7, VAR_8);

 VAR_11->cpb.hdr.mode = VAR_3;
 FUNC_2(VAR_11->cpb.aes_cca.key, VAR_7, VAR_8);

 return 0;

}
