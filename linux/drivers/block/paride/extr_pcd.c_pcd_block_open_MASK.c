
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcd_unit {int info; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct pcd_unit* private_data; } ;


 int FUNC_0 (int *,struct block_device*,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct pcd_unit *VAR_3 = VAR_1->bd_disk->private_data;
 int VAR_4;

 FUNC_1(VAR_1);

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_0(&VAR_3->info, VAR_1, VAR_2);
 FUNC_3(&VAR_0);

 return VAR_4;
}
