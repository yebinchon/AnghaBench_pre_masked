
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gio_device_id {int id; } ;
struct TYPE_2__ {int id; } ;
struct gio_device {TYPE_1__ id; } ;



const struct gio_device_id *FUNC_0(const struct gio_device_id *VAR_0,
       const struct gio_device *VAR_1)
{
 const struct gio_device_id *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->id != 0xff; VAR_2++)
  if (VAR_2->id == VAR_1->id.id)
   return VAR_2;

 return ((void*)0);
}
