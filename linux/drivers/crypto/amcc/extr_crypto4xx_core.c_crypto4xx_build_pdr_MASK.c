
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union shadow_sa_buf {int dummy; } shadow_sa_buf ;
typedef int u32 ;
struct sa_state_record {int dummy; } ;
struct pd_uinfo {scalar_t__ sr_pa; int * sr_va; int * sa_va; } ;
struct crypto4xx_device {scalar_t__ shadow_sr_pool_pa; int * shadow_sr_pool; TYPE_2__* shadow_sa_pool; scalar_t__ shadow_sa_pool_pa; struct pd_uinfo* pdr_uinfo; struct ce_pd* pdr; TYPE_1__* core_dev; scalar_t__ pdr_pa; } ;
struct ce_pd {scalar_t__ sa; } ;
struct TYPE_4__ {int sa; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,struct ce_pd*,scalar_t__) ;
 struct pd_uinfo* FUNC_2 (int,int,int ) ;

__attribute__((used)) static u32 FUNC_3(struct crypto4xx_device *VAR_4)
{
 int VAR_5;
 VAR_4->pdr = FUNC_0(VAR_4->core_dev->device,
          sizeof(struct ce_pd) * VAR_3,
          &VAR_4->pdr_pa, VAR_1);
 if (!VAR_4->pdr)
  return -VAR_0;

 VAR_4->pdr_uinfo = FUNC_2(VAR_3, sizeof(struct pd_uinfo),
     VAR_2);
 if (!VAR_4->pdr_uinfo) {
  FUNC_1(VAR_4->core_dev->device,
      sizeof(struct ce_pd) * VAR_3,
      VAR_4->pdr,
      VAR_4->pdr_pa);
  return -VAR_0;
 }
 VAR_4->shadow_sa_pool = FUNC_0(VAR_4->core_dev->device,
       sizeof(union shadow_sa_buf) * VAR_3,
       &VAR_4->shadow_sa_pool_pa,
       VAR_1);
 if (!VAR_4->shadow_sa_pool)
  return -VAR_0;

 VAR_4->shadow_sr_pool = FUNC_0(VAR_4->core_dev->device,
    sizeof(struct sa_state_record) * VAR_3,
    &VAR_4->shadow_sr_pool_pa, VAR_1);
 if (!VAR_4->shadow_sr_pool)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct ce_pd *VAR_6 = &VAR_4->pdr[VAR_5];
  struct pd_uinfo *VAR_7 = &VAR_4->pdr_uinfo[VAR_5];

  VAR_6->sa = VAR_4->shadow_sa_pool_pa +
   sizeof(union shadow_sa_buf) * VAR_5;


  VAR_7->sa_va = &VAR_4->shadow_sa_pool[VAR_5].sa;


  VAR_7->sr_va = &VAR_4->shadow_sr_pool[VAR_5];
  VAR_7->sr_pa = VAR_4->shadow_sr_pool_pa +
      sizeof(struct sa_state_record) * VAR_5;
 }

 return 0;
}
