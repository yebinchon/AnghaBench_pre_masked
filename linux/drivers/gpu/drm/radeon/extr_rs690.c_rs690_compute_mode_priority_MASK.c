
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
struct rs690_watermark {TYPE_2__ priority_mark_max; TYPE_1__ priority_mark; TYPE_6__ consumption_rate; TYPE_3__ worst_case_latency; TYPE_6__ active_time; TYPE_3__ sclk; TYPE_6__ num_line_pair; TYPE_3__ dbpp; } ;
struct radeon_device {int disp_priority; } ;
struct drm_display_mode {int dummy; } ;
typedef TYPE_3__ fixed20_12 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (TYPE_3__,TYPE_3__) ;
 void* FUNC_5 (TYPE_3__,TYPE_6__) ;
 int FUNC_6 (TYPE_3__) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_0,
     struct rs690_watermark *VAR_1,
     struct rs690_watermark *VAR_2,
     struct drm_display_mode *VAR_3,
     struct drm_display_mode *VAR_4,
     u32 *VAR_5,
     u32 *VAR_6)
{
 fixed20_12 VAR_7, VAR_8, VAR_9;
 fixed20_12 VAR_10, VAR_11;

 *VAR_5 = FUNC_1(1);
 *VAR_6 = FUNC_1(1);

 if (VAR_3 && VAR_4) {
  if (FUNC_6(VAR_1->dbpp) > 64)
   VAR_10.full = FUNC_5(VAR_1->dbpp, VAR_1->num_line_pair);
  else
   VAR_10.full = VAR_1->num_line_pair.full;
  if (FUNC_6(VAR_2->dbpp) > 64)
   VAR_11.full = FUNC_5(VAR_2->dbpp, VAR_2->num_line_pair);
  else
   VAR_11.full = VAR_2->num_line_pair.full;
  VAR_10.full += VAR_11.full;
  VAR_9.full = FUNC_4(VAR_1->sclk, VAR_10);
  if (VAR_1->consumption_rate.full > VAR_9.full) {
   VAR_11.full = VAR_1->consumption_rate.full - VAR_9.full;
   VAR_11.full = FUNC_5(VAR_11, VAR_1->active_time);
   VAR_10.full = FUNC_5(VAR_1->worst_case_latency,
      VAR_1->consumption_rate);
   VAR_10.full = VAR_10.full + VAR_11.full;
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_7 = FUNC_4(VAR_10, VAR_11);
  } else {
   VAR_10.full = FUNC_5(VAR_1->worst_case_latency,
      VAR_1->consumption_rate);
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_7 = FUNC_4(VAR_10, VAR_11);
  }
  if (VAR_2->consumption_rate.full > VAR_9.full) {
   VAR_11.full = VAR_2->consumption_rate.full - VAR_9.full;
   VAR_11.full = FUNC_5(VAR_11, VAR_2->active_time);
   VAR_10.full = FUNC_5(VAR_2->worst_case_latency,
      VAR_2->consumption_rate);
   VAR_10.full = VAR_10.full + VAR_11.full;
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_8 = FUNC_4(VAR_10, VAR_11);
  } else {
   VAR_10.full = FUNC_5(VAR_2->worst_case_latency,
      VAR_2->consumption_rate);
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_8 = FUNC_4(VAR_10, VAR_11);
  }
  if (VAR_1->priority_mark.full > VAR_7)
   VAR_7 = VAR_1->priority_mark.full;
  if (VAR_1->priority_mark_max.full > VAR_7)
   VAR_7 = VAR_1->priority_mark_max.full;
  if (VAR_2->priority_mark.full > VAR_8)
   VAR_8 = VAR_2->priority_mark.full;
  if (VAR_2->priority_mark_max.full > VAR_8)
   VAR_8 = VAR_2->priority_mark_max.full;
  *VAR_5 = FUNC_6(VAR_7);
  *VAR_6 = FUNC_6(VAR_8);
  if (VAR_0->disp_priority == 2) {
   *VAR_5 |= FUNC_0(1);
   *VAR_6 |= FUNC_2(1);
  }
 } else if (VAR_3) {
  if (FUNC_6(VAR_1->dbpp) > 64)
   VAR_10.full = FUNC_5(VAR_1->dbpp, VAR_1->num_line_pair);
  else
   VAR_10.full = VAR_1->num_line_pair.full;
  VAR_9.full = FUNC_4(VAR_1->sclk, VAR_10);
  if (VAR_1->consumption_rate.full > VAR_9.full) {
   VAR_11.full = VAR_1->consumption_rate.full - VAR_9.full;
   VAR_11.full = FUNC_5(VAR_11, VAR_1->active_time);
   VAR_10.full = FUNC_5(VAR_1->worst_case_latency,
      VAR_1->consumption_rate);
   VAR_10.full = VAR_10.full + VAR_11.full;
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_7 = FUNC_4(VAR_10, VAR_11);
  } else {
   VAR_10.full = FUNC_5(VAR_1->worst_case_latency,
      VAR_1->consumption_rate);
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_7 = FUNC_4(VAR_10, VAR_11);
  }
  if (VAR_1->priority_mark.full > VAR_7)
   VAR_7 = VAR_1->priority_mark.full;
  if (VAR_1->priority_mark_max.full > VAR_7)
   VAR_7 = VAR_1->priority_mark_max.full;
  *VAR_5 = FUNC_6(VAR_7);
  if (VAR_0->disp_priority == 2)
   *VAR_5 |= FUNC_0(1);
 } else if (VAR_4) {
  if (FUNC_6(VAR_2->dbpp) > 64)
   VAR_10.full = FUNC_5(VAR_2->dbpp, VAR_2->num_line_pair);
  else
   VAR_10.full = VAR_2->num_line_pair.full;
  VAR_9.full = FUNC_4(VAR_2->sclk, VAR_10);
  if (VAR_2->consumption_rate.full > VAR_9.full) {
   VAR_11.full = VAR_2->consumption_rate.full - VAR_9.full;
   VAR_11.full = FUNC_5(VAR_11, VAR_2->active_time);
   VAR_10.full = FUNC_5(VAR_2->worst_case_latency,
      VAR_2->consumption_rate);
   VAR_10.full = VAR_10.full + VAR_11.full;
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_8 = FUNC_4(VAR_10, VAR_11);
  } else {
   VAR_10.full = FUNC_5(VAR_2->worst_case_latency,
      VAR_2->consumption_rate);
   VAR_11.full = FUNC_3(16 * 1000);
   VAR_8 = FUNC_4(VAR_10, VAR_11);
  }
  if (VAR_2->priority_mark.full > VAR_8)
   VAR_8 = VAR_2->priority_mark.full;
  if (VAR_2->priority_mark_max.full > VAR_8)
   VAR_8 = VAR_2->priority_mark_max.full;
  *VAR_6 = FUNC_6(VAR_8);
  if (VAR_0->disp_priority == 2)
   *VAR_6 |= FUNC_2(1);
 }
}
