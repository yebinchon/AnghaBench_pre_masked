
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {scalar_t__ cpu; TYPE_1__* freq_table; } ;
struct TYPE_2__ {unsigned int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,unsigned int*,unsigned int*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int*,unsigned int*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_7)
{
 int VAR_8;
 unsigned int *VAR_9, *VAR_10;


 if (VAR_7->cpu != 0)
  return -VAR_1;

 VAR_8 = FUNC_3();
 if (VAR_8) {
  FUNC_0("fails in acquiring ownership of a SMI interface.\n");
  return -VAR_0;
 }


 VAR_9 = &VAR_4[VAR_3].frequency;
 VAR_10 = &VAR_4[VAR_2].frequency;

 VAR_8 = FUNC_2(VAR_9, VAR_10);
 if (VAR_8) {


  FUNC_0("could not detect low and high frequencies "
    "by SMI call.\n");
  VAR_8 = FUNC_1(VAR_5,
    VAR_9, VAR_10,
    ((void*)0),
    &VAR_6);

  if (VAR_8) {
   FUNC_0("could not detect two different speeds"
     " -- aborting.\n");
   return VAR_8;
  } else
   FUNC_0("workaround worked.\n");
 }

 VAR_7->freq_table = VAR_4;

 return 0;
}
