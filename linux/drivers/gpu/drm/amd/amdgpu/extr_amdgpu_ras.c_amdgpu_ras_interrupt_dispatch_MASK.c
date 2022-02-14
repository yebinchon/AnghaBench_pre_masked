
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_ih_data {scalar_t__ inuse; size_t wptr; int aligned_element_size; int ring_size; int ih_work; int element_size; int * ring; } ;
struct ras_manager {struct ras_ih_data ih_data; } ;
struct ras_dispatch_if {int entry; int head; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 struct ras_manager* FUNC_0 (struct amdgpu_device*,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

int FUNC_4(struct amdgpu_device *VAR_1,
  struct ras_dispatch_if *VAR_2)
{
 struct ras_manager *VAR_3 = FUNC_0(VAR_1, &VAR_2->head);
 struct ras_ih_data *VAR_4 = &VAR_3->ih_data;

 if (!VAR_3)
  return -VAR_0;

 if (VAR_4->inuse == 0)
  return 0;


 FUNC_1(&VAR_4->ring[VAR_4->wptr], VAR_2->entry,
   VAR_4->element_size);

 FUNC_3();
 VAR_4->wptr = (VAR_4->aligned_element_size +
   VAR_4->wptr) % VAR_4->ring_size;

 FUNC_2(&VAR_4->ih_work);

 return 0;
}
