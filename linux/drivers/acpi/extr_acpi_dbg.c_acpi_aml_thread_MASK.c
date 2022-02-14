
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* acpi_osd_exec_callback ) (void*) ;
struct TYPE_2__ {int lock; int wait; int * thread; int usages; void* context; int (* function ) (void*) ;} ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 acpi_osd_exec_callback VAR_2 = ((void*)0);
 void *VAR_3;

 FUNC_1(&VAR_0.lock);
 if (VAR_0.function) {
  VAR_0.usages++;
  VAR_2 = VAR_0.function;
  VAR_3 = VAR_0.context;
 }
 FUNC_2(&VAR_0.lock);

 if (VAR_2)
  VAR_2(VAR_3);

 FUNC_1(&VAR_0.lock);
 VAR_0.usages--;
 if (!FUNC_0()) {
  VAR_0.thread = ((void*)0);
  FUNC_3(&VAR_0.wait);
 }
 FUNC_2(&VAR_0.lock);

 return 0;
}
