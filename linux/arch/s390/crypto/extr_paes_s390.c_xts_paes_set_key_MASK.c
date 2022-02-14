
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct s390_pxts_ctx {TYPE_1__* pk; int * kb; } ;
struct crypto_tfm {int crt_flags; } ;
struct TYPE_2__ {scalar_t__ type; int protkey; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct s390_pxts_ctx*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int *) ;
 struct s390_pxts_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct crypto_tfm*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_6, const u8 *VAR_7,
       unsigned int VAR_8)
{
 int VAR_9;
 struct s390_pxts_ctx *VAR_10 = FUNC_3(VAR_6);
 u8 VAR_11[2 * VAR_2];
 unsigned int VAR_12, VAR_13;

 if (VAR_8 % 2)
  return -VAR_4;

 VAR_13 = VAR_8 / 2;

 FUNC_2(&VAR_10->kb[0]);
 FUNC_2(&VAR_10->kb[1]);
 VAR_9 = FUNC_1(&VAR_10->kb[0], VAR_7, VAR_13);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_1(&VAR_10->kb[1], VAR_7 + VAR_13, VAR_13);
 if (VAR_9)
  return VAR_9;

 if (FUNC_0(VAR_10)) {
  VAR_6->crt_flags |= VAR_3;
  return -VAR_4;
 }






 VAR_12 = (VAR_10->pk[0].type == VAR_5) ?
  VAR_0 : VAR_1;
 FUNC_4(VAR_11, VAR_10->pk[0].protkey, VAR_12);
 FUNC_4(VAR_11 + VAR_12, VAR_10->pk[1].protkey, VAR_12);
 return FUNC_5(VAR_6, VAR_11, 2*VAR_12);
}
