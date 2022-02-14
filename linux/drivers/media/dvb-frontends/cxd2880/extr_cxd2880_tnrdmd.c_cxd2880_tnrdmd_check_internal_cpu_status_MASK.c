
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,scalar_t__*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,scalar_t__*) ;

int FUNC_2(struct cxd2880_tnrdmd
          *VAR_3,
          u8 *VAR_4)
{
 u16 VAR_5 = 0;
 int VAR_6;

 if (!VAR_3 || !VAR_4)
  return -VAR_2;

 if (VAR_3->diver_mode == VAR_1)
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->diver_mode == VAR_0) {
  if (VAR_5 == 0)
   *VAR_4 = 1;
  else
   *VAR_4 = 0;

  return VAR_6;
 }
 if (VAR_5 != 0) {
  *VAR_4 = 0;
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 == 0)
  *VAR_4 = 1;
 else
  *VAR_4 = 0;

 return VAR_6;
}
