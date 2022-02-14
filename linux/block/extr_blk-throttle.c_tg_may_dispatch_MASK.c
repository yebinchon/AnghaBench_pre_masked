
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* nr_queued; int * queued; } ;
struct throtl_grp {int * slice_end; TYPE_2__* td; TYPE_1__ service_queue; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {scalar_t__ throtl_slice; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (struct throtl_grp*,int) ;
 scalar_t__ FUNC_4 (struct throtl_grp*,int) ;
 scalar_t__ FUNC_5 (struct throtl_grp*,struct bio*,unsigned long*) ;
 scalar_t__ FUNC_6 (struct throtl_grp*,struct bio*,unsigned long*) ;
 int FUNC_7 (struct throtl_grp*,int,scalar_t__) ;
 struct bio* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct throtl_grp*,int) ;
 int FUNC_10 (struct throtl_grp*,int) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_12(struct throtl_grp *VAR_3, struct bio *VAR_4,
       unsigned long *VAR_5)
{
 bool VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;







 FUNC_0(VAR_3->service_queue.nr_queued[VAR_6] &&
        VAR_4 != FUNC_8(&VAR_3->service_queue.queued[VAR_6]));


 if (FUNC_3(VAR_3, VAR_6) == VAR_0 &&
     FUNC_4(VAR_3, VAR_6) == VAR_1) {
  if (VAR_5)
   *VAR_5 = 0;
  return 1;
 }
 if (FUNC_9(VAR_3, VAR_6) && !(VAR_3->service_queue.nr_queued[VAR_6]))
  FUNC_10(VAR_3, VAR_6);
 else {
  if (FUNC_11(VAR_3->slice_end[VAR_6],
      VAR_2 + VAR_3->td->throtl_slice))
   FUNC_7(VAR_3, VAR_6,
    VAR_2 + VAR_3->td->throtl_slice);
 }

 if (FUNC_5(VAR_3, VAR_4, &VAR_7) &&
     FUNC_6(VAR_3, VAR_4, &VAR_8)) {
  if (VAR_5)
   *VAR_5 = 0;
  return 1;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_8);

 if (VAR_5)
  *VAR_5 = VAR_9;

 if (FUNC_11(VAR_3->slice_end[VAR_6], VAR_2 + VAR_9))
  FUNC_7(VAR_3, VAR_6, VAR_2 + VAR_9);

 return 0;
}
