
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_object {int tbo; } ;


 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct virtio_gpu_object *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->tbo, 1, VAR_1, ((void*)0));
 if (FUNC_3(VAR_2 != 0))
  return VAR_2;
 VAR_2 = FUNC_2(&VAR_0->tbo, 1, VAR_1);
 FUNC_1(&VAR_0->tbo);
 return VAR_2;
}
