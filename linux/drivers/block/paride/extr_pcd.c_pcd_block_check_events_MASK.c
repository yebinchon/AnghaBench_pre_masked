
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int info; } ;
struct gendisk {struct pcd_unit* private_data; } ;


 unsigned int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct gendisk *VAR_0,
        unsigned int VAR_1)
{
 struct pcd_unit *VAR_2 = VAR_0->private_data;
 return FUNC_0(&VAR_2->info, VAR_1);
}
