
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct cdrom_info {int drive; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cdrom_info* FUNC_1 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_2(struct gendisk *VAR_1)
{
 struct cdrom_info *VAR_2 = FUNC_1(VAR_1, VAR_0);

 FUNC_0(VAR_2->drive);

 return 0;
}
