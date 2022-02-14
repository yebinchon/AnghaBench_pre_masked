
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s390_paes_ctx {int kb; } ;
struct crypto_tfm {int crt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct s390_paes_ctx*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int *) ;
 struct s390_paes_ctx* FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 int VAR_5;
 struct s390_paes_ctx *VAR_6 = FUNC_3(VAR_2);

 FUNC_2(&VAR_6->kb);
 VAR_5 = FUNC_1(&VAR_6->kb, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_0(VAR_6)) {
  VAR_2->crt_flags |= VAR_0;
  return -VAR_1;
 }
 return 0;
}
