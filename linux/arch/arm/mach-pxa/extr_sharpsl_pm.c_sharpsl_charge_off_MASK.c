
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int charge_mode; TYPE_1__* machinfo; int dev; } ;
struct TYPE_3__ {int (* charge ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 FUNC_0(VAR_3.dev, "Turning Charger Off\n");

 VAR_3.machinfo->charge(0);
 FUNC_2(VAR_1);
 VAR_3.charge_mode = VAR_0;

 FUNC_1(&VAR_2, 0);
}
