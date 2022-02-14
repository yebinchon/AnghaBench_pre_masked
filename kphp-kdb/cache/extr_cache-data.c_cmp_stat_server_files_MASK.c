
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ files; } ;
typedef TYPE_1__ cache_stat_server_t ;


 int FUNC_0 (void const*,void const*) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1) {
  cache_stat_server_t *VAR_2 = *(cache_stat_server_t **) VAR_0;
  cache_stat_server_t *VAR_3 = *(cache_stat_server_t **) VAR_1;
  if (VAR_2->files > VAR_3->files) {
    return -1;
  }
  if (VAR_2->files < VAR_3->files) {
    return 1;
  }
  return FUNC_0 (VAR_0, VAR_1);
}
