
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int bp_type; int bp_addr; int bp_len; int exclude_hv; int exclude_kernel; int exclude_user; } ;
struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int address; int len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;

int FUNC_2(struct perf_event *VAR_11,
        const struct perf_event_attr *VAR_12,
        struct arch_hw_breakpoint *VAR_13)
{
 int VAR_14 = -VAR_0, VAR_15;

 if (!VAR_11)
  return VAR_14;

 VAR_13->type = VAR_8;
 if (VAR_12->bp_type & VAR_3)
  VAR_13->type |= VAR_7;
 if (VAR_12->bp_type & VAR_4)
  VAR_13->type |= VAR_10;
 if (VAR_13->type == VAR_8)

  return VAR_14;
 if (!VAR_12->exclude_user)
  VAR_13->type |= VAR_9;
 if (!VAR_12->exclude_kernel)
  VAR_13->type |= VAR_6;
 if (!VAR_12->exclude_hv)
  VAR_13->type |= VAR_5;
 VAR_13->address = VAR_12->bp_addr;
 VAR_13->len = VAR_12->bp_len;







 if (!FUNC_1())
  return -VAR_1;
 VAR_15 = 8;
 if (FUNC_0()) {
  VAR_15 = 512 ;

  if ((VAR_12->bp_addr >> 9) !=
      ((VAR_12->bp_addr + VAR_12->bp_len - 1) >> 9))
   return -VAR_0;
 }
 if (VAR_13->len >
     (VAR_15 - (VAR_13->address & VAR_2)))
  return -VAR_0;
 return 0;
}
