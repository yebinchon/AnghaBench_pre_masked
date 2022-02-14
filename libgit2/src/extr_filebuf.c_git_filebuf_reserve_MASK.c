
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t buf_size; size_t buf_pos; void* buffer; int last_error; } ;
typedef TYPE_1__ git_filebuf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int FUNC_2(git_filebuf *VAR_1, void **VAR_2, size_t VAR_3)
{
 size_t VAR_4 = VAR_1->buf_size - VAR_1->buf_pos;

 *VAR_2 = ((void*)0);

 FUNC_0(VAR_1);

 if (VAR_3 > VAR_1->buf_size) {
  VAR_1->last_error = VAR_0;
  return -1;
 }

 if (VAR_4 <= VAR_3) {
  if (FUNC_1(VAR_1) < 0)
   return -1;
 }

 *VAR_2 = (VAR_1->buffer + VAR_1->buf_pos);
 VAR_1->buf_pos += VAR_3;

 return 0;
}
