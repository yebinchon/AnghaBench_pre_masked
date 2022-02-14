
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_process_device {int alloc_idr; } ;


 void* FUNC_0 (int *,int) ;

void *FUNC_1(struct kfd_process_device *VAR_0,
     int VAR_1)
{
 if (VAR_1 < 0)
  return ((void*)0);

 return FUNC_0(&VAR_0->alloc_idr, VAR_1);
}
