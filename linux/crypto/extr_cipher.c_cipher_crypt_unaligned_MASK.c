
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct crypto_tfm {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct crypto_tfm*) ;
 unsigned int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(void (*VAR_2)(struct crypto_tfm *, u8 *,
           const u8 *),
       struct crypto_tfm *VAR_3,
       u8 *VAR_4, const u8 *VAR_5)
{
 unsigned long VAR_6 = FUNC_1(VAR_3);
 unsigned int VAR_7 = FUNC_2(VAR_3);
 u8 VAR_8[VAR_1 + VAR_0];
 u8 *VAR_9 = (u8 *)FUNC_0((unsigned long)VAR_8, VAR_6 + 1);

 FUNC_3(VAR_9, VAR_5, VAR_7);
 VAR_2(VAR_3, VAR_9, VAR_9);
 FUNC_3(VAR_4, VAR_9, VAR_7);
}
