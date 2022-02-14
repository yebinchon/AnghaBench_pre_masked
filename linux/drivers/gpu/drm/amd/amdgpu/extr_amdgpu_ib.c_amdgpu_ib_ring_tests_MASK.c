
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int ready; } ;
struct amdgpu_ring {int name; TYPE_4__ sched; TYPE_3__* funcs; } ;
struct TYPE_10__ {struct amdgpu_ring* gfx_ring; } ;
struct TYPE_6__ {scalar_t__ hive_id; } ;
struct TYPE_7__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {unsigned int num_rings; int accel_working; TYPE_5__ gfx; int dev; struct amdgpu_ring** rings; TYPE_2__ gmc; } ;
struct TYPE_8__ {scalar_t__ type; int test_ib; } ;


 long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct amdgpu_ring*,long) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;

int FUNC_5(struct amdgpu_device *VAR_8)
{
 unsigned VAR_9;
 int VAR_10, VAR_11 = 0;
 long VAR_12, VAR_13;

 VAR_13 = VAR_12 = VAR_1;
 if (FUNC_4(VAR_8)) {






  VAR_13 = 8 * VAR_1;
 }

 if (FUNC_3(VAR_8)) {




  VAR_12 = 8 * VAR_1;
 } else if (VAR_8->gmc.xgmi.hive_id) {
  VAR_12 = VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->num_rings; ++VAR_9) {
  struct amdgpu_ring *VAR_14 = VAR_8->rings[VAR_9];
  long VAR_15;




  if (!VAR_14->sched.ready || !VAR_14->funcs->test_ib)
   continue;


  if (VAR_14->funcs->type == VAR_2 ||
   VAR_14->funcs->type == VAR_4 ||
   VAR_14->funcs->type == VAR_3 ||
   VAR_14->funcs->type == VAR_5 ||
   VAR_14->funcs->type == VAR_6 ||
   VAR_14->funcs->type == VAR_7)
   VAR_15 = VAR_13;
  else
   VAR_15 = VAR_12;

  VAR_10 = FUNC_2(VAR_14, VAR_15);
  if (!VAR_10) {
   FUNC_0(VAR_8->dev, "ib test on %s succeeded\n",
          VAR_14->name);
   continue;
  }

  VAR_14->sched.ready = 0;
  FUNC_1(VAR_8->dev, "IB test failed on %s (%d).\n",
     VAR_14->name, VAR_10);

  if (VAR_14 == &VAR_8->gfx.gfx_ring[0]) {

   VAR_8->accel_working = 0;
   return VAR_10;

  } else {
   VAR_11 = VAR_10;
  }
 }
 return VAR_11;
}
