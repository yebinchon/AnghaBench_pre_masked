
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_tfm*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1, const u8 *VAR_2,
     unsigned int VAR_3)
{
 u8 VAR_4[VAR_0];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
  VAR_4[VAR_3 - VAR_5 - 1] = VAR_2[VAR_5];

 return FUNC_0(VAR_1, VAR_4, VAR_3);
}
