
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eni_dev {int ioaddr; } ;
struct atm_dev {TYPE_1__* phy; } ;
struct TYPE_2__ {int (* stop ) (struct atm_dev*) ;} ;


 struct eni_dev* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct atm_dev*) ;

__attribute__((used)) static void FUNC_3(struct atm_dev *VAR_0)
{
 struct eni_dev *VAR_1 = FUNC_0(VAR_0);

 VAR_0->phy->stop(VAR_0);
 VAR_0->phy = ((void*)0);
 FUNC_1(VAR_1->ioaddr);
}
