
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int clk_mode; struct cxd2880_tnrdmd* diver_sub; } ;
struct cxd2880_dvbt_tune_param {int profile; int bandwidth; int center_freq_khz; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int ) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,int ,int ) ;

int FUNC_3(struct cxd2880_tnrdmd *VAR_6,
         struct cxd2880_dvbt_tune_param
         *VAR_7)
{
 int VAR_8;

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_4 &&
     VAR_6->state != VAR_3)
  return -VAR_5;

 VAR_8 =
     FUNC_0(VAR_6, VAR_0,
      VAR_7->center_freq_khz,
      VAR_7->bandwidth, 0, 0);
 if (VAR_8)
  return VAR_8;

 VAR_8 =
     FUNC_2(VAR_6, VAR_7->bandwidth,
          VAR_6->clk_mode);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->diver_mode == VAR_1) {
  VAR_8 =
      FUNC_2(VAR_6->diver_sub,
           VAR_7->bandwidth,
           VAR_6->diver_sub->clk_mode);
  if (VAR_8)
   return VAR_8;
 }

 return FUNC_1(VAR_6, VAR_7->profile);
}
