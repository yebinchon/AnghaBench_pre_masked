
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {int pdev; int * host; int * phy_dev; int * phy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct msm_dsi*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct msm_dsi *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0);

 if (VAR_0->phy_dev) {
  FUNC_3(VAR_0->phy_dev);
  VAR_0->phy = ((void*)0);
  VAR_0->phy_dev = ((void*)0);
 }

 if (VAR_0->host) {
  FUNC_0(VAR_0->host);
  VAR_0->host = ((void*)0);
 }

 FUNC_2(VAR_0->pdev, ((void*)0));
}
