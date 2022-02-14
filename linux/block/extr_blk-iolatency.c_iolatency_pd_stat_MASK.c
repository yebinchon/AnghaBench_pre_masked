
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_depth; } ;
struct iolatency_grp {TYPE_1__ rq_depth; int cur_win_nsec; int lat_avg; scalar_t__ ssd; } ;
struct blkg_policy_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (int ,int ) ;
 size_t FUNC_1 (struct iolatency_grp*,char*,size_t) ;
 struct iolatency_grp* FUNC_2 (struct blkg_policy_data*) ;
 size_t FUNC_3 (char*,size_t,char*,unsigned long long,unsigned long long,...) ;

__attribute__((used)) static size_t FUNC_4(struct blkg_policy_data *VAR_4, char *VAR_5,
    size_t VAR_6)
{
 struct iolatency_grp *VAR_7 = FUNC_2(VAR_4);
 unsigned long long VAR_8;
 unsigned long long VAR_9;

 if (!VAR_3)
  return 0;

 if (VAR_7->ssd)
  return FUNC_1(VAR_7, VAR_5, VAR_6);

 VAR_8 = FUNC_0(VAR_7->lat_avg, VAR_1);
 VAR_9 = FUNC_0(VAR_7->cur_win_nsec, VAR_0);
 if (VAR_7->rq_depth.max_depth == VAR_2)
  return FUNC_3(VAR_5, VAR_6, " depth=max avg_lat=%llu win=%llu",
     VAR_8, VAR_9);

 return FUNC_3(VAR_5, VAR_6, " depth=%u avg_lat=%llu win=%llu",
    VAR_7->rq_depth.max_depth, VAR_8, VAR_9);
}
