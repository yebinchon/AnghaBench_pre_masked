
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {unsigned long address; scalar_t__ mask; int type; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int ,unsigned long) ;
 int * VAR_2 ;
 struct arch_hw_breakpoint* FUNC_2 (struct perf_event*) ;
 int * VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_3 (int,int ,int ) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (scalar_t__,int) ;
 void* FUNC_6 (int *) ;

int FUNC_7(struct perf_event *VAR_5)
{
 struct arch_hw_breakpoint *VAR_6 = FUNC_2(VAR_5);
 unsigned long *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  struct perf_event **VAR_9 = FUNC_6(&VAR_2[VAR_8]);

  if (!*VAR_9) {
   *VAR_9 = VAR_5;
   break;
  }
 }

 if (FUNC_0(VAR_8 == VAR_1, "Can't find any breakpoint slot"))
  return -VAR_0;

 FUNC_4(VAR_6->address, VAR_8);
 FUNC_1(VAR_3[VAR_8], VAR_6->address);

 VAR_7 = FUNC_6(&VAR_4);
 *VAR_7 |= FUNC_3(VAR_8, VAR_6->len, VAR_6->type);

 FUNC_4(*VAR_7, 7);
 if (VAR_6->mask)
  FUNC_5(VAR_6->mask, VAR_8);

 return 0;
}
