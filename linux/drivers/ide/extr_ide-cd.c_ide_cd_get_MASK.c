
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct cdrom_info {int dev; int drive; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct cdrom_info* FUNC_2 (struct gendisk*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct cdrom_info *FUNC_5(struct gendisk *VAR_2)
{
 struct cdrom_info *VAR_3 = ((void*)0);

 FUNC_3(&VAR_1);
 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3) {
  if (FUNC_1(VAR_3->drive))
   VAR_3 = ((void*)0);
  else
   FUNC_0(&VAR_3->dev);

 }
 FUNC_4(&VAR_1);
 return VAR_3;
}
