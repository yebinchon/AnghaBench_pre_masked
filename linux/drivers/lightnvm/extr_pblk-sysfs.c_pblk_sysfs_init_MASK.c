
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int kobj; int disk; } ;
struct gendisk {struct pblk* private_data; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,char*,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pblk*,char*) ;
 int VAR_1 ;

int FUNC_5(struct gendisk *VAR_2)
{
 struct pblk *VAR_3 = VAR_2->private_data;
 struct device *VAR_4 = FUNC_0(VAR_3->disk);
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_3->kobj, &VAR_1,
     FUNC_1(&VAR_4->kobj),
     "%s", "pblk");
 if (VAR_5) {
  FUNC_4(VAR_3, "could not register\n");
  return VAR_5;
 }

 FUNC_3(&VAR_3->kobj, VAR_0);
 return 0;
}
