
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int * ctl_name; int pdev; struct i7core_pvt* pvt_info; } ;
struct i7core_pvt {scalar_t__ enable_scrub; } ;
struct i7core_dev {struct mem_ctl_info* mci; TYPE_1__** pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*) ;
 int FUNC_1 (int,char*,struct mem_ctl_info*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 int FUNC_4 (struct mem_ctl_info*) ;
 int FUNC_5 (struct i7core_pvt*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct i7core_dev *VAR_1)
{
 struct mem_ctl_info *VAR_2 = VAR_1->mci;
 struct i7core_pvt *VAR_3;

 if (FUNC_8(!VAR_2 || !VAR_2->pvt_info)) {
  FUNC_1(0, "MC: dev = %p\n", &VAR_1->pdev[0]->dev);

  FUNC_6(VAR_0, "Couldn't find mci handler\n");
  return;
 }

 VAR_3 = VAR_2->pvt_info;

 FUNC_1(0, "MC: mci = %p, dev = %p\n", VAR_2, &VAR_1->pdev[0]->dev);


 if (VAR_3->enable_scrub)
  FUNC_0(VAR_2);


 FUNC_5(VAR_3);


 FUNC_4(VAR_2);
 FUNC_2(VAR_2->pdev);

 FUNC_1(1, "%s: free mci struct\n", VAR_2->ctl_name);
 FUNC_7(VAR_2->ctl_name);
 FUNC_3(VAR_2);
 VAR_1->mci = ((void*)0);
}
