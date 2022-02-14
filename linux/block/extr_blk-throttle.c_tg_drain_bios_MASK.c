
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int * queued; } ;
struct throtl_grp {struct throtl_service_queue service_queue; } ;
struct bio {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct throtl_grp*,int ) ;
 int FUNC_2 (struct throtl_grp*) ;
 struct bio* FUNC_3 (int *) ;
 struct throtl_grp* FUNC_4 (struct throtl_service_queue*) ;

__attribute__((used)) static void FUNC_5(struct throtl_service_queue *VAR_2)
{
 struct throtl_grp *VAR_3;

 while ((VAR_3 = FUNC_4(VAR_2))) {
  struct throtl_service_queue *VAR_4 = &VAR_3->service_queue;
  struct bio *VAR_5;

  FUNC_2(VAR_3);

  while ((VAR_5 = FUNC_3(&VAR_4->queued[VAR_0])))
   FUNC_1(VAR_3, FUNC_0(VAR_5));
  while ((VAR_5 = FUNC_3(&VAR_4->queued[VAR_1])))
   FUNC_1(VAR_3, FUNC_0(VAR_5));
 }
}
