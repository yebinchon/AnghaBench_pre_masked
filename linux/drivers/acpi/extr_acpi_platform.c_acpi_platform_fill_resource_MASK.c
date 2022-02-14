
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int parent; } ;
struct device {int dummy; } ;
struct acpi_device {int parent; } ;


 struct device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct resource*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct acpi_device *VAR_0,
 const struct resource *VAR_1, struct resource *VAR_2)
{
 struct device *VAR_3;

 *VAR_2 = *VAR_1;





 VAR_3 = FUNC_0(VAR_0->parent);
 if (VAR_3 && FUNC_1(VAR_3))
  VAR_2->parent = FUNC_2(FUNC_3(VAR_3), VAR_2);
}
