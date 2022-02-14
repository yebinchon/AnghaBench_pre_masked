
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int dummy; } ;
struct cache_local_copy {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,struct cache_local_copy*) ;
 int FUNC_1 (struct cache_uri*,int *,int,int ,int*) ;
 int FUNC_2 (struct cache_uri*,struct cache_local_copy*) ;
 int FUNC_3 (struct cache_uri*,struct cache_local_copy*) ;
 int FUNC_4 (struct cache_uri*,int *,int,int) ;

__attribute__((used)) static int FUNC_5 (struct cache_uri *VAR_2, struct cache_local_copy *VAR_3) {
  int VAR_4, VAR_5;
  VAR_4 = FUNC_1 (VAR_2, VAR_1, VAR_0, 0, &VAR_5);
  if (VAR_4 < 0 || VAR_4 >= VAR_0) {
    return -1;
  }




  FUNC_3 (VAR_2, VAR_3);
  FUNC_0 (&VAR_1[VAR_4++], VAR_3);

  return FUNC_4 (VAR_2, VAR_1, VAR_4, VAR_5);
}
