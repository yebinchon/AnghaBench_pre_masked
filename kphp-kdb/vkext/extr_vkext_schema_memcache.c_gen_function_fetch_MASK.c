
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void**,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

int FUNC_1 (void **VAR_3, int VAR_4) {
  if (VAR_4 <= 10) { return -1; }
  int VAR_5 = 0;
  VAR_3[VAR_5 ++] = VAR_1;
  VAR_3[VAR_5 ++] = VAR_2;
  VAR_0 = FUNC_0 (VAR_3, VAR_5);
  return 2;
}
