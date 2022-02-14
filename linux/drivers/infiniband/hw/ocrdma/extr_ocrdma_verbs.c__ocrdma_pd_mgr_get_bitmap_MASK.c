
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_dev {TYPE_1__* pd_mgr; } ;
struct TYPE_2__ {unsigned long* pd_dpp_bitmap; scalar_t__ pd_dpp_count; scalar_t__ pd_dpp_thrsh; unsigned long* pd_norm_bitmap; scalar_t__ pd_norm_count; scalar_t__ pd_norm_thrsh; int max_normal_pd; int max_dpp_pd; } ;


 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (unsigned long const*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct ocrdma_dev *VAR_0, bool VAR_1)
{
 u16 VAR_2 = 0;
 const unsigned long *VAR_3;

 if (VAR_1) {
  VAR_3 = VAR_0->pd_mgr->pd_dpp_bitmap;
  VAR_2 = FUNC_1(VAR_3,
          VAR_0->pd_mgr->max_dpp_pd);
  FUNC_0(VAR_2, VAR_0->pd_mgr->pd_dpp_bitmap);
  VAR_0->pd_mgr->pd_dpp_count++;
  if (VAR_0->pd_mgr->pd_dpp_count > VAR_0->pd_mgr->pd_dpp_thrsh)
   VAR_0->pd_mgr->pd_dpp_thrsh = VAR_0->pd_mgr->pd_dpp_count;
 } else {
  VAR_3 = VAR_0->pd_mgr->pd_norm_bitmap;
  VAR_2 = FUNC_1(VAR_3,
          VAR_0->pd_mgr->max_normal_pd);
  FUNC_0(VAR_2, VAR_0->pd_mgr->pd_norm_bitmap);
  VAR_0->pd_mgr->pd_norm_count++;
  if (VAR_0->pd_mgr->pd_norm_count > VAR_0->pd_mgr->pd_norm_thrsh)
   VAR_0->pd_mgr->pd_norm_thrsh = VAR_0->pd_mgr->pd_norm_count;
 }
 return VAR_2;
}
