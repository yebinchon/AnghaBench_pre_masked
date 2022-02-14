
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int timeout; struct TYPE_4__* next_time; struct TYPE_4__* prev_time; } ;
typedef TYPE_1__ qkey ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;

void FUNC_3 (qkey *VAR_4, int VAR_5) {
  if (VAR_1 > 2) {
    FUNC_1 (VAR_2, "upd timeout %s : %d\n", VAR_4->name, VAR_4->timeout);
  }

  qkey *VAR_6 = VAR_3[FUNC_0 (VAR_4->timeout + FUNC_2 (VAR_0) + VAR_5)];
  qkey *VAR_7 = VAR_6->prev_time;

  VAR_4->next_time = VAR_6;
  VAR_6->prev_time = VAR_4;

  VAR_4->prev_time = VAR_7;
  VAR_7->next_time = VAR_4;
}
