
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ras_ih_data {scalar_t__ inuse; int ring; int ih_work; } ;
struct ras_manager {struct ras_ih_data ih_data; } ;
struct ras_ih_if {int head; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 struct ras_manager* FUNC_0 (struct amdgpu_device*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ras_ih_data*,int ,int) ;
 int FUNC_4 (struct ras_manager*) ;

int FUNC_5(struct amdgpu_device *VAR_1,
  struct ras_ih_if *VAR_2)
{
 struct ras_manager *VAR_3 = FUNC_0(VAR_1, &VAR_2->head);
 struct ras_ih_data *VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = &VAR_3->ih_data;
 if (VAR_4->inuse == 0)
  return 0;

 FUNC_1(&VAR_4->ih_work);

 FUNC_2(VAR_4->ring);
 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 FUNC_4(VAR_3);

 return 0;
}
