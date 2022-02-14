
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_connection {int * endpoint; scalar_t__ fwnode; } ;
typedef void device ;
struct bus_type {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct bus_type*,int *,int ) ;
 void* FUNC_2 (struct device_connection*) ;
 struct bus_type** VAR_1 ;

__attribute__((used)) static void *FUNC_3(struct device_connection *VAR_2, int VAR_3, void *VAR_4)
{
 struct bus_type *VAR_5;
 struct device *VAR_6;

 if (VAR_2->fwnode)
  return FUNC_2(VAR_2);

 for (VAR_5 = VAR_1[0]; VAR_5; VAR_5++) {
  VAR_6 = FUNC_1(VAR_5, ((void*)0), VAR_2->endpoint[VAR_3]);
  if (VAR_6)
   return VAR_6;
 }





 return FUNC_0(-VAR_0);
}
