
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct cdrom_info {int devinfo; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cdrom_info*) ;
 struct cdrom_info* FUNC_2 (struct gendisk*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gendisk *VAR_2, fmode_t VAR_3)
{
 struct cdrom_info *VAR_4 = FUNC_2(VAR_2, VAR_0);

 FUNC_3(&VAR_1);
 FUNC_0(&VAR_4->devinfo, VAR_3);

 FUNC_1(VAR_4);
 FUNC_4(&VAR_1);
}
