
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int ,int*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,int *) ;

int FUNC_3(struct cxd2880_tnrdmd *VAR_5,
     int *VAR_6)
{
 u16 VAR_7 = 0;
 int VAR_8;

 if (!VAR_5 || !VAR_6)
  return -VAR_4;

 *VAR_6 = -1000 * 1000;

 if (VAR_5->diver_mode == VAR_2)
  return -VAR_4;

 if (VAR_5->state != VAR_3)
  return -VAR_4;

 if (VAR_5->sys != VAR_0)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_1) {
  VAR_8 = FUNC_2(VAR_5, &VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_1(VAR_5, VAR_7, VAR_6);
 } else {
  int VAR_9 = 0;
  int VAR_10 = 0;

  VAR_8 =
      FUNC_0(VAR_5, VAR_6, &VAR_9,
             &VAR_10);
 }

 return VAR_8;
}
