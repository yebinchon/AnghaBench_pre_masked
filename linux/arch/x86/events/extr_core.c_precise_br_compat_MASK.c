
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int branch_sample_type; int exclude_kernel; int exclude_user; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct perf_event *VAR_3)
{
 u64 VAR_4 = VAR_3->attr.branch_sample_type;
 u64 VAR_5 = 0;


 if (!(VAR_4 & VAR_0))
  return 0;

 VAR_4 &= VAR_1 | VAR_2;

 if (!VAR_3->attr.exclude_user)
  VAR_5 |= VAR_2;

 if (!VAR_3->attr.exclude_kernel)
  VAR_5 |= VAR_1;





 return VAR_4 == VAR_5;
}
