
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int protkey; } ;
struct s390_paes_ctx {unsigned long fc; TYPE_1__ pk; } ;
struct TYPE_9__ {int * addr; } ;
struct TYPE_10__ {TYPE_4__ virt; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_2__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; int * iv; TYPE_5__ dst; TYPE_3__ src; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct s390_paes_ctx*) ;
 unsigned int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*,int) ;
 int FUNC_4 (unsigned long,int ,int *,int ,int,int *) ;
 struct s390_paes_ctx* FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int *,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct blkcipher_desc *VAR_4, unsigned long VAR_5,
     struct blkcipher_walk *VAR_6)
{
 struct s390_paes_ctx *VAR_7 = FUNC_5(VAR_4->tfm);
 u8 VAR_8[VAR_0], *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_8(&VAR_3);

 VAR_13 = FUNC_3(VAR_4, VAR_6, VAR_0);
 while ((VAR_10 = VAR_6->nbytes) >= VAR_0) {
  VAR_11 = VAR_0;
  if (VAR_10 >= 2*VAR_0 && VAR_14)
   VAR_11 = FUNC_1(VAR_2, VAR_6->iv, VAR_10);
  VAR_9 = (VAR_11 > VAR_0) ? VAR_2 : VAR_6->iv;
  VAR_12 = FUNC_4(VAR_7->fc | VAR_5, VAR_7->pk.protkey,
    VAR_6->dst.virt.addr, VAR_6->src.virt.addr,
    VAR_11, VAR_9);
  if (VAR_12) {
   if (VAR_9 == VAR_2)
    FUNC_7(VAR_6->iv, VAR_9 + VAR_12 - VAR_0,
           VAR_0);
   FUNC_6(VAR_6->iv, VAR_0);
   VAR_13 = FUNC_2(VAR_4, VAR_6, VAR_10 - VAR_11);
  }
  if (VAR_12 < VAR_11) {
   if (FUNC_0(VAR_7) != 0) {
    if (VAR_14)
     FUNC_9(&VAR_3);
    return FUNC_2(VAR_4, VAR_6, -VAR_1);
   }
  }
 }
 if (VAR_14)
  FUNC_9(&VAR_3);



 if (VAR_10) {
  while (1) {
   if (FUNC_4(VAR_7->fc | VAR_5,
     VAR_7->pk.protkey, VAR_8,
     VAR_6->src.virt.addr, VAR_0,
     VAR_6->iv) == VAR_0)
    break;
   if (FUNC_0(VAR_7) != 0)
    return FUNC_2(VAR_4, VAR_6, -VAR_1);
  }
  FUNC_7(VAR_6->dst.virt.addr, VAR_8, VAR_10);
  FUNC_6(VAR_6->iv, VAR_0);
  VAR_13 = FUNC_2(VAR_4, VAR_6, 0);
 }

 return VAR_13;
}
