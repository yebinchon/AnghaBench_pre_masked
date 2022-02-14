
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pes; } ;
struct safexcel_crypto_priv {int dev; TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct safexcel_crypto_priv *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7, VAR_8;

 if (VAR_4)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_3->config.pes; VAR_5++) {
  VAR_7 = FUNC_1(VAR_5);
  VAR_6 = VAR_2;
  while (VAR_6 &&
         (FUNC_3(FUNC_0(VAR_3) + VAR_7 +
         VAR_8) != 1)) {
   VAR_6--;
  }
  if (!VAR_6) {
   FUNC_2(VAR_3->dev, "FW(%d) for PE %d failed to start\n",
    VAR_4, VAR_5);
   return 0;
  }
 }
 return 1;
}
