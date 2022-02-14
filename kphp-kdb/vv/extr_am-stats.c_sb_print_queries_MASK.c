
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stats_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (long long,scalar_t__) ;
 int FUNC_1 (int *,char*,char const* const,long long,char const* const,int ) ;
 scalar_t__ VAR_1 ;

void FUNC_2 (stats_buffer_t *VAR_2, const char *const VAR_3, long long VAR_4) {
  FUNC_1 (VAR_2, "%s\t%lld\nqps_%s\t%.3lf\n", VAR_3, VAR_4, VAR_3, FUNC_0 (VAR_4, VAR_0 - VAR_1));
}
