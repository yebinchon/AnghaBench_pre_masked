
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgem_file {int fence_idr; int fence_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct vgem_file *VAR_0)
{
 FUNC_1(&VAR_0->fence_mutex);
 FUNC_0(&VAR_0->fence_idr);

 return 0;
}
