
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rings; } ;
struct safexcel_crypto_priv {TYPE_1__ config; } ;


 scalar_t__ FUNC_0 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ FUNC_1 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct safexcel_crypto_priv *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->config.rings; VAR_4++) {

  FUNC_3(FUNC_2(5, 0), FUNC_0(VAR_3, VAR_4) + VAR_2);
  FUNC_3(FUNC_2(7, 0), FUNC_1(VAR_3, VAR_4) + VAR_2);


  FUNC_3(0, FUNC_0(VAR_3, VAR_4) + VAR_1);
  FUNC_3(0, FUNC_0(VAR_3, VAR_4) + VAR_0);


  FUNC_3(0, FUNC_1(VAR_3, VAR_4) + VAR_1);
  FUNC_3(0, FUNC_1(VAR_3, VAR_4) + VAR_0);
 }
}
