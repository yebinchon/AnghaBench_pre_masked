
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; size_t alloc; scalar_t__ buf; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct strbuf*,scalar_t__) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,size_t) ;

ssize_t FUNC_4(int VAR_2, struct strbuf *VAR_3)
{
 int VAR_4;

 size_t VAR_5 = VAR_3->len;
 size_t VAR_6 = VAR_3->alloc;

 for (;;) {
  FUNC_1(VAR_3, VAR_0);
  VAR_4 = FUNC_0(VAR_2, ((void*)0), ((void*)0),





   VAR_3->buf + VAR_3->len, VAR_0+1,
   VAR_1);
  if (VAR_4 <= 0)
   break;
  VAR_3->len += VAR_4;
 }

 if (VAR_4 < 0) {
  if (VAR_6 == 0)
   FUNC_2(VAR_3);
  else
   FUNC_3(VAR_3, VAR_5);
  return VAR_4;
 }
 return VAR_3->len - VAR_5;
}
