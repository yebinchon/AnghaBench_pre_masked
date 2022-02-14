
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clone {unsigned long nr_regions; unsigned long hydration_offset; int hydrations_in_flight; int hydration_threshold; int flags; int ios_in_flight; int cmd; } ;
struct batch_info {scalar_t__ nr_batched_regions; int * head; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clone*,unsigned long,struct batch_info*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct clone*) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct clone*) ;

__attribute__((used)) static void FUNC_13(struct clone *VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5, VAR_6 = VAR_3->nr_regions;

 struct batch_info VAR_7 = {
  .head = ((void*)0),
  .nr_batched_regions = 0,
 };

 if (FUNC_11(FUNC_6(VAR_3) >= VAR_0))
  return;

 if (FUNC_5(VAR_3->cmd))
  return;




 FUNC_3(&VAR_3->hydrations_in_flight);
 FUNC_9();

 VAR_5 = VAR_3->hydration_offset;
 while (FUNC_8(!FUNC_10(VAR_2, &VAR_3->flags)) &&
        !FUNC_4(&VAR_3->ios_in_flight) &&
        FUNC_10(VAR_1, &VAR_3->flags) &&
        VAR_5 < VAR_6) {
  VAR_4 = FUNC_4(&VAR_3->hydrations_in_flight);
  VAR_4 += VAR_7.nr_batched_regions;

  if (VAR_4 > FUNC_0(VAR_3->hydration_threshold))
   break;

  VAR_5 = FUNC_1(VAR_3, VAR_5, &VAR_7);
 }

 if (VAR_7.head)
  FUNC_7(VAR_7.head, VAR_7.nr_batched_regions);

 if (VAR_5 >= VAR_6)
  VAR_5 = 0;

 VAR_3->hydration_offset = VAR_5;

 if (FUNC_2(&VAR_3->hydrations_in_flight))
  FUNC_12(VAR_3);
}
