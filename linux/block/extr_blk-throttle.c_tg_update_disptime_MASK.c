
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {int * queued; } ;
struct throtl_grp {unsigned long disptime; int flags; struct throtl_service_queue service_queue; } ;
struct bio {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct throtl_grp*,struct bio*,unsigned long*) ;
 int FUNC_2 (struct throtl_grp*) ;
 int FUNC_3 (struct throtl_grp*) ;
 struct bio* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct throtl_grp *VAR_4)
{
 struct throtl_service_queue *VAR_5 = &VAR_4->service_queue;
 unsigned long VAR_6 = -1, VAR_7 = -1, VAR_8 = -1, VAR_9;
 struct bio *VAR_10;

 VAR_10 = FUNC_4(&VAR_5->queued[VAR_0]);
 if (VAR_10)
  FUNC_1(VAR_4, VAR_10, &VAR_6);

 VAR_10 = FUNC_4(&VAR_5->queued[VAR_2]);
 if (VAR_10)
  FUNC_1(VAR_4, VAR_10, &VAR_7);

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 VAR_9 = VAR_3 + VAR_8;


 FUNC_2(VAR_4);
 VAR_4->disptime = VAR_9;
 FUNC_3(VAR_4);


 VAR_4->flags &= ~VAR_1;
}
