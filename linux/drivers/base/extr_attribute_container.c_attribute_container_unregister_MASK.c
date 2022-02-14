
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k_lock; int k_list; } ;
struct attribute_container {TYPE_1__ containers; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct attribute_container *VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_2(&VAR_1);
 FUNC_4(&VAR_2->containers.k_lock);
 if (!FUNC_1(&VAR_2->containers.k_list))
  goto out;
 VAR_3 = 0;
 FUNC_0(&VAR_2->node);
 out:
 FUNC_5(&VAR_2->containers.k_lock);
 FUNC_3(&VAR_1);
 return VAR_3;

}
