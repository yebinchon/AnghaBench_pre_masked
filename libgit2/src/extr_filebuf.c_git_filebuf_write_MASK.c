
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* write ) (TYPE_1__*,void*,size_t) ;size_t buf_size; size_t buf_pos; scalar_t__ do_not_buffer; } ;
typedef TYPE_1__ git_filebuf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,void*,size_t) ;

int FUNC_4(git_filebuf *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3 = VAR_1;

 FUNC_0(VAR_0);

 if (VAR_0->do_not_buffer)
  return VAR_0->write(VAR_0, (void *)VAR_1, VAR_2);

 for (;;) {
  size_t VAR_4 = VAR_0->buf_size - VAR_0->buf_pos;


  if (VAR_4 > VAR_2) {
   FUNC_1(VAR_0, VAR_3, VAR_2);
   return 0;
  }

  FUNC_1(VAR_0, VAR_3, VAR_4);
  if (FUNC_2(VAR_0) < 0)
   return -1;

  VAR_2 -= VAR_4;
  VAR_3 += VAR_4;
 }
}
