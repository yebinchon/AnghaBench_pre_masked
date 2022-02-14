
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_proc_context {int (* preproc ) (struct acpi_resource*,void*) ;int count; int error; void* preproc_data; struct list_head* list; } ;
struct list_head {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,struct res_proc_context*) ;
 int FUNC_4 (struct list_head*) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_3,
        struct list_head *VAR_4,
        int (*VAR_5)(struct acpi_resource *, void *),
        void *VAR_6, char *VAR_7)
{
 struct res_proc_context VAR_8;
 acpi_status VAR_9;

 if (!VAR_3 || !VAR_3->handle || !FUNC_4(VAR_4))
  return -VAR_0;

 if (!FUNC_2(VAR_3->handle, VAR_7))
  return 0;

 VAR_8.list = VAR_4;
 VAR_8.preproc = VAR_5;
 VAR_8.preproc_data = VAR_6;
 VAR_8.count = 0;
 VAR_8.error = 0;
 VAR_9 = FUNC_3(VAR_3->handle, VAR_7,
         VAR_2, &VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_1(VAR_4);
  return VAR_8.error ? VAR_8.error : -VAR_1;
 }

 return VAR_8.count;
}
