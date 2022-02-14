
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int dummy; } ;


 long long FUNC_0 (struct cache_uri*) ;
 struct cache_uri* FUNC_1 (char const* const,int ) ;

int FUNC_2 (const char *const VAR_0, long long *VAR_1) {
  *VAR_1 = -1;
  struct cache_uri *VAR_2 = FUNC_1 (VAR_0, 0);
  if (VAR_2 == ((void*)0)) {
    return -1;
  }
  *VAR_1 = FUNC_0 (VAR_2);
  return (*VAR_1 >= 0) ? 0 : -1;
}
