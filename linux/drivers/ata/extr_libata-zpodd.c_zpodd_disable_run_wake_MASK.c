
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpodd {scalar_t__ powered_off; } ;
struct ata_device {int tdev; struct zpodd* zpodd; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct ata_device *VAR_0)
{
 struct zpodd *VAR_1 = VAR_0->zpodd;

 if (VAR_1->powered_off)
  FUNC_0(&VAR_0->tdev, 0);
}
