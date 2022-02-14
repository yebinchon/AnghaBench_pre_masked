
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct s390_aes_ctx {unsigned long fc; int key; } ;
struct TYPE_7__ {int * addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct blkcipher_walk {unsigned int nbytes; int * iv; TYPE_4__ dst; TYPE_2__ src; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*,int) ;
 int FUNC_3 (unsigned long,int ,int *,int ,int,int *) ;
 struct s390_aes_ctx* FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct blkcipher_desc *VAR_3, unsigned long VAR_4,
    struct blkcipher_walk *VAR_5)
{
 struct s390_aes_ctx *VAR_6 = FUNC_4(VAR_3->tfm);
 u8 VAR_7[VAR_0], *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_7(&VAR_2);

 VAR_11 = FUNC_2(VAR_3, VAR_5, VAR_0);
 while ((VAR_10 = VAR_5->nbytes) >= VAR_0) {
  VAR_9 = VAR_0;
  if (VAR_10 >= 2*VAR_0 && VAR_12)
   VAR_9 = FUNC_0(VAR_1, VAR_5->iv, VAR_10);
  VAR_8 = (VAR_9 > VAR_0) ? VAR_1 : VAR_5->iv;
  FUNC_3(VAR_6->fc | VAR_4, VAR_6->key,
       VAR_5->dst.virt.addr, VAR_5->src.virt.addr,
       VAR_9, VAR_8);
  if (VAR_8 == VAR_1)
   FUNC_6(VAR_5->iv, VAR_8 + VAR_9 - VAR_0,
          VAR_0);
  FUNC_5(VAR_5->iv, VAR_0);
  VAR_11 = FUNC_1(VAR_3, VAR_5, VAR_10 - VAR_9);
 }
 if (VAR_12)
  FUNC_8(&VAR_2);



 if (VAR_10) {
  FUNC_3(VAR_6->fc | VAR_4, VAR_6->key,
       VAR_7, VAR_5->src.virt.addr,
       VAR_0, VAR_5->iv);
  FUNC_6(VAR_5->dst.virt.addr, VAR_7, VAR_10);
  FUNC_5(VAR_5->iv, VAR_0);
  VAR_11 = FUNC_1(VAR_3, VAR_5, 0);
 }

 return VAR_11;
}
