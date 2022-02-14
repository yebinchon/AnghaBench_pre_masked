
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cxd2880_tnrdmd {int dummy; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,scalar_t__*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

int FUNC_7(struct cxd2880_tnrdmd *VAR_4)
{
 int VAR_5;
 ktime_t VAR_6;
 u8 VAR_7 = 0;

 if (!VAR_4)
  return -VAR_2;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_3();

 while (1) {
  VAR_5 =
      FUNC_0(VAR_4,
           &VAR_7);
  if (VAR_5)
   return VAR_5;

  if (VAR_7)
   break;

  if (FUNC_5(FUNC_4(FUNC_3(), VAR_6)) >
     VAR_1)
   return -VAR_3;

  FUNC_6(VAR_0,
        VAR_0 + 1000);
 }

 return FUNC_2(VAR_4);
}
