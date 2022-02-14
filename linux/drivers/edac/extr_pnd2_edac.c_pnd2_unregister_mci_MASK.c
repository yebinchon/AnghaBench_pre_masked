
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int ctl_name; int pvt_info; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_1)
{
 if (FUNC_4(!VAR_1 || !VAR_1->pvt_info)) {
  FUNC_3(VAR_0, "Couldn't find mci handler\n");
  return;
 }


 FUNC_1(((void*)0));
 FUNC_0(1, "%s: free mci struct\n", VAR_1->ctl_name);
 FUNC_2(VAR_1);
}
