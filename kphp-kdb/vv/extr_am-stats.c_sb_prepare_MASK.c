
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {char* buff; int size; int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 int FUNC_0 (struct connection*,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (stats_buffer_t *VAR_0, struct connection *VAR_1, char *VAR_2, int VAR_3) {
  VAR_0->buff = VAR_2;
  VAR_0->size = VAR_3;
  VAR_0->pos = FUNC_0 (VAR_1, VAR_2, VAR_3);
  if ((VAR_0->pos == VAR_3 - 1 && VAR_0->buff[VAR_0->pos]) || VAR_0->pos >= VAR_3) {
    FUNC_1 (VAR_0);
  }
}
