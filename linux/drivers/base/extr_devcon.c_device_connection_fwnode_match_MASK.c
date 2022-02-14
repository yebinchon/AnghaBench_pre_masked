
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_connection {int id; int fwnode; } ;
typedef void device ;
struct bus_type {int dummy; } ;


 void* FUNC_0 (struct bus_type*,int ) ;
 int FUNC_1 (void*) ;
 struct bus_type** VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void *FUNC_5(struct device_connection *VAR_1)
{
 struct bus_type *VAR_2;
 struct device *VAR_3;

 for (VAR_2 = VAR_0[0]; VAR_2; VAR_2++) {
  VAR_3 = FUNC_0(VAR_2, VAR_1->fwnode);
  if (VAR_3 && !FUNC_4(FUNC_1(VAR_3), VAR_1->id, FUNC_3(VAR_1->id)))
   return VAR_3;

  FUNC_2(VAR_3);
 }
 return ((void*)0);
}
