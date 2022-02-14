
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_crypto_priv {int dev; TYPE_1__* ring; } ;
struct safexcel_command_desc {int last_seg; } ;
struct TYPE_2__ {int cdr; } ;


 scalar_t__ FUNC_0 (struct safexcel_command_desc*) ;
 int FUNC_1 (int ,char*) ;
 struct safexcel_command_desc* FUNC_2 (struct safexcel_crypto_priv*,int *) ;

void FUNC_3(struct safexcel_crypto_priv *VAR_0, int VAR_1)
{
 struct safexcel_command_desc *VAR_2;


 do {
  VAR_2 = FUNC_2(VAR_0, &VAR_0->ring[VAR_1].cdr);
  if (FUNC_0(VAR_2)) {
   FUNC_1(VAR_0->dev,
    "Could not retrieve the command descriptor\n");
   return;
  }
 } while (!VAR_2->last_seg);
}
