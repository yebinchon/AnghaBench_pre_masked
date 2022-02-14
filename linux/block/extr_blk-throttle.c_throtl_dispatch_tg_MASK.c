
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
 scalar_t__ FUNC_2 (struct throtl_grp*,struct bio*,int *) ;
 int VAR_2 ;
 struct bio* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct throtl_grp *VAR_3)
{
 struct throtl_service_queue *VAR_4 = &VAR_3->service_queue;
 unsigned int VAR_5 = 0, VAR_6 = 0;
 unsigned int VAR_7 = VAR_2*3/4;
 unsigned int VAR_8 = VAR_2 - VAR_7;
 struct bio *VAR_9;



 while ((VAR_9 = FUNC_3(&VAR_4->queued[VAR_0])) &&
        FUNC_2(VAR_3, VAR_9, ((void*)0))) {

  FUNC_1(VAR_3, FUNC_0(VAR_9));
  VAR_5++;

  if (VAR_5 >= VAR_7)
   break;
 }

 while ((VAR_9 = FUNC_3(&VAR_4->queued[VAR_1])) &&
        FUNC_2(VAR_3, VAR_9, ((void*)0))) {

  FUNC_1(VAR_3, FUNC_0(VAR_9));
  VAR_6++;

  if (VAR_6 >= VAR_8)
   break;
 }

 return VAR_5 + VAR_6;
}
