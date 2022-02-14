
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_3(int VAR_6)
{
 if (VAR_6 == VAR_2) {
  FUNC_1(VAR_5.dev, "Charging Error!\n");
 } else if (VAR_6 == VAR_3) {
  FUNC_0(VAR_5.dev, "Charge LED On\n");
  FUNC_2(VAR_4, VAR_0);
 } else {
  FUNC_0(VAR_5.dev, "Charge LED Off\n");
  FUNC_2(VAR_4, VAR_1);
 }
}
