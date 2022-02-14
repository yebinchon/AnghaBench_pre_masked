
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int info; } ;
struct gendisk {struct pcd_unit* private_data; } ;
typedef int fmode_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct pcd_unit *VAR_3 = VAR_1->private_data;
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_3->info, VAR_2);
 FUNC_2(&VAR_0);
}
