
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct scatterlist {int dummy; } ;
struct des_sparc64_ctx {int * encrypt_expkey; } ;
struct TYPE_7__ {scalar_t__ addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; scalar_t__ iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int flags; int tfm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 struct des_sparc64_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int const*,int *,unsigned int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct blkcipher_desc *VAR_3,
         struct scatterlist *VAR_4, struct scatterlist *VAR_5,
         unsigned int VAR_6)
{
 struct des_sparc64_ctx *VAR_7 = FUNC_3(VAR_3->tfm);
 struct blkcipher_walk VAR_8;
 int VAR_9;

 FUNC_1(&VAR_8, VAR_4, VAR_5, VAR_6);
 VAR_9 = FUNC_2(VAR_3, &VAR_8);
 VAR_3->flags &= ~VAR_0;

 FUNC_5(&VAR_7->encrypt_expkey[0]);
 while ((VAR_6 = VAR_8.nbytes)) {
  unsigned int VAR_10 = VAR_6 & VAR_1;

  if (FUNC_7(VAR_10)) {
   FUNC_4((const u64 *)VAR_8.src.virt.addr,
      (u64 *) VAR_8.dst.virt.addr,
      VAR_10, (u64 *) VAR_8.iv);
  }
  VAR_6 &= VAR_2 - 1;
  VAR_9 = FUNC_0(VAR_3, &VAR_8, VAR_6);
 }
 FUNC_6(0);
 return VAR_9;
}
