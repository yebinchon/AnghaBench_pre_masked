
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int flags; int line; int dtoa; scalar_t__ column; scalar_t__ last_ch_was_ws; scalar_t__ bom_strip_position; scalar_t__ curr_buf_is_partial; scalar_t__ curr_buf_pos; scalar_t__ curr_buf_length; scalar_t__ curr_buf; scalar_t__ eof; int st; scalar_t__ tokenpos; scalar_t__ tokenlen; scalar_t__ tokenbuf; void* next; void* output; int last_seen; scalar_t__ stackpos; scalar_t__ stacklen; scalar_t__ stack; void* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 () ;
 void* FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct jv_parser* VAR_6, int VAR_7) {
  VAR_6->flags = VAR_7;
  if ((VAR_6->flags & VAR_4)) {
    VAR_6->path = FUNC_0();
  } else {
    VAR_6->path = FUNC_1();
    VAR_6->flags &= ~(VAR_5);
  }
  VAR_6->stack = 0;
  VAR_6->stacklen = VAR_6->stackpos = 0;
  VAR_6->last_seen = VAR_0;
  VAR_6->output = FUNC_1();
  VAR_6->next = FUNC_1();
  VAR_6->tokenbuf = 0;
  VAR_6->tokenlen = VAR_6->tokenpos = 0;
  if ((VAR_6->flags & VAR_3))
    VAR_6->st = VAR_2;
  else
    VAR_6->st = VAR_1;
  VAR_6->eof = 0;
  VAR_6->curr_buf = 0;
  VAR_6->curr_buf_length = VAR_6->curr_buf_pos = VAR_6->curr_buf_is_partial = 0;
  VAR_6->bom_strip_position = 0;
  VAR_6->last_ch_was_ws = 0;
  VAR_6->line = 1;
  VAR_6->column = 0;
  FUNC_2(&VAR_6->dtoa);
}
