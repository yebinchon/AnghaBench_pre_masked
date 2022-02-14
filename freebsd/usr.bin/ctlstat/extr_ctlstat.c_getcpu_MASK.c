
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_cpu_stats {long user; long nice; long system; long intr; long idle; } ;
typedef int cp_time ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*,long**,size_t*,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct ctl_cpu_stats *VAR_6)
{
 long VAR_7[VAR_0];
 size_t VAR_8;

 VAR_8 = sizeof(VAR_7);

 if (FUNC_0("kern.cp_time", &VAR_7, &VAR_8, ((void*)0), 0) == -1) {
  FUNC_1("sysctlbyname(kern.cp_time...) failed");
  return (1);
 }

 VAR_6->user = VAR_7[VAR_5];
 VAR_6->nice = VAR_7[VAR_3];
 VAR_6->system = VAR_7[VAR_4];
 VAR_6->intr = VAR_7[VAR_2];
 VAR_6->idle = VAR_7[VAR_1];

 return (0);
}
