
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int data; } ;
typedef enum dev_prop_type { ____Placeholder_dev_prop_type } dev_prop_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int,void*) ;

int FUNC_1(struct acpi_device *VAR_2, const char *VAR_3,
         enum dev_prop_type VAR_4, void *VAR_5)
{
 int VAR_6;

 if (!VAR_2)
  return -VAR_1;

 VAR_6 = FUNC_0(&VAR_2->data, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0 || VAR_4 != VAR_0)
  return VAR_6;
 return 0;
}
