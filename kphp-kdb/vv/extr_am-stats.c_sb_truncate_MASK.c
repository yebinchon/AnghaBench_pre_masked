
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buff; int size; int pos; } ;
typedef TYPE_1__ stats_buffer_t ;



__attribute__((used)) static void FUNC_0 (stats_buffer_t *VAR_0) {
  VAR_0->buff[VAR_0->size - 1] = 0;
  VAR_0->pos = VAR_0->size - 2;
  while (VAR_0->pos >= 0 && VAR_0->buff[VAR_0->pos] != '\n') {
    VAR_0->buff[VAR_0->pos--] = 0;
  }
  VAR_0->pos++;
}
