
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int nh_monstate; int nh_caller_name; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct nlm_host*) ;
 int FUNC_3 (struct nlm_host*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct nlm_host *VAR_2 = (struct nlm_host *) VAR_1;

 FUNC_0(1, "NLM: client lock recovery for %s started\n",
     VAR_2->nh_caller_name);

 FUNC_2(VAR_2);

 FUNC_0(1, "NLM: client lock recovery for %s completed\n",
     VAR_2->nh_caller_name);

 VAR_2->nh_monstate = VAR_0;
 FUNC_3(VAR_2);

 FUNC_1();
}
