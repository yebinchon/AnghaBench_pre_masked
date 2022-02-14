
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi {int pdev; scalar_t__ i2c; int * phy_dev; int * phy; scalar_t__ workq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hdmi*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hdmi *VAR_0)
{




 if (VAR_0->workq) {
  FUNC_1(VAR_0->workq);
  FUNC_0(VAR_0->workq);
 }
 FUNC_2(VAR_0);

 if (VAR_0->phy_dev) {
  FUNC_5(VAR_0->phy_dev);
  VAR_0->phy = ((void*)0);
  VAR_0->phy_dev = ((void*)0);
 }

 if (VAR_0->i2c)
  FUNC_3(VAR_0->i2c);

 FUNC_4(VAR_0->pdev, ((void*)0));
}
