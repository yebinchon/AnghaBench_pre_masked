
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int send_queue_len; } ;
struct TYPE_7__ {int * tid; TYPE_1__* prev; struct TYPE_7__* next; TYPE_2__ u; } ;
typedef TYPE_3__ tftp_connection_t ;
struct TYPE_5__ {TYPE_3__* next; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*,int ) ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_2 (void) {
  tftp_connection_t *VAR_2, *VAR_3;
  for (VAR_2 = VAR_0.next; VAR_2 != &VAR_0; VAR_2 = VAR_3) {
    VAR_3 = VAR_2->next;
    if (!VAR_2->u.send_queue_len) {
      VAR_2->prev->next = VAR_2->next;
      VAR_2->next->prev = VAR_2->prev;
      FUNC_1 (1, "Remove listening connection for port %d.\n", VAR_2->tid[VAR_1]);
      FUNC_0 (VAR_2->tid[VAR_1], -1);
    }
  }
}
