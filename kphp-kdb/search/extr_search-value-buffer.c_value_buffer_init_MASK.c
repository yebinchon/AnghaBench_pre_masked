
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_buffer {int n474; scalar_t__ wptr; scalar_t__ size_ptr; scalar_t__ s; struct connection* c; scalar_t__ w; int ** output_hash; int ** output_item_id; int * output_char; int * output_long; int * output_int; } ;
struct connection {int Out; } ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char const*,int) ;

int FUNC_3 (struct value_buffer *VAR_8, struct connection *VAR_9, const char *VAR_10, int VAR_11, int VAR_12, int VAR_13) {
  VAR_8->n474 = 512 - VAR_13;
  if (!VAR_12) {
    VAR_8->output_int = &VAR_4;
    VAR_8->output_long = &VAR_7;
    VAR_8->output_char = &VAR_1;
    VAR_8->output_item_id = &VAR_5;
    VAR_8->output_hash = &VAR_2;
  } else {
    VAR_8->output_int = VAR_3;
    VAR_8->output_long = VAR_6;
    VAR_8->output_char = &VAR_0;
    VAR_8->output_item_id = &VAR_6;
    VAR_8->output_hash = &VAR_6;
  }
  FUNC_2 (&VAR_9->Out, "VALUE ", 6);
  FUNC_2 (&VAR_9->Out, VAR_10, VAR_11);
  VAR_8->w = 0;
  VAR_8->wptr = FUNC_0 (&VAR_9->Out, 512);
  if (!VAR_8->wptr) return 0;
  VAR_8->c = VAR_9;
  VAR_8->s = VAR_8->wptr + VAR_8->n474;
  FUNC_1 (VAR_8->wptr, " 0 .........\r\n", 14);
  VAR_8->size_ptr = VAR_8->wptr + 3;
  VAR_8->wptr += 14;
  return 1;
}
