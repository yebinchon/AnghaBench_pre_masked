
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pes; } ;
struct safexcel_crypto_priv {TYPE_1__ config; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct safexcel_crypto_priv *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_9->config.pes; VAR_10++) {

  FUNC_9(3, FUNC_0(VAR_9) + FUNC_4(VAR_10));
  FUNC_9(0, FUNC_0(VAR_9) + FUNC_2(VAR_10));


  VAR_12 = FUNC_8(FUNC_0(VAR_9) + FUNC_6(VAR_10));
  VAR_12 |= VAR_3 |
         VAR_5 |
         VAR_4 |
         VAR_2;
  FUNC_9(VAR_12, FUNC_0(VAR_9) + FUNC_6(VAR_10));


  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
   FUNC_9(0, FUNC_0(VAR_9) +
      FUNC_7(VAR_10) + (VAR_11 << 2));


  FUNC_9(VAR_8 |
         VAR_6 |
         VAR_7,
         FUNC_0(VAR_9) + FUNC_1(VAR_10));


  FUNC_9(VAR_8 |
         VAR_6 |
         VAR_7,
         FUNC_0(VAR_9) + FUNC_3(VAR_10));


  FUNC_9(VAR_1,
         FUNC_0(VAR_9) + FUNC_5(VAR_10));
 }

}
