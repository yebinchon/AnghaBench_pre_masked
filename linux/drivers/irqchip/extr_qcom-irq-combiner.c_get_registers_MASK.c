
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct get_registers_context {int err; struct combiner* combiner; int * dev; } ;
struct combiner {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,struct get_registers_context*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3, struct combiner *VAR_4)
{
 acpi_handle VAR_5 = FUNC_1(&VAR_3->dev);
 acpi_status VAR_6;
 struct get_registers_context VAR_7;

 if (!FUNC_2(VAR_5, VAR_1))
  return -VAR_0;

 VAR_7.dev = &VAR_3->dev;
 VAR_7.combiner = VAR_4;
 VAR_7.err = 0;

 VAR_6 = FUNC_3(VAR_5, VAR_1,
         VAR_2, &VAR_7);
 if (FUNC_0(VAR_6))
  return VAR_7.err;
 return 0;
}
