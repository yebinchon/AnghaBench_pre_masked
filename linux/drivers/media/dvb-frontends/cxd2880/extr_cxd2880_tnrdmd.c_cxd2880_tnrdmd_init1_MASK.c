
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxd2880_tnrdmd {scalar_t__ diver_mode; struct cxd2880_tnrdmd* diver_sub; void* chip_id; int cancel; scalar_t__ scan_mode; void* bandwidth; void* sys; scalar_t__ frequency_khz; void* clk_mode; void* state; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (void*) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,void**) ;
 int FUNC_3 (struct cxd2880_tnrdmd*) ;
 int FUNC_4 (struct cxd2880_tnrdmd*) ;
 int FUNC_5 (struct cxd2880_tnrdmd*) ;
 int FUNC_6 (struct cxd2880_tnrdmd*) ;
 int FUNC_7 (int,int) ;

int FUNC_8(struct cxd2880_tnrdmd *VAR_9)
{
 int VAR_10;

 if (!VAR_9 || VAR_9->diver_mode == VAR_5)
  return -VAR_7;

 VAR_9->chip_id = VAR_2;
 VAR_9->state = VAR_6;
 VAR_9->clk_mode = VAR_3;
 VAR_9->frequency_khz = 0;
 VAR_9->sys = VAR_1;
 VAR_9->bandwidth = VAR_0;
 VAR_9->scan_mode = 0;
 FUNC_1(&VAR_9->cancel, 0);

 if (VAR_9->diver_mode == VAR_4) {
  VAR_9->diver_sub->chip_id = VAR_2;
  VAR_9->diver_sub->state = VAR_6;
  VAR_9->diver_sub->clk_mode = VAR_3;
  VAR_9->diver_sub->frequency_khz = 0;
  VAR_9->diver_sub->sys = VAR_1;
  VAR_9->diver_sub->bandwidth = VAR_0;
  VAR_9->diver_sub->scan_mode = 0;
  FUNC_1(&VAR_9->diver_sub->cancel, 0);
 }

 VAR_10 = FUNC_2(VAR_9, &VAR_9->chip_id);
 if (VAR_10)
  return VAR_10;

 if (!FUNC_0(VAR_9->chip_id))
  return -VAR_8;

 if (VAR_9->diver_mode == VAR_4) {
  VAR_10 =
      FUNC_2(VAR_9->diver_sub,
        &VAR_9->diver_sub->chip_id);
  if (VAR_10)
   return VAR_10;

  if (!FUNC_0(VAR_9->diver_sub->chip_id))
   return -VAR_8;
 }

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->diver_mode == VAR_4) {
  VAR_10 = FUNC_3(VAR_9->diver_sub);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_7(1000, 2000);

 if (VAR_9->diver_mode == VAR_4) {
  VAR_10 = FUNC_4(VAR_9->diver_sub);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_7(5000, 6000);

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->diver_mode == VAR_4) {
  VAR_10 = FUNC_5(VAR_9->diver_sub);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->diver_mode == VAR_4)
  VAR_10 = FUNC_6(VAR_9->diver_sub);

 return VAR_10;
}
