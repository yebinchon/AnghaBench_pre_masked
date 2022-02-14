
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; struct cxd2880_tnrdmd* diver_sub; int clk_mode; } ;
struct cxd2880_dvbt2_tune_param {scalar_t__ profile; scalar_t__ data_plp_id; int bandwidth; int center_freq_khz; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int,int ) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,scalar_t__) ;
 int FUNC_3 (struct cxd2880_tnrdmd*,int ,int ) ;

int FUNC_4(struct cxd2880_tnrdmd *VAR_9,
          struct cxd2880_dvbt2_tune_param
          *VAR_10)
{
 int VAR_11;

 if (!VAR_9 || !VAR_10)
  return -VAR_7;

 if (VAR_9->diver_mode == VAR_4)
  return -VAR_7;

 if (VAR_9->state != VAR_6 &&
     VAR_9->state != VAR_5)
  return -VAR_7;

 if (VAR_9->diver_mode == VAR_3 &&
     VAR_10->profile == VAR_1)
  return -VAR_8;

 VAR_11 =
     FUNC_0(VAR_9, VAR_0,
      VAR_10->center_freq_khz,
      VAR_10->bandwidth, 0, 0);
 if (VAR_11)
  return VAR_11;

 VAR_11 =
     FUNC_3(VAR_9, VAR_10->bandwidth,
           VAR_9->clk_mode);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->diver_mode == VAR_3) {
  VAR_11 =
      FUNC_3(VAR_9->diver_sub,
            VAR_10->bandwidth,
            VAR_9->diver_sub->clk_mode);
  if (VAR_11)
   return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_10->profile);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->diver_mode == VAR_3) {
  VAR_11 =
      FUNC_2(VAR_9->diver_sub, VAR_10->profile);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_10->data_plp_id == VAR_2)
  VAR_11 = FUNC_1(VAR_9, 1, 0);
 else
  VAR_11 =
      FUNC_1(VAR_9, 0,
          (u8)(VAR_10->data_plp_id));

 return VAR_11;
}
