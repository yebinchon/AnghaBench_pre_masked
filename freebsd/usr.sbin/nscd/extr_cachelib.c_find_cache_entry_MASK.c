
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry_ {int dummy; } ;
struct cache_ {int dummy; } ;


 int FUNC_0 (struct cache_entry_* (*) (struct cache_*,char const*)) ;
 int FUNC_1 (struct cache_entry_* (*) (struct cache_*,char const*)) ;
 struct cache_entry_** FUNC_2 (struct cache_*,char const*) ;

struct cache_entry_ *
FUNC_3(struct cache_ *VAR_0, const char *VAR_1)
{
 struct cache_entry_ **VAR_2;

 FUNC_0(FUNC_3);
 VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0)) {
  FUNC_1(FUNC_3);
  return (((void*)0));
 } else {
  FUNC_1(FUNC_3);
  return (*VAR_2);
 }
}
