
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_buffer {scalar_t__ pos; scalar_t__ size; char* buff; } ;


 int FUNC_0 (struct tl_buffer*) ;

void FUNC_1 (struct tl_buffer *VAR_0, char VAR_1) {
  if (VAR_0->pos == VAR_0->size) {
    FUNC_0 (VAR_0);
  }
  VAR_0->buff[VAR_0->pos++] = VAR_1;
}
