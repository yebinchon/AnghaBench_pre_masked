
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; } ;


 int FUNC_0 (struct counter*,char*) ;
 struct counter* FUNC_1 (long long,int,int) ;

int FUNC_2 (char *VAR_0, long long VAR_1, int VAR_2) {

  struct counter *VAR_3 = FUNC_1 (VAR_1, VAR_2, 1);
  if (!VAR_3) { return 0; }
  if (VAR_3->type == -2) return -2;
  return FUNC_0 (VAR_3, VAR_0);
}
