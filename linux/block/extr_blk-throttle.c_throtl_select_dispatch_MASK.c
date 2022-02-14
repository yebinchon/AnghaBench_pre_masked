
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_service_queue {scalar_t__* nr_queued; } ;
struct throtl_grp {struct throtl_service_queue service_queue; int disptime; } ;


 int VAR_0 ;
 int FUNC_0 (struct throtl_grp*) ;
 int FUNC_1 (struct throtl_grp*) ;
 scalar_t__ FUNC_2 (struct throtl_grp*) ;
 unsigned int VAR_1 ;
 struct throtl_grp* FUNC_3 (struct throtl_service_queue*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct throtl_service_queue *VAR_2)
{
 unsigned int VAR_3 = 0;

 while (1) {
  struct throtl_grp *VAR_4 = FUNC_3(VAR_2);
  struct throtl_service_queue *VAR_5;

  if (!VAR_4)
   break;

  if (FUNC_4(VAR_0, VAR_4->disptime))
   break;

  FUNC_1(VAR_4);

  VAR_3 += FUNC_2(VAR_4);

  VAR_5 = &VAR_4->service_queue;
  if (VAR_5->nr_queued[0] || VAR_5->nr_queued[1])
   FUNC_0(VAR_4);

  if (VAR_3 >= VAR_1)
   break;
 }

 return VAR_3;
}
