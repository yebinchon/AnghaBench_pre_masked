
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;
struct stack_trace {int skip; scalar_t__ nr_entries; unsigned long* entries; scalar_t__ max_entries; } ;


 int FUNC_0 (struct unw_frame_info*,unsigned long*) ;
 scalar_t__ FUNC_1 (struct unw_frame_info*) ;

__attribute__((used)) static void
FUNC_2(struct unw_frame_info *VAR_0, void *VAR_1)
{
 struct stack_trace *VAR_2 = VAR_1;
 unsigned long VAR_3;
 int VAR_4 = VAR_2->skip;

 VAR_2->nr_entries = 0;
 do {
  FUNC_0(VAR_0, &VAR_3);
  if (VAR_3 == 0)
   break;
  if (VAR_4 == 0) {
   VAR_2->entries[VAR_2->nr_entries++] = VAR_3;
   if (VAR_2->nr_entries == VAR_2->max_entries)
    break;
  } else
   VAR_4--;
 } while (FUNC_1(VAR_0) >= 0);
}
