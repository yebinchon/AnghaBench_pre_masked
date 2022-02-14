
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
typedef int acpi_thread_id ;
typedef int acpi_osd_exec_callback ;
struct TYPE_2__ {int lock; struct task_struct* thread; void* context; int function; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct task_struct* FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct task_struct*) ;

__attribute__((used)) static int FUNC_8(acpi_osd_exec_callback VAR_2, void *VAR_3)
{
 struct task_struct *VAR_4;

 FUNC_4(&VAR_0.lock);
 VAR_0.function = VAR_2;
 VAR_0.context = VAR_3;
 FUNC_5(&VAR_0.lock);

 VAR_4 = FUNC_3(VAR_1, ((void*)0), "aml");
 if (FUNC_0(VAR_4)) {
  FUNC_6("Failed to create AML debugger thread.\n");
  return FUNC_1(VAR_4);
 }

 FUNC_4(&VAR_0.lock);
 VAR_0.thread = VAR_4;
 FUNC_2((acpi_thread_id)(unsigned long)VAR_4);
 FUNC_7(VAR_4);
 FUNC_5(&VAR_0.lock);
 return 0;
}
