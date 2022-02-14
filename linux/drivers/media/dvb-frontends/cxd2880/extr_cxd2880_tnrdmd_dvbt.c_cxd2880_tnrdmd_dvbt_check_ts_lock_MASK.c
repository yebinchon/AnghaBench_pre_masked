
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; } ;
typedef enum cxd2880_tnrdmd_lock_result { ____Placeholder_cxd2880_tnrdmd_lock_result } cxd2880_tnrdmd_lock_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,scalar_t__*,scalar_t__*) ;

int FUNC_2(struct cxd2880_tnrdmd
          *VAR_7,
          enum
          cxd2880_tnrdmd_lock_result
          *VAR_8)
{
 int VAR_9;

 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;

 if (!VAR_7 || !VAR_8)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_1)
  return -VAR_6;

 if (VAR_7->state != VAR_5)
  return -VAR_6;

 VAR_9 =
     FUNC_0(VAR_7, &VAR_10, &VAR_11,
           &VAR_12);
 if (VAR_9)
  return VAR_9;

 if (VAR_7->diver_mode == VAR_0) {
  if (VAR_11)
   *VAR_8 = VAR_2;
  else if (VAR_12)
   *VAR_8 = VAR_4;
  else
   *VAR_8 = VAR_3;

  return VAR_9;
 }

 if (VAR_11) {
  *VAR_8 = VAR_2;
  return VAR_9;
 } else if (!VAR_12) {
  *VAR_8 = VAR_3;
  return VAR_9;
 }

 VAR_9 =
     FUNC_1(VAR_7, &VAR_10,
        &VAR_13);
 if (VAR_9)
  return VAR_9;

 if (VAR_12 && VAR_13)
  *VAR_8 = VAR_4;
 else
  *VAR_8 = VAR_3;

 return VAR_9;
}
