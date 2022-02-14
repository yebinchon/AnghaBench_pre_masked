
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuid {int machine; } ;
struct TYPE_2__ {int csvn; int cfvn; } ;
struct cpu_cf_events {TYPE_1__ info; } ;
struct cf_trailer_entry {int speed; int clock_base; int timestamp; int tod_base; scalar_t__ cpu_speed; int mach_type; int csvn; int cfvn; } ;
typedef int __u64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuid*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 struct cpu_cf_events* FUNC_3 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_4(struct cf_trailer_entry *VAR_3)
{
 struct cpu_cf_events *VAR_4 = FUNC_3(&VAR_1);
 struct cpuid VAR_5;

 VAR_3->cfvn = VAR_4->info.cfvn;
 VAR_3->csvn = VAR_4->info.csvn;

 FUNC_0(&VAR_5);
 VAR_3->mach_type = VAR_5.machine;
 VAR_3->cpu_speed = VAR_0;
 if (VAR_3->cpu_speed)
  VAR_3->speed = 1;
 VAR_3->clock_base = 1;
 FUNC_1(&VAR_3->tod_base, &VAR_2[1], 8);
 FUNC_2((__u64 *)&VAR_3->timestamp);
}
