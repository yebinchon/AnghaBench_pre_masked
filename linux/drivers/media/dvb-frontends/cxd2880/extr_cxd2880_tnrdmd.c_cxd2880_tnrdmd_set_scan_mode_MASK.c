
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ diver_mode; struct cxd2880_tnrdmd* diver_sub; int scan_mode; } ;
typedef enum cxd2880_dtv_sys { ____Placeholder_cxd2880_dtv_sys } cxd2880_dtv_sys ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct cxd2880_tnrdmd *VAR_4,
     enum cxd2880_dtv_sys VAR_5,
     u8 VAR_6)
{
 if (!VAR_4)
  return -VAR_3;

 if (VAR_4->state != VAR_2 &&
     VAR_4->state != VAR_1)
  return -VAR_3;

 VAR_4->scan_mode = VAR_6;

 if (VAR_4->diver_mode == VAR_0)
  return FUNC_0(VAR_4->diver_sub, VAR_5,
          VAR_6);
 else
  return 0;
}
