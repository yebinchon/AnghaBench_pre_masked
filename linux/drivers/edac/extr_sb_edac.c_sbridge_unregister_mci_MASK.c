
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbridge_pvt {int dummy; } ;
struct sbridge_dev {struct mem_ctl_info* mci; TYPE_1__** pdev; } ;
struct mem_ctl_info {int * ctl_name; int pdev; struct sbridge_pvt* pvt_info; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct mem_ctl_info*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sbridge_dev *VAR_1)
{
 struct mem_ctl_info *VAR_2 = VAR_1->mci;
 struct sbridge_pvt *VAR_3;

 if (FUNC_5(!VAR_2 || !VAR_2->pvt_info)) {
  FUNC_0(0, "MC: dev = %p\n", &VAR_1->pdev[0]->dev);

  FUNC_4(VAR_0, "Couldn't find mci handler\n");
  return;
 }

 VAR_3 = VAR_2->pvt_info;

 FUNC_0(0, "MC: mci = %p, dev = %p\n",
   VAR_2, &VAR_1->pdev[0]->dev);


 FUNC_1(VAR_2->pdev);

 FUNC_0(1, "%s: free mci struct\n", VAR_2->ctl_name);
 FUNC_3(VAR_2->ctl_name);
 FUNC_2(VAR_2);
 VAR_1->mci = ((void*)0);
}
