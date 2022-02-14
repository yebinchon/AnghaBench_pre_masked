
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_info {int dev; int * drive; } ;
typedef int ide_drive_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cdrom_info *VAR_1)
{
 ide_drive_t *VAR_2 = VAR_1->drive;

 FUNC_1(&VAR_0);
 FUNC_3(&VAR_1->dev);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_0);
}
