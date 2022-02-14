
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmmio_fault_page {int count; unsigned long addr; int list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kmmio_fault_page*) ;
 struct kmmio_fault_page* FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kmmio_fault_page*) ;
 int FUNC_3 (unsigned long) ;
 struct kmmio_fault_page* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_1)
{
 struct kmmio_fault_page *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  if (!VAR_2->count)
   FUNC_0(VAR_2);
  VAR_2->count++;
  return 0;
 }

 VAR_2 = FUNC_4(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return -1;

 VAR_2->count = 1;
 VAR_2->addr = VAR_1;

 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_2);
  return -1;
 }

 FUNC_5(&VAR_2->list, FUNC_3(VAR_2->addr));

 return 0;
}
