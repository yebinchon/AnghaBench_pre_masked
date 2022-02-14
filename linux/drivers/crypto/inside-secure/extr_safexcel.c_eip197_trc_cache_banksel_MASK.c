
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct safexcel_crypto_priv {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct safexcel_crypto_priv *VAR_3,
         u32 VAR_4, int *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = VAR_4 >> 16;
 if (VAR_7 != *VAR_5) {
  VAR_6 = FUNC_0(VAR_3->base + VAR_2);
  VAR_6 = (VAR_6 & ~VAR_0) |
        (VAR_7 << VAR_1);
  FUNC_1(VAR_6, VAR_3->base + VAR_2);
  *VAR_5 = VAR_7;
 }
}
