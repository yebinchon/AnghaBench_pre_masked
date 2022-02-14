
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int data; } ;
typedef enum dev_prop_type { ____Placeholder_dev_prop_type } dev_prop_type ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int,void*,size_t) ;

int FUNC_1(const struct acpi_device *VAR_1, const char *VAR_2,
         enum dev_prop_type VAR_3, void *VAR_4, size_t VAR_5)
{
 return VAR_1 ? FUNC_0(&VAR_1->data, VAR_2, VAR_3, VAR_4, VAR_5) : -VAR_0;
}
