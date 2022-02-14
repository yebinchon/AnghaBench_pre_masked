
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {TYPE_3__ virt; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_7__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int tfm; } ;
struct TYPE_10__ {int encrypt; int decrypt; } ;
struct aes_ctx {TYPE_5__ cword; int D; } ;


 unsigned int VAR_0 ;
 struct aes_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_1,
      struct scatterlist *VAR_2, struct scatterlist *VAR_3,
      unsigned int VAR_4)
{
 struct aes_ctx *VAR_5 = FUNC_0(VAR_1->tfm);
 struct blkcipher_walk VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5->cword.decrypt);

 FUNC_2(&VAR_6, VAR_2, VAR_3, VAR_4);
 VAR_7 = FUNC_3(VAR_1, &VAR_6);

 while ((VAR_4 = VAR_6.nbytes)) {
  FUNC_6(VAR_6.src.virt.addr, VAR_6.dst.virt.addr,
       VAR_5->D, &VAR_5->cword.decrypt,
       VAR_4 / VAR_0);
  VAR_4 &= VAR_0 - 1;
  VAR_7 = FUNC_1(VAR_1, &VAR_6, VAR_4);
 }

 FUNC_5(&VAR_5->cword.encrypt);

 return VAR_7;
}
