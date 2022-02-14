
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int acpi_status ;
struct TYPE_5__ {scalar_t__ address; } ;
struct TYPE_4__ {scalar_t__ address; } ;
struct TYPE_6__ {TYPE_2__ sleep_status; TYPE_1__ sleep_control; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int *) ;

bool FUNC_2(u8 VAR_2)
{
 acpi_status VAR_3;
 u8 VAR_4, VAR_5;

 VAR_3 = FUNC_1(VAR_2, &VAR_4, &VAR_5);
 return FUNC_0(VAR_3) && (!VAR_1
  || (VAR_0.sleep_control.address
   && VAR_0.sleep_status.address));
}
