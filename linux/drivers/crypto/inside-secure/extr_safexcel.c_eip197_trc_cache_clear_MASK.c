
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct safexcel_crypto_priv {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct safexcel_crypto_priv *VAR_3,
       int VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8, VAR_9;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_9 = VAR_0 + VAR_6 * VAR_1;

  FUNC_3(FUNC_0(VAR_2) |
         FUNC_1(VAR_2),
         VAR_3->base + VAR_9);

  VAR_8 = FUNC_0(VAR_6 + 1) | FUNC_1(VAR_6 - 1);
  if (VAR_6 == 0)
   VAR_8 |= FUNC_1(VAR_2);
  else if (VAR_6 == VAR_4 - 1)
   VAR_8 |= FUNC_0(VAR_2);
  FUNC_3(VAR_8, VAR_3->base + VAR_9 + 4);

  FUNC_3(0, VAR_3->base + VAR_9 + 8);
  FUNC_3(0, VAR_3->base + VAR_9 + 12);
 }


 VAR_7 = VAR_4 * VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_3(FUNC_2(29, 0),
         VAR_3->base + VAR_0 +
         VAR_7 + VAR_6 * sizeof(u32));
}
