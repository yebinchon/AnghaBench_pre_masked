
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s390_aes_ctx {unsigned long fc; int key; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct blkcipher_desc {int tfm; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_2 (unsigned long,int ,int ,int ,unsigned int) ;
 struct s390_aes_ctx* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_1, unsigned long VAR_2,
    struct blkcipher_walk *VAR_3)
{
 struct s390_aes_ctx *VAR_4 = FUNC_3(VAR_1->tfm);
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_3);
 while ((VAR_5 = VAR_3->nbytes) >= VAR_0) {

  VAR_6 = VAR_5 & ~(VAR_0 - 1);
  FUNC_2(VAR_4->fc | VAR_2, VAR_4->key,
    VAR_3->dst.virt.addr, VAR_3->src.virt.addr, VAR_6);
  VAR_7 = FUNC_0(VAR_1, VAR_3, VAR_5 - VAR_6);
 }

 return VAR_7;
}
