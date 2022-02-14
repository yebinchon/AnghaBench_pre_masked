
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct counter* FUNC_0 (long long,int,int) ;
 int FUNC_1 (struct counter*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3 (long long VAR_2, int VAR_3, int VAR_4) {
  struct counter *VAR_5 = FUNC_0 (VAR_2, VAR_3, 1);
  if (!VAR_5) {
    FUNC_2 (VAR_0);
    return 0;
  }
  if (VAR_5->type == -2) { return -2; }
  FUNC_2 (VAR_1);
  FUNC_1 (VAR_5, VAR_4);
  return 0;
}
