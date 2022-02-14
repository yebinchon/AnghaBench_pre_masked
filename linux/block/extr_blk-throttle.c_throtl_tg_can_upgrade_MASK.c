
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct throtl_service_queue {scalar_t__* nr_queued; } ;
struct throtl_grp {TYPE_1__* td; scalar_t__** iops; scalar_t__** bps; struct throtl_service_queue service_queue; } ;
struct TYPE_2__ {scalar_t__ throtl_slice; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct throtl_grp*) ;
 scalar_t__ FUNC_1 (struct throtl_grp*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct throtl_grp *VAR_4)
{
 struct throtl_service_queue *VAR_5 = &VAR_4->service_queue;
 bool VAR_6, VAR_7;





 VAR_6 = VAR_4->bps[VAR_1][VAR_0] || VAR_4->iops[VAR_1][VAR_0];
 VAR_7 = VAR_4->bps[VAR_2][VAR_0] || VAR_4->iops[VAR_2][VAR_0];
 if (!VAR_6 && !VAR_7)
  return 1;
 if (VAR_6 && VAR_5->nr_queued[VAR_1] &&
     (!VAR_7 || VAR_5->nr_queued[VAR_2]))
  return 1;
 if (VAR_7 && VAR_5->nr_queued[VAR_2] &&
     (!VAR_6 || VAR_5->nr_queued[VAR_1]))
  return 1;

 if (FUNC_2(VAR_3,
  FUNC_0(VAR_4) + VAR_4->td->throtl_slice) &&
     FUNC_1(VAR_4))
  return 1;
 return 0;
}
