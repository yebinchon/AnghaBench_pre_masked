
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_service_queue {int dummy; } ;
struct TYPE_2__ {struct throtl_service_queue* parent_sq; } ;
struct throtl_grp {int ** iops; int ** bps; TYPE_1__ service_queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long FUNC_0 (struct throtl_grp*) ;
 struct throtl_grp* FUNC_1 (struct throtl_service_queue*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct throtl_grp *VAR_3)
{
 struct throtl_service_queue *VAR_4;
 struct throtl_grp *VAR_5 = VAR_3;
 unsigned long VAR_6 = FUNC_0(VAR_3);

 while (1) {
  VAR_4 = VAR_5->service_queue.parent_sq;
  VAR_5 = FUNC_1(VAR_4);
  if (!VAR_5)
   break;





  if (!VAR_5->bps[VAR_1][VAR_0] &&
      !VAR_5->iops[VAR_1][VAR_0] &&
      !VAR_5->bps[VAR_2][VAR_0] &&
      !VAR_5->iops[VAR_2][VAR_0])
   continue;
  if (FUNC_2(FUNC_0(VAR_5), VAR_6))
   VAR_6 = FUNC_0(VAR_5);
 }
 return VAR_6;
}
