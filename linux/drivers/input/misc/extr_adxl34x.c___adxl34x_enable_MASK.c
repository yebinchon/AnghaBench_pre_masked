
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power_mode; } ;
struct adxl34x {TYPE_1__ pdata; } ;


 int FUNC_0 (struct adxl34x*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct adxl34x *VAR_2)
{
 FUNC_0(VAR_2, VAR_1, VAR_2->pdata.power_mode | VAR_0);
}
