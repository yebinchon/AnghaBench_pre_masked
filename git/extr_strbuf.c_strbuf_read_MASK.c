
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; size_t alloc; char* buf; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,size_t) ;

ssize_t FUNC_4(struct strbuf *VAR_0, int VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->len;
 size_t VAR_4 = VAR_0->alloc;

 FUNC_1(VAR_0, VAR_2 ? VAR_2 : 8192);
 for (;;) {
  ssize_t VAR_5 = VAR_0->alloc - VAR_0->len - 1;
  ssize_t VAR_6 = FUNC_0(VAR_1, VAR_0->buf + VAR_0->len, VAR_5);

  if (VAR_6 < 0) {
   if (VAR_4 == 0)
    FUNC_2(VAR_0);
   else
    FUNC_3(VAR_0, VAR_3);
   return -1;
  }
  VAR_0->len += VAR_6;
  if (VAR_6 < VAR_5)
   break;
  FUNC_1(VAR_0, 8192);
 }

 VAR_0->buf[VAR_0->len] = '\0';
 return VAR_0->len - VAR_3;
}
