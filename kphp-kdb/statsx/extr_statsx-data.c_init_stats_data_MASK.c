
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {struct counter* prev_use; struct counter* next_use; } ;


 struct counter** VAR_0 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char*,double,int) ;
 void* FUNC_3 (int) ;

int FUNC_4 (int VAR_8) {
  static int VAR_9 = 0;
  if (VAR_9) {
    return 0;
  }
  VAR_9 = 1;

  if (!VAR_5) {
    VAR_4 = VAR_6;
  } else {
    VAR_4 = VAR_7;
  }

  VAR_1 = 0;
  VAR_2 = FUNC_0 (VAR_3 * 1.5);
  FUNC_2 (1, "max_counters: %d, counters_prime: %d\n", VAR_3, VAR_2);
  VAR_0 = FUNC_3 ((VAR_2 + 1) * sizeof (struct counter *));
  struct counter *VAR_10;
  VAR_0[VAR_2] = VAR_10 = FUNC_3 (sizeof (struct counter));
  FUNC_1 (VAR_10 != ((void*)0));
  VAR_10->next_use = VAR_10;
  VAR_10->prev_use = VAR_10;

  return 0;
}
