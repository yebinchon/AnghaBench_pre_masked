
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*) ;

const char *FUNC_3(void)
{
 static const char *VAR_1 = ((void*)0);

 if (!VAR_1) {
  struct strbuf VAR_2 = VAR_0;
  int VAR_3;

  FUNC_1(&VAR_2, FUNC_0());
  FUNC_2(&VAR_2);
  for (VAR_3 = 0; VAR_3 < VAR_2.len; VAR_3++) {
   if (VAR_2.buf[VAR_3] <= 32 || VAR_2.buf[VAR_3] >= 127)
    VAR_2.buf[VAR_3] = '.';
  }
  VAR_1 = VAR_2.buf;
 }

 return VAR_1;
}
