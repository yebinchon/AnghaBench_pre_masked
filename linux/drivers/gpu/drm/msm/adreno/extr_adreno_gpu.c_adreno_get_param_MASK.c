
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct msm_gpu {int nr_rings; int global_faults; int name; TYPE_5__* pdev; } ;
struct TYPE_8__ {int fast_rate; } ;
struct TYPE_7__ {int patchid; int minor; int major; int core; } ;
struct adreno_gpu {int gmem; TYPE_4__* funcs; TYPE_3__ base; TYPE_2__ rev; TYPE_1__* info; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int (* get_timestamp ) (struct msm_gpu*,int*) ;} ;
struct TYPE_6__ {int revn; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct msm_gpu*,int*) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

int FUNC_5(struct msm_gpu *VAR_1, uint32_t VAR_2, uint64_t *VAR_3)
{
 struct adreno_gpu *VAR_4 = FUNC_4(VAR_1);

 switch (VAR_2) {
 case 132:
  *VAR_3 = VAR_4->info->revn;
  return 0;
 case 133:
  *VAR_3 = VAR_4->gmem;
  return 0;
 case 134:
  *VAR_3 = 0x100000;
  return 0;
 case 136:
  *VAR_3 = VAR_4->rev.patchid |
    (VAR_4->rev.minor << 8) |
    (VAR_4->rev.major << 16) |
    (VAR_4->rev.core << 24);
  return 0;
 case 131:
  *VAR_3 = VAR_4->base.fast_rate;
  return 0;
 case 128:
  if (VAR_4->funcs->get_timestamp) {
   int VAR_5;

   FUNC_1(&VAR_1->pdev->dev);
   VAR_5 = VAR_4->funcs->get_timestamp(VAR_1, VAR_3);
   FUNC_2(&VAR_1->pdev->dev);

   return VAR_5;
  }
  return -VAR_0;
 case 130:
  *VAR_3 = VAR_1->nr_rings;
  return 0;
 case 129:
  *VAR_3 = 0;
  return 0;
 case 135:
  *VAR_3 = VAR_1->global_faults;
  return 0;
 default:
  FUNC_0("%s: invalid param: %u", VAR_1->name, VAR_2);
  return -VAR_0;
 }
}
