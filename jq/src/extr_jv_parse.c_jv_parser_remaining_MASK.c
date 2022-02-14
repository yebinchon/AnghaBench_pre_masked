
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {scalar_t__ curr_buf; int curr_buf_length; int curr_buf_pos; } ;



int FUNC_0(struct jv_parser* VAR_0) {
  if (VAR_0->curr_buf == 0)
    return 0;
  return (VAR_0->curr_buf_length - VAR_0->curr_buf_pos);
}
