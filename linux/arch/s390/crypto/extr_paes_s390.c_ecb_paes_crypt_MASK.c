
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int protkey; } ;
struct s390_paes_ctx {unsigned long fc; TYPE_1__ pk; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_10__ {TYPE_4__ virt; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_2__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; TYPE_5__ src; TYPE_3__ dst; } ;
struct blkcipher_desc {int tfm; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct s390_paes_ctx*) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 unsigned int FUNC_3 (unsigned long,int ,int ,int ,unsigned int) ;
 struct s390_paes_ctx* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_2,
     unsigned long VAR_3,
     struct blkcipher_walk *VAR_4)
{
 struct s390_paes_ctx *VAR_5 = FUNC_4(VAR_2->tfm);
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_4);
 while ((VAR_6 = VAR_4->nbytes) >= VAR_0) {

  VAR_7 = VAR_6 & ~(VAR_0 - 1);
  VAR_8 = FUNC_3(VAR_5->fc | VAR_3, VAR_5->pk.protkey,
        VAR_4->dst.virt.addr, VAR_4->src.virt.addr, VAR_7);
  if (VAR_8)
   VAR_9 = FUNC_1(VAR_2, VAR_4, VAR_6 - VAR_8);
  if (VAR_8 < VAR_7) {
   if (FUNC_0(VAR_5) != 0)
    return FUNC_1(VAR_2, VAR_4, -VAR_1);
  }
 }
 return VAR_9;
}
