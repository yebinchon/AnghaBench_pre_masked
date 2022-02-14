
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timeout; struct TYPE_4__* next_time; struct TYPE_4__* prev_time; } ;
typedef TYPE_1__ wkey ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 TYPE_1__** VAR_1 ;

inline void FUNC_3 (wkey *VAR_2, int VAR_3) {
  int VAR_4 = FUNC_2 (FUNC_1 (VAR_0) + VAR_3, VAR_2->timeout);

  VAR_2->timeout = VAR_4;

  wkey *VAR_5 = VAR_1[FUNC_0 (VAR_4)];
  wkey *VAR_6 = VAR_5->prev_time;

  VAR_2->next_time = VAR_5;
  VAR_5->prev_time = VAR_2;

  VAR_2->prev_time = VAR_6;
  VAR_6->next_time = VAR_2;
}
