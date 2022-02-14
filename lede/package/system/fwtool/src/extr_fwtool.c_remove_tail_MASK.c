
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_buf {int file_len; scalar_t__ cur_len; int * prev; int * cur; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct data_buf *VAR_1, int VAR_2)
{
 VAR_1->cur_len -= VAR_2;
 VAR_1->file_len -= VAR_2;

 if (VAR_1->cur_len)
  return;

 FUNC_0(VAR_1->cur);
 VAR_1->cur = VAR_1->prev;
 VAR_1->prev = ((void*)0);
 VAR_1->cur_len = VAR_0;
}
