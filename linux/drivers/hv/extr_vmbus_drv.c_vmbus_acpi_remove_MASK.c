
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {struct resource* sibling; } ;
struct acpi_device {int dummy; } ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (struct resource*,int ,int ) ;
 TYPE_1__* VAR_0 ;
 struct resource* VAR_1 ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_2)
{
 struct resource *VAR_3;
 struct resource *VAR_4;

 if (VAR_1) {
  if (VAR_0) {
   FUNC_0(VAR_1, VAR_0->start,
      FUNC_2(VAR_0));
   VAR_0 = ((void*)0);
  }

  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_4) {
   VAR_4 = VAR_3->sibling;
   FUNC_1(VAR_3);
  }
 }

 return 0;
}
