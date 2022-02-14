
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_7__ {int wait; } ;
struct TYPE_6__ {int max_depth; } ;
struct child_latency_info {int nr_samples; int scale_lat; int scale_cookie; } ;
struct iolatency_grp {scalar_t__ min_lat_nsec; scalar_t__ nr_samples; TYPE_2__ rq_wait; TYPE_1__ rq_depth; int scale_cookie; struct child_latency_info child_lat; } ;
struct TYPE_8__ {int * parent; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct iolatency_grp* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int) ;
 TYPE_3__* FUNC_7 (struct iolatency_grp*) ;
 scalar_t__ FUNC_8 (unsigned long long,int ) ;
 int FUNC_9 (struct iolatency_grp*,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iolatency_grp *VAR_2)
{
 struct iolatency_grp *VAR_3;
 struct child_latency_info *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6 = FUNC_2(&VAR_2->scale_cookie);
 u64 VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;

 if (FUNC_7(VAR_2)->parent == ((void*)0))
  return;

 VAR_3 = FUNC_5(FUNC_7(VAR_2)->parent);
 if (!VAR_3)
  return;

 VAR_4 = &VAR_3->child_lat;
 VAR_5 = FUNC_2(&VAR_4->scale_cookie);
 VAR_7 = FUNC_0(VAR_4->scale_lat);

 if (VAR_5 < VAR_6)
  VAR_9 = -1;
 else if (VAR_5 > VAR_6)
  VAR_9 = 1;
 else
  return;

 VAR_8 = FUNC_1(&VAR_2->scale_cookie, VAR_6, VAR_5);


 if (VAR_8 != VAR_6)
  return;

 if (VAR_9 < 0 && VAR_2->min_lat_nsec) {
  u64 VAR_10;

  if (!VAR_7 || VAR_2->min_lat_nsec <= VAR_7)
   return;







  VAR_10 = VAR_4->nr_samples * 5;
  VAR_10 = FUNC_8(1ULL, FUNC_6(VAR_10, 100));
  if (VAR_2->nr_samples <= VAR_10)
   return;
 }


 if (VAR_2->rq_depth.max_depth == 1 && VAR_9 < 0) {
  FUNC_4(FUNC_7(VAR_2));
  return;
 }


 if (VAR_5 == VAR_0) {
  FUNC_3(FUNC_7(VAR_2));
  VAR_2->rq_depth.max_depth = VAR_1;
  FUNC_10(&VAR_2->rq_wait.wait);
  return;
 }

 FUNC_9(VAR_2, VAR_9 > 0);
}
