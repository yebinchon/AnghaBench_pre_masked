
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int real_priority; long long task_id; int time_received; int id; TYPE_1__* l; struct TYPE_6__* next; } ;
typedef TYPE_2__ temp_letter ;
struct TYPE_7__ {int data; } ;
struct TYPE_5__ {int data_len; int data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (long long,int) ;
 int VAR_3 ;
 int FUNC_5 (int,int ) ;
 TYPE_3__* VAR_4 ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ) ;

void FUNC_9 (int VAR_6, int VAR_7) {
  while (FUNC_6 (0) != ((void*)0)) {
  }

  int VAR_8 = FUNC_0(VAR_5 + 1 + VAR_6 * VAR_1);

  while (VAR_3 != VAR_8) {
    temp_letter *VAR_9 = &VAR_2[VAR_3];
    if (VAR_9->next != VAR_9) {
      VAR_9 = VAR_9->next;

      int VAR_10 = FUNC_8 (VAR_9->l->data);
      FUNC_1 (VAR_10 < VAR_9->l->data_len);
      FUNC_7 (VAR_4->data, VAR_9->l->data, VAR_10 + 1);

      FUNC_1 (FUNC_3 (VAR_4->data) >= 4);

      int VAR_11 = VAR_7 ? 0 : VAR_9->real_priority;
      long long VAR_12 = VAR_9->task_id;
      int VAR_13 = VAR_9->time_received;

      FUNC_2 (VAR_9->id);


      if (!FUNC_4 (VAR_12, VAR_13)) {
        FUNC_5 (VAR_11, 0);
      }
    } else {
      if (++VAR_3 == VAR_0) {
        VAR_3 = 0;
      }
    }
  }
  if (--VAR_3 == -1) {
    VAR_3 = VAR_0 - 1;
  }
}
