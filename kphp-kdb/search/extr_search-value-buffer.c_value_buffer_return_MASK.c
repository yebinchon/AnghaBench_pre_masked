
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_buffer {char* size_ptr; int w; scalar_t__ n474; scalar_t__ s; scalar_t__ wptr; TYPE_1__* c; } ;
struct TYPE_2__ {int Out; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 size_t FUNC_2 (char*,char*,int) ;

int FUNC_3 (struct value_buffer *VAR_0) {
  VAR_0->size_ptr[FUNC_2 (VAR_0->size_ptr, "% 9d", VAR_0->w)] = '\r';
  FUNC_1 (VAR_0->wptr, "\r\n", 2);
  VAR_0->wptr += 2;
  FUNC_0 (&VAR_0->c->Out, VAR_0->wptr - (VAR_0->s - VAR_0->n474));
  return 0;
}
