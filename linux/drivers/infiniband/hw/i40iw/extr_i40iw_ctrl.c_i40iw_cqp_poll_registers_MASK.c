
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_sc_cqp {TYPE_1__* dev; int sq_ring; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int * cqp_cmd_stats; int hw; scalar_t__ is_pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct i40iw_sc_cqp*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_4(
      struct i40iw_sc_cqp *VAR_6,
      u32 VAR_7,
      u32 VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12;

 while (VAR_9 < VAR_8) {
  VAR_9++;
  FUNC_1(VAR_6, &VAR_12, &VAR_10, &VAR_11);
  if (VAR_11) {
   VAR_11 = (VAR_6->dev->is_pf) ?
     FUNC_2(VAR_6->dev->hw, VAR_0) :
     FUNC_2(VAR_6->dev->hw, VAR_1);
   return VAR_2;
  }
  if (VAR_10 != VAR_7) {

   FUNC_0(VAR_6->sq_ring);
   VAR_6->dev->cqp_cmd_stats[VAR_5]++;
   return 0;
  }
  FUNC_3(VAR_4);
 }
 return VAR_3;
}
