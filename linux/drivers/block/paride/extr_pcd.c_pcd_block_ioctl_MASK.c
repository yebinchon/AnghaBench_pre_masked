
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcd_unit {int info; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pcd_unit* private_data; } ;


 int FUNC_0 (int *,struct block_device*,int ,unsigned int,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1, fmode_t VAR_2,
    unsigned VAR_3, unsigned long VAR_4)
{
 struct pcd_unit *VAR_5 = VAR_1->bd_disk->private_data;
 int VAR_6;

 FUNC_1(&VAR_0);
 VAR_6 = FUNC_0(&VAR_5->info, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0);

 return VAR_6;
}
