
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ conn; } ;
struct drbd_device {unsigned long* rs_mark_time; size_t rs_last_mark; unsigned long* rs_mark_left; TYPE_1__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long,scalar_t__) ;

void FUNC_1(struct drbd_device *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_4;
 unsigned long VAR_8 = VAR_5->rs_mark_time[VAR_5->rs_last_mark];
 int VAR_9 = (VAR_5->rs_last_mark + 1) % VAR_2;
 if (FUNC_0(VAR_7, VAR_8 + VAR_3)) {
  if (VAR_5->rs_mark_left[VAR_5->rs_last_mark] != VAR_6 &&
      VAR_5->state.conn != VAR_1 &&
      VAR_5->state.conn != VAR_0) {
   VAR_5->rs_mark_time[VAR_9] = VAR_7;
   VAR_5->rs_mark_left[VAR_9] = VAR_6;
   VAR_5->rs_last_mark = VAR_9;
  }
 }
}
