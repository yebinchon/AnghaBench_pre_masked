
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ full; } ;
struct TYPE_9__ {scalar_t__ full; } ;
struct TYPE_12__ {scalar_t__ full; } ;
struct TYPE_11__ {scalar_t__ full; } ;
struct rv515_watermark {TYPE_2__ priority_mark_max; TYPE_1__ priority_mark; TYPE_6__ consumption_rate; TYPE_3__ worst_case_latency; TYPE_6__ active_time; TYPE_3__ sclk; TYPE_3__ num_line_pair; TYPE_3__ dbpp; } ;
struct radeon_device {int disp_priority; } ;
struct drm_display_mode {int dummy; } ;
typedef TYPE_3__ fixed20_12 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (TYPE_3__,TYPE_3__) ;
 void* FUNC_2 (TYPE_3__,TYPE_6__) ;
 int FUNC_3 (TYPE_3__) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2,
     struct rv515_watermark *VAR_3,
     struct rv515_watermark *VAR_4,
     struct drm_display_mode *VAR_5,
     struct drm_display_mode *VAR_6,
     u32 *VAR_7,
     u32 *VAR_8)
{
 fixed20_12 VAR_9, VAR_10, VAR_11;
 fixed20_12 VAR_12, VAR_13;

 *VAR_7 = VAR_1;
 *VAR_8 = VAR_1;

 if (VAR_5 && VAR_6) {
  if (FUNC_3(VAR_3->dbpp) > 64)
   VAR_12.full = FUNC_1(VAR_3->dbpp, VAR_3->num_line_pair);
  else
   VAR_12.full = VAR_3->num_line_pair.full;
  if (FUNC_3(VAR_4->dbpp) > 64)
   VAR_13.full = FUNC_1(VAR_4->dbpp, VAR_4->num_line_pair);
  else
   VAR_13.full = VAR_4->num_line_pair.full;
  VAR_12.full += VAR_13.full;
  VAR_11.full = FUNC_1(VAR_3->sclk, VAR_12);
  if (VAR_3->consumption_rate.full > VAR_11.full) {
   VAR_13.full = VAR_3->consumption_rate.full - VAR_11.full;
   VAR_13.full = FUNC_2(VAR_13, VAR_3->active_time);
   VAR_12.full = FUNC_0(16);
   VAR_13.full = FUNC_1(VAR_13, VAR_12);
   VAR_12.full = FUNC_2(VAR_3->worst_case_latency,
      VAR_3->consumption_rate);
   VAR_9 = VAR_12.full + VAR_13.full;
  } else {
   VAR_12.full = FUNC_2(VAR_3->worst_case_latency,
      VAR_3->consumption_rate);
   VAR_13.full = FUNC_0(16 * 1000);
   VAR_9 = FUNC_1(VAR_12, VAR_13);
  }
  if (VAR_4->consumption_rate.full > VAR_11.full) {
   VAR_13.full = VAR_4->consumption_rate.full - VAR_11.full;
   VAR_13.full = FUNC_2(VAR_13, VAR_4->active_time);
   VAR_12.full = FUNC_0(16);
   VAR_13.full = FUNC_1(VAR_13, VAR_12);
   VAR_12.full = FUNC_2(VAR_4->worst_case_latency,
      VAR_4->consumption_rate);
   VAR_10 = VAR_12.full + VAR_13.full;
  } else {
   VAR_12.full = FUNC_2(VAR_4->worst_case_latency,
      VAR_4->consumption_rate);
   VAR_13.full = FUNC_0(16 * 1000);
   VAR_10 = FUNC_1(VAR_12, VAR_13);
  }
  if (VAR_3->priority_mark.full > VAR_9)
   VAR_9 = VAR_3->priority_mark.full;
  if (VAR_3->priority_mark_max.full > VAR_9)
   VAR_9 = VAR_3->priority_mark_max.full;
  if (VAR_4->priority_mark.full > VAR_10)
   VAR_10 = VAR_4->priority_mark.full;
  if (VAR_4->priority_mark_max.full > VAR_10)
   VAR_10 = VAR_4->priority_mark_max.full;
  *VAR_7 = FUNC_3(VAR_9);
  *VAR_8 = FUNC_3(VAR_10);
  if (VAR_2->disp_priority == 2) {
   *VAR_7 |= VAR_0;
   *VAR_8 |= VAR_0;
  }
 } else if (VAR_5) {
  if (FUNC_3(VAR_3->dbpp) > 64)
   VAR_12.full = FUNC_1(VAR_3->dbpp, VAR_3->num_line_pair);
  else
   VAR_12.full = VAR_3->num_line_pair.full;
  VAR_11.full = FUNC_1(VAR_3->sclk, VAR_12);
  if (VAR_3->consumption_rate.full > VAR_11.full) {
   VAR_13.full = VAR_3->consumption_rate.full - VAR_11.full;
   VAR_13.full = FUNC_2(VAR_13, VAR_3->active_time);
   VAR_12.full = FUNC_0(16);
   VAR_13.full = FUNC_1(VAR_13, VAR_12);
   VAR_12.full = FUNC_2(VAR_3->worst_case_latency,
      VAR_3->consumption_rate);
   VAR_9 = VAR_12.full + VAR_13.full;
  } else {
   VAR_12.full = FUNC_2(VAR_3->worst_case_latency,
      VAR_3->consumption_rate);
   VAR_13.full = FUNC_0(16);
   VAR_9 = FUNC_1(VAR_12, VAR_13);
  }
  if (VAR_3->priority_mark.full > VAR_9)
   VAR_9 = VAR_3->priority_mark.full;
  if (VAR_3->priority_mark_max.full > VAR_9)
   VAR_9 = VAR_3->priority_mark_max.full;
  *VAR_7 = FUNC_3(VAR_9);
  if (VAR_2->disp_priority == 2)
   *VAR_7 |= VAR_0;
 } else if (VAR_6) {
  if (FUNC_3(VAR_4->dbpp) > 64)
   VAR_12.full = FUNC_1(VAR_4->dbpp, VAR_4->num_line_pair);
  else
   VAR_12.full = VAR_4->num_line_pair.full;
  VAR_11.full = FUNC_1(VAR_4->sclk, VAR_12);
  if (VAR_4->consumption_rate.full > VAR_11.full) {
   VAR_13.full = VAR_4->consumption_rate.full - VAR_11.full;
   VAR_13.full = FUNC_2(VAR_13, VAR_4->active_time);
   VAR_12.full = FUNC_0(16);
   VAR_13.full = FUNC_1(VAR_13, VAR_12);
   VAR_12.full = FUNC_2(VAR_4->worst_case_latency,
      VAR_4->consumption_rate);
   VAR_10 = VAR_12.full + VAR_13.full;
  } else {
   VAR_12.full = FUNC_2(VAR_4->worst_case_latency,
      VAR_4->consumption_rate);
   VAR_13.full = FUNC_0(16 * 1000);
   VAR_10 = FUNC_1(VAR_12, VAR_13);
  }
  if (VAR_4->priority_mark.full > VAR_10)
   VAR_10 = VAR_4->priority_mark.full;
  if (VAR_4->priority_mark_max.full > VAR_10)
   VAR_10 = VAR_4->priority_mark_max.full;
  *VAR_8 = FUNC_3(VAR_10);
  if (VAR_2->disp_priority == 2)
   *VAR_8 |= VAR_0;
 }
}
