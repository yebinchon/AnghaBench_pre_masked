
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; void* state; struct cxd2880_tnrdmd* diver_sub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int *) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;

int FUNC_3(struct cxd2880_tnrdmd *VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 if (!VAR_4)
  return -VAR_3;

 if (VAR_4->diver_mode == VAR_1)
  return -VAR_3;

 VAR_6 = FUNC_0(VAR_4,
           &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (!VAR_5)
  return -VAR_3;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->diver_mode == VAR_0) {
  VAR_6 = FUNC_2(VAR_4->diver_sub);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->diver_mode == VAR_0) {
  VAR_6 = FUNC_1(VAR_4->diver_sub);
  if (VAR_6)
   return VAR_6;
 }

 VAR_4->state = VAR_2;

 if (VAR_4->diver_mode == VAR_0)
  VAR_4->diver_sub->state = VAR_2;

 return VAR_6;
}
