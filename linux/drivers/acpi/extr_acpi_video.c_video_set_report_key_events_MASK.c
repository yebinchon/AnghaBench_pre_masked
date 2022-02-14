
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_system_id {scalar_t__ driver_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct dmi_system_id *VAR_1)
{
 if (VAR_0 == -1)
  VAR_0 = (uintptr_t)VAR_1->driver_data;
 return 0;
}
