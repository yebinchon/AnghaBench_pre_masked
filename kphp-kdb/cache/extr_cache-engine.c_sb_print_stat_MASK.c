
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_stat {scalar_t__ t; scalar_t__ sum_time; int max_time; } ;
typedef int stats_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,char*,char const* const,int ,...) ;
 scalar_t__ VAR_1 ;

void FUNC_2 (stats_buffer_t *VAR_2, struct query_stat *VAR_3, const char *const VAR_4) {
  FUNC_1 (VAR_2, "%s_queries\t%lld\nqps_%s\t%.3lf\n", VAR_4, VAR_3->t, VAR_4, FUNC_0 (VAR_3->t, VAR_0 - VAR_1));
  FUNC_1 (VAR_2, "%s_max_query_time\t%.3lfs\n", VAR_4, VAR_3->max_time);
  FUNC_1 (VAR_2, "%s_avg_query_time\t%.3lfs\n", VAR_4, FUNC_0 (VAR_3->sum_time, VAR_3->t));
}
