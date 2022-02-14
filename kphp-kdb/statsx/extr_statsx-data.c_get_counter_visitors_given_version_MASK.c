
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; int unique_visitors; } ;


 struct counter* FUNC_0 (long long,int,int) ;

int FUNC_1 (long long VAR_0, int VAR_1) {
  struct counter *VAR_2 = FUNC_0 (VAR_0, VAR_1, 1);
  if (!VAR_2) { return -1;}
  if (VAR_2->type == -2) { return -2;}
  return VAR_2->unique_visitors;
}
