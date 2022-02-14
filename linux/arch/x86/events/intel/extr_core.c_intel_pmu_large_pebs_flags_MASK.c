
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sample_regs_user; int exclude_kernel; scalar_t__ use_clockid; } ;
struct perf_event {TYPE_1__ attr; } ;
struct TYPE_4__ {unsigned long large_pebs_flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static unsigned long FUNC_0(struct perf_event *VAR_5)
{
 unsigned long VAR_6 = VAR_4.large_pebs_flags;

 if (VAR_5->attr.use_clockid)
  VAR_6 &= ~VAR_3;
 if (!VAR_5->attr.exclude_kernel)
  VAR_6 &= ~VAR_2;
 if (VAR_5->attr.sample_regs_user & ~VAR_0)
  VAR_6 &= ~(VAR_2 | VAR_1);
 return VAR_6;
}
