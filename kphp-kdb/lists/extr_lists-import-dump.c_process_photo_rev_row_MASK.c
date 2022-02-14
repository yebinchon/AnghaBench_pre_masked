
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int a; int b; int c; int d; int e; int f; scalar_t__ type; } ;


 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int,int ,int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct lev_generic* FUNC_3 (scalar_t__) ;

void FUNC_4 (void) {
  int VAR_11 = VAR_0[VAR_7], VAR_12 = VAR_0[VAR_6], VAR_13 = VAR_0[VAR_10];
  int VAR_14 = VAR_0[VAR_8], VAR_15 = VAR_0[VAR_5];
  if (!FUNC_0 (VAR_11)) {
    return;
  }
  FUNC_1 (VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, 0, 0);
  struct lev_generic *VAR_16 = FUNC_3 (24 + VAR_1[VAR_9]);
  VAR_16->type = VAR_2 + VAR_1[VAR_9];
  VAR_16->a = VAR_11;
  VAR_16->b = VAR_12;
  VAR_16->c = VAR_13;
  VAR_16->d = VAR_14;
  VAR_16->e = VAR_15;
  FUNC_2 (&VAR_16->f, VAR_3[VAR_9], VAR_1[VAR_9]);
  VAR_4++;
}
