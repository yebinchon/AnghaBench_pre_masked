
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pes; } ;
struct safexcel_crypto_priv {TYPE_1__ config; } ;


 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct safexcel_crypto_priv*,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_7(struct safexcel_crypto_priv *VAR_2,
      int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2->config.pes; VAR_6++) {

  FUNC_6(0, FUNC_0(VAR_2) + FUNC_3(VAR_6));


  if (VAR_5)
   VAR_7 = 0;
  else
   VAR_7 = FUNC_4((VAR_4 - 1) &
     VAR_1) |
    VAR_0;
  FUNC_6(VAR_7, FUNC_0(VAR_2) + FUNC_1(VAR_6));


  if (VAR_5)
   VAR_7 = 0;
  else
   VAR_7 = FUNC_4((VAR_3 - 1) &
     VAR_1) |
    VAR_0;
  FUNC_6(VAR_7, FUNC_0(VAR_2) + FUNC_2(VAR_6));
 }


 if (VAR_5)
  return 1;


 if (!FUNC_5(VAR_2, 1))
  return 0;
 if (!FUNC_5(VAR_2, 0))
  return 0;

 return 1;
}
