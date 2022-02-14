
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_disk_obj {int dev; int drive; } ;
struct gendisk {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ide_disk_obj* FUNC_2 (struct gendisk*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct ide_disk_obj *FUNC_5(struct gendisk *VAR_2)
{
 struct ide_disk_obj *VAR_3 = ((void*)0);

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
