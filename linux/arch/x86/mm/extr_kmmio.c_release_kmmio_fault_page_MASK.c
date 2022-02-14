
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmmio_fault_page {scalar_t__ count; int scheduled_for_release; struct kmmio_fault_page* release_next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kmmio_fault_page*) ;
 struct kmmio_fault_page* FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0,
    struct kmmio_fault_page **VAR_1)
{
 struct kmmio_fault_page *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return;

 VAR_2->count--;
 FUNC_0(VAR_2->count < 0);
 if (!VAR_2->count) {
  FUNC_1(VAR_2);
  if (!VAR_2->scheduled_for_release) {
   VAR_2->release_next = *VAR_1;
   *VAR_1 = VAR_2;
   VAR_2->scheduled_for_release = 1;
  }
 }
}
