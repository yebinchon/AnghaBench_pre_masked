
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int cancel; } ;
struct cxd2880_dvbt2_tune_param {scalar_t__ bandwidth; scalar_t__ profile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt2_tune_param*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt2_tune_param*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct cxd2880_tnrdmd *VAR_13,
         struct cxd2880_dvbt2_tune_param
         *VAR_14)
{
 int VAR_15;

 if (!VAR_13 || !VAR_14)
  return -VAR_11;

 if (VAR_13->diver_mode == VAR_7)
  return -VAR_11;

 if (VAR_13->state != VAR_9 &&
     VAR_13->state != VAR_8)
  return -VAR_11;

 FUNC_0(&VAR_13->cancel, 0);

 if (VAR_14->bandwidth != VAR_0 &&
     VAR_14->bandwidth != VAR_1 &&
     VAR_14->bandwidth != VAR_2 &&
     VAR_14->bandwidth != VAR_3 &&
     VAR_14->bandwidth != VAR_4) {
  return -VAR_12;
 }

 if (VAR_14->profile != VAR_5 &&
     VAR_14->profile != VAR_6)
  return -VAR_11;

 VAR_15 = FUNC_1(VAR_13, VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_3(VAR_10 * 10000,
       VAR_10 * 10000 + 1000);

 return FUNC_2(VAR_13, VAR_14);
}
