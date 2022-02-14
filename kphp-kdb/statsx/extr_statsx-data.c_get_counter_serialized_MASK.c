
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct counter*,char*) ;
 struct counter* FUNC_1 (long long,int,int) ;
 int FUNC_2 (char*,long long,int) ;

int FUNC_3 (char *VAR_1, long long VAR_2, int VAR_3) {
  if (VAR_0) {
    return FUNC_2 (VAR_1, VAR_2, VAR_3);
  }
  struct counter *VAR_4 = FUNC_1 (VAR_2, VAR_3, 1);
  if (!VAR_4) { return 0; }
  if (VAR_4->type == -2) { return -2; }
  return FUNC_0 (VAR_4, VAR_1);
}
