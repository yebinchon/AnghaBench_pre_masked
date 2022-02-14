
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rings; } ;
struct safexcel_crypto_priv {scalar_t__ base; TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct safexcel_crypto_priv *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  FUNC_4(0, VAR_3->base + FUNC_3(VAR_4));





 for (VAR_4 = 0; VAR_4 < VAR_3->config.rings; VAR_4++) {
  FUNC_4(0, VAR_3->base + FUNC_1(VAR_4));
  FUNC_4(0, VAR_3->base + FUNC_0(VAR_4));
  FUNC_4(VAR_1,
         VAR_3->base + FUNC_2(VAR_4));
 }
 FUNC_4(0, VAR_3->base + VAR_2);
 FUNC_4(0, VAR_3->base + VAR_0);
}
