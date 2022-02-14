
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int cancel; } ;
struct cxd2880_dvbt_tune_param {scalar_t__ bandwidth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt_tune_param*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt_tune_param*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct cxd2880_tnrdmd *VAR_10,
        struct cxd2880_dvbt_tune_param
        *VAR_11)
{
 int VAR_12;

 if (!VAR_10 || !VAR_11)
  return -VAR_8;

 if (VAR_10->diver_mode == VAR_4)
  return -VAR_8;

 if (VAR_10->state != VAR_6 &&
     VAR_10->state != VAR_5)
  return -VAR_8;

 FUNC_0(&VAR_10->cancel, 0);

 if (VAR_11->bandwidth != VAR_0 &&
     VAR_11->bandwidth != VAR_1 &&
     VAR_11->bandwidth != VAR_2 &&
     VAR_11->bandwidth != VAR_3) {
  return -VAR_9;
 }

 VAR_12 = FUNC_1(VAR_10, VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_7 * 10000,
       VAR_7 * 10000 + 1000);

 return FUNC_2(VAR_10, VAR_11);
}
