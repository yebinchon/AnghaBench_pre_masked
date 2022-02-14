
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext_code {int dummy; } ;
struct cpu_cf_events {int flags; int alert; int info; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int,int *) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 struct cpu_cf_events* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ext_code VAR_7,
        unsigned int VAR_8, unsigned long VAR_9)
{
 struct cpu_cf_events *VAR_10;

 if (!(VAR_8 & VAR_2))
  return;

 FUNC_1(VAR_4);
 VAR_10 = FUNC_6(&VAR_6);



 if (!(VAR_10->flags & VAR_5))
  return;


 if (VAR_8 & VAR_0)
  FUNC_4(&VAR_10->info);


 if (VAR_8 & VAR_1)
  FUNC_2("CPU[%i] Counter data was lost\n", FUNC_5());


 if (VAR_8 & VAR_3)
  FUNC_3("CPU[%i] MT counter data was lost\n",
   FUNC_5());


 FUNC_0(VAR_8, &VAR_10->alert);
}
