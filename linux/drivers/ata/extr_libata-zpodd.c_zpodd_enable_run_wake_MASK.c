
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpodd {int powered_off; } ;
struct ata_device {int tdev; int sdev; struct zpodd* zpodd; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ata_device *VAR_0)
{
 struct zpodd *VAR_1 = VAR_0->zpodd;

 FUNC_1(VAR_0->sdev);

 VAR_1->powered_off = 1;
 FUNC_0(&VAR_0->tdev, 1);
}
