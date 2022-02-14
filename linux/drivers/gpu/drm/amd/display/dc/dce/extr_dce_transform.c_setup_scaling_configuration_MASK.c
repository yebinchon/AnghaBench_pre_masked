
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_taps; int v_taps; } ;
struct scaler_data {scalar_t__ format; TYPE_1__ taps; } ;
struct dce_transform {TYPE_2__* xfm_mask; } ;
struct TYPE_4__ {scalar_t__ SCL_PSCL_EN; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static bool FUNC_4(
 struct dce_transform *VAR_10,
 const struct scaler_data *VAR_11)
{
 FUNC_0(VAR_2, 0, VAR_3, 0);

 if (VAR_11->taps.h_taps + VAR_11->taps.v_taps <= 2) {

  if (VAR_10->xfm_mask->SCL_PSCL_EN != 0)
   FUNC_3(VAR_6, VAR_6, 0, VAR_7, 0);
  else
   FUNC_2(VAR_6, VAR_6, 0);
  return 0;
 }

 FUNC_1(VAR_8, 0,
   VAR_5, VAR_11->taps.h_taps - 1,
   VAR_9, VAR_11->taps.v_taps - 1);

 if (VAR_11->format <= VAR_0)
  FUNC_2(VAR_6, VAR_6, 1);
 else
  FUNC_2(VAR_6, VAR_6, 2);

 if (VAR_10->xfm_mask->SCL_PSCL_EN != 0)
  FUNC_2(VAR_6, VAR_7, 1);


 FUNC_0(VAR_4, 0, VAR_1, 1);

 return 1;
}
