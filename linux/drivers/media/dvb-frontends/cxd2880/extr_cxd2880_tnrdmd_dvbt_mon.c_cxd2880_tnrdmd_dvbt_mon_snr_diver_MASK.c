
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; struct cxd2880_tnrdmd* diver_sub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,scalar_t__,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,scalar_t__*) ;

int FUNC_2(struct cxd2880_tnrdmd
          *VAR_5, int *VAR_6,
          int *VAR_7, int *VAR_8)
{
 u16 VAR_9 = 0;
 u32 VAR_10 = 0;
 int VAR_11;

 if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_4;

 *VAR_6 = -1000 * 1000;
 *VAR_7 = -1000 * 1000;
 *VAR_8 = -1000 * 1000;

 if (VAR_5->diver_mode != VAR_1)
  return -VAR_4;

 if (VAR_5->state != VAR_2)
  return -VAR_4;

 if (VAR_5->sys != VAR_0)
  return -VAR_4;

 VAR_11 = FUNC_1(VAR_5, &VAR_9);
 if (!VAR_11) {
  VAR_11 = FUNC_0(VAR_5, VAR_9, VAR_7);
  if (VAR_11)
   VAR_9 = 0;
 } else if (VAR_11 == -VAR_3) {
  VAR_9 = 0;
 } else {
  return VAR_11;
 }

 VAR_10 += VAR_9;

 VAR_11 = FUNC_1(VAR_5->diver_sub, &VAR_9);
 if (!VAR_11) {
  VAR_11 = FUNC_0(VAR_5->diver_sub, VAR_9, VAR_8);
  if (VAR_11)
   VAR_9 = 0;
 } else if (VAR_11 == -VAR_3) {
  VAR_9 = 0;
 } else {
  return VAR_11;
 }

 VAR_10 += VAR_9;

 return FUNC_0(VAR_5, VAR_10, VAR_6);
}
