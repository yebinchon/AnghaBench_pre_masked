
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int extra; int total_bytes; int unprocessed_bytes; struct TYPE_5__* next; } ;
typedef TYPE_1__ netbuffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ,char*,TYPE_1__*,...) ;
 int VAR_2 ;

void FUNC_3 (netbuffer_t *VAR_3) {
  netbuffer_t *VAR_4;
  int VAR_5 = 0, VAR_6 = 0;
  FUNC_0 (VAR_3->state == VAR_1 || VAR_3->state == VAR_0);
  FUNC_2 (VAR_2, "\n\nDumping buffer chain at %p, %d extra buffers, %d total bytes, %d unprocessed bytes\n", VAR_3, VAR_3->extra, VAR_3->total_bytes, VAR_3->unprocessed_bytes);
  VAR_6 += FUNC_1 (VAR_3, VAR_5, VAR_6);
  for (VAR_4 = VAR_3->next; VAR_4 != VAR_3; VAR_4 = VAR_4->next) {
    VAR_6 += FUNC_1 (VAR_4, ++VAR_5, VAR_6);
  }
  FUNC_2 (VAR_2, "\nEND (dumping buffer chain at %p)\n\n", VAR_3);
}
