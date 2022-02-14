
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int rptr_offs; int queue; int pipe; int me; } ;
struct TYPE_2__ {int * wb; scalar_t__ enabled; } ;
struct radeon_device {int srbm_mutex; TYPE_1__ wb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u32 FUNC_4(struct radeon_device *VAR_1,
    struct radeon_ring *VAR_2)
{
 u32 VAR_3;

 if (VAR_1->wb.enabled) {
  VAR_3 = VAR_1->wb.wb[VAR_2->rptr_offs/4];
 } else {
  FUNC_2(&VAR_1->srbm_mutex);
  FUNC_1(VAR_1, VAR_2->me, VAR_2->pipe, VAR_2->queue, 0);
  VAR_3 = FUNC_0(VAR_0);
  FUNC_1(VAR_1, 0, 0, 0, 0);
  FUNC_3(&VAR_1->srbm_mutex);
 }

 return VAR_3;
}
