
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; struct cxd2880_tnrdmd* diver_sub; } ;
typedef enum cxd2880_dtv_sys { ____Placeholder_cxd2880_dtv_sys } cxd2880_dtv_sys ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int,int ) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;

int FUNC_3(struct cxd2880_tnrdmd
     *VAR_5,
     enum cxd2880_dtv_sys VAR_6,
     u8 VAR_7)
{
 int VAR_8;

 if (!VAR_5)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_1)
  return -VAR_4;

 if (VAR_5->state != VAR_3 &&
     VAR_5->state != VAR_2)
  return -VAR_4;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->diver_mode == VAR_0) {
  VAR_8 = FUNC_1(VAR_5->diver_sub, VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_2(VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 return FUNC_0(VAR_5, 1);
}
