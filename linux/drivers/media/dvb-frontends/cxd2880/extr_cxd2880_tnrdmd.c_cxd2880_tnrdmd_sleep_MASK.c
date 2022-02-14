
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; int sys; void* bandwidth; struct cxd2880_tnrdmd* diver_sub; scalar_t__ frequency_khz; } ;


 void* VAR_0 ;


 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,int ) ;
 int FUNC_3 (struct cxd2880_tnrdmd*) ;
 int FUNC_4 (struct cxd2880_tnrdmd*) ;
 int FUNC_5 (struct cxd2880_tnrdmd*) ;
 int FUNC_6 (struct cxd2880_tnrdmd*) ;

int FUNC_7(struct cxd2880_tnrdmd *VAR_7)
{
 int VAR_8;

 if (!VAR_7)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state == VAR_5)
  return 0;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 VAR_8 = FUNC_2(VAR_7, 0);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->diver_mode == VAR_2) {
  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->diver_mode == VAR_2) {
  VAR_8 = FUNC_4(VAR_7->diver_sub);
  if (VAR_8)
   return VAR_8;
 }

 switch (VAR_7->sys) {
 case 129:
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8)
   return VAR_8;
  break;

 case 128:
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8)
   return VAR_8;
  break;

 default:
  return -VAR_6;
 }

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->diver_mode == VAR_2) {
  VAR_8 = FUNC_5(VAR_7->diver_sub);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->diver_mode == VAR_2) {
  VAR_8 = FUNC_6(VAR_7->diver_sub);
  if (VAR_8)
   return VAR_8;
 }

 VAR_7->state = VAR_5;
 VAR_7->frequency_khz = 0;
 VAR_7->sys = VAR_1;
 VAR_7->bandwidth = VAR_0;

 if (VAR_7->diver_mode == VAR_2) {
  VAR_7->diver_sub->state = VAR_5;
  VAR_7->diver_sub->frequency_khz = 0;
  VAR_7->diver_sub->sys = VAR_1;
  VAR_7->diver_sub->bandwidth = VAR_0;
 }

 return 0;
}
