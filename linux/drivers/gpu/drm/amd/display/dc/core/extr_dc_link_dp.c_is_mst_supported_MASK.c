
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MST_CAP; } ;
union mstm_cap {scalar_t__ raw; TYPE_1__ bits; } ;
union dpcd_rev {scalar_t__ raw; } ;
struct TYPE_4__ {int* mst_enable; } ;
struct dc_link {TYPE_2__ preferred_training_settings; } ;
typedef int rev ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;
typedef int cap ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_link*,int ,scalar_t__*,int) ;

bool FUNC_1(struct dc_link *VAR_4)
{
 bool VAR_5 = 0;
 enum dc_status VAR_6 = VAR_0;
 union dpcd_rev VAR_7;
 union mstm_cap VAR_8;

 if (VAR_4->preferred_training_settings.mst_enable &&
  *VAR_4->preferred_training_settings.mst_enable == 0) {
  return 0;
 }

 VAR_7.raw = 0;
 VAR_8.raw = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_2, &VAR_7.raw,
   sizeof(VAR_7));

 if (VAR_6 == VAR_0 && VAR_7.raw >= VAR_1) {

  VAR_6 = FUNC_0(VAR_4, VAR_3,
    &VAR_8.raw, sizeof(VAR_8));
  if (VAR_6 == VAR_0 && VAR_8.bits.MST_CAP == 1)
   VAR_5 = 1;
 }
 return VAR_5;

}
