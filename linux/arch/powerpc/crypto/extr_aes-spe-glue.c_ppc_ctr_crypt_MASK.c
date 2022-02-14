
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct ppc_aes_ctx {int rounds; int key_enc; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; int iv; TYPE_4__ src; TYPE_2__ dst; } ;
struct blkcipher_desc {int flags; int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,int) ;
 struct ppc_aes_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,unsigned int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_3, struct scatterlist *VAR_4,
    struct scatterlist *VAR_5, unsigned int VAR_6)
{
 struct ppc_aes_ctx *VAR_7 = FUNC_3(VAR_3->tfm);
 struct blkcipher_walk VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 VAR_3->flags &= ~VAR_1;
 FUNC_1(&VAR_8, VAR_4, VAR_5, VAR_6);
 VAR_11 = FUNC_2(VAR_3, &VAR_8, VAR_0);

 while ((VAR_9 = VAR_8.nbytes)) {
  VAR_9 = VAR_9 > VAR_2 ? VAR_2 : VAR_9;
  VAR_9 = VAR_9 == VAR_6 ?
    VAR_6 : VAR_9 & ~(VAR_0 - 1);
  VAR_10 = VAR_8.nbytes - VAR_9;

  FUNC_5();
  FUNC_4(VAR_8.dst.virt.addr, VAR_8.src.virt.addr,
         VAR_7->key_enc, VAR_7->rounds, VAR_9 , VAR_8.iv);
  FUNC_6();

  VAR_6 -= VAR_9;
  VAR_11 = FUNC_0(VAR_3, &VAR_8, VAR_10);
 }

 return VAR_11;
}
