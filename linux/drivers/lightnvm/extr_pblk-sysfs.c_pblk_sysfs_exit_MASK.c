
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int kobj; } ;
struct gendisk {struct pblk* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct gendisk *VAR_1)
{
 struct pblk *VAR_2 = VAR_1->private_data;

 FUNC_2(&VAR_2->kobj, VAR_0);
 FUNC_0(&VAR_2->kobj);
 FUNC_1(&VAR_2->kobj);
}
