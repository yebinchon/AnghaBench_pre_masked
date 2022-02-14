
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int time_sent; int priority; struct TYPE_2__* next; int id; } ;


 int FUNC_0 (int ,int ,int ,char const*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;

void FUNC_2 (int VAR_3, const char *VAR_4) {
  while (VAR_1.next != &VAR_1 && VAR_1.next->time_sent <= VAR_2 - VAR_3) {
    FUNC_0 (VAR_1.next->id, VAR_1.next->priority, 0, VAR_4);
    VAR_0++;
  }

  if (VAR_3 < 0) {
    FUNC_1 (1, 1);
  }
}
