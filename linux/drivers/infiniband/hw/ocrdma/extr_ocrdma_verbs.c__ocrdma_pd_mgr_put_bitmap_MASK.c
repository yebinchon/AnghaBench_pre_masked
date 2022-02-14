
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ocrdma_dev {TYPE_1__* pd_mgr; } ;
struct TYPE_2__ {scalar_t__ pd_dpp_count; scalar_t__ pd_norm_count; scalar_t__ pd_dpp_start; scalar_t__ max_dpp_pd; scalar_t__ pd_norm_start; scalar_t__ max_normal_pd; int pd_norm_bitmap; int pd_dpp_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct ocrdma_dev *VAR_1, u16 VAR_2,
     bool VAR_3)
{
 u16 VAR_4;
 u16 VAR_5;

 VAR_4 = VAR_3 ? VAR_1->pd_mgr->pd_dpp_count :
         VAR_1->pd_mgr->pd_norm_count;
 if (VAR_4 == 0)
  return -VAR_0;

 if (VAR_3) {
  VAR_5 = VAR_2 - VAR_1->pd_mgr->pd_dpp_start;
  if (VAR_5 >= VAR_1->pd_mgr->max_dpp_pd) {
   return -VAR_0;
  } else {
   FUNC_0(VAR_5, VAR_1->pd_mgr->pd_dpp_bitmap);
   VAR_1->pd_mgr->pd_dpp_count--;
  }
 } else {
  VAR_5 = VAR_2 - VAR_1->pd_mgr->pd_norm_start;
  if (VAR_5 >= VAR_1->pd_mgr->max_normal_pd) {
   return -VAR_0;
  } else {
   FUNC_0(VAR_5, VAR_1->pd_mgr->pd_norm_bitmap);
   VAR_1->pd_mgr->pd_norm_count--;
  }
 }

 return 0;
}
