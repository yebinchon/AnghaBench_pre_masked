
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct cdrom_info {int devinfo; } ;


 unsigned int FUNC_0 (int *,unsigned int) ;
 int VAR_0 ;
 struct cdrom_info* FUNC_1 (struct gendisk*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct gendisk *VAR_1,
           unsigned int VAR_2)
{
 struct cdrom_info *VAR_3 = FUNC_1(VAR_1, VAR_0);
 return FUNC_0(&VAR_3->devinfo, VAR_2);
}
