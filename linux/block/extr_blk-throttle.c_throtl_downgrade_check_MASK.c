
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct throtl_grp {unsigned long last_check_time; int** bps; unsigned long* last_bytes_disp; unsigned long* last_low_overflow_time; int** iops; unsigned long* last_io_disp; TYPE_3__* td; } ;
struct TYPE_8__ {TYPE_2__* blkcg; } ;
struct TYPE_7__ {scalar_t__ limit_index; scalar_t__ throtl_slice; int * limit_valid; } ;
struct TYPE_5__ {int children; } ;
struct TYPE_6__ {TYPE_1__ css; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct throtl_grp*) ;
 TYPE_4__* FUNC_3 (struct throtl_grp*) ;
 int FUNC_4 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_5 (struct throtl_grp*) ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct throtl_grp *VAR_6)
{
 uint64_t VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10 = VAR_5;

 if (VAR_6->td->limit_index != VAR_2 ||
     !VAR_6->td->limit_valid[VAR_1])
  return;
 if (!FUNC_1(&FUNC_3(VAR_6)->blkcg->css.children))
  return;
 if (FUNC_6(VAR_6->last_check_time + VAR_6->td->throtl_slice, VAR_10))
  return;

 VAR_9 = VAR_10 - VAR_6->last_check_time;
 VAR_6->last_check_time = VAR_10;

 if (FUNC_7(VAR_10, FUNC_2(VAR_6) +
   VAR_6->td->throtl_slice))
  return;

 if (VAR_6->bps[VAR_3][VAR_1]) {
  VAR_7 = VAR_6->last_bytes_disp[VAR_3] * VAR_0;
  FUNC_0(VAR_7, VAR_9);
  if (VAR_7 >= VAR_6->bps[VAR_3][VAR_1])
   VAR_6->last_low_overflow_time[VAR_3] = VAR_10;
 }

 if (VAR_6->bps[VAR_4][VAR_1]) {
  VAR_7 = VAR_6->last_bytes_disp[VAR_4] * VAR_0;
  FUNC_0(VAR_7, VAR_9);
  if (VAR_7 >= VAR_6->bps[VAR_4][VAR_1])
   VAR_6->last_low_overflow_time[VAR_4] = VAR_10;
 }

 if (VAR_6->iops[VAR_3][VAR_1]) {
  VAR_8 = VAR_6->last_io_disp[VAR_3] * VAR_0 / VAR_9;
  if (VAR_8 >= VAR_6->iops[VAR_3][VAR_1])
   VAR_6->last_low_overflow_time[VAR_3] = VAR_10;
 }

 if (VAR_6->iops[VAR_4][VAR_1]) {
  VAR_8 = VAR_6->last_io_disp[VAR_4] * VAR_0 / VAR_9;
  if (VAR_8 >= VAR_6->iops[VAR_4][VAR_1])
   VAR_6->last_low_overflow_time[VAR_4] = VAR_10;
 }





 if (FUNC_5(VAR_6))
  FUNC_4(VAR_6->td, VAR_1);

 VAR_6->last_bytes_disp[VAR_3] = 0;
 VAR_6->last_bytes_disp[VAR_4] = 0;
 VAR_6->last_io_disp[VAR_3] = 0;
 VAR_6->last_io_disp[VAR_4] = 0;
}
