
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_dev_scope {int dummy; } ;
struct acpi_dmar_device_scope {scalar_t__ entry_type; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (char*) ;

void *FUNC_2(void *VAR_6, void *VAR_7, int *VAR_8)
{
 struct acpi_dmar_device_scope *VAR_9;

 *VAR_8 = 0;
 while (VAR_6 < VAR_7) {
  VAR_9 = VAR_6;
  if (VAR_9->entry_type == VAR_4 ||
      VAR_9->entry_type == VAR_1 ||
      VAR_9->entry_type == VAR_0)
   (*VAR_8)++;
  else if (VAR_9->entry_type != VAR_3 &&
   VAR_9->entry_type != VAR_2) {
   FUNC_1("Unsupported device scope\n");
  }
  VAR_6 += VAR_9->length;
 }
 if (*VAR_8 == 0)
  return ((void*)0);

 return FUNC_0(*VAR_8, sizeof(struct dmar_dev_scope), VAR_5);
}
