
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t alloc; size_t len; scalar_t__ buf; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (struct strbuf*,size_t) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__,size_t) ;

ssize_t FUNC_4(struct strbuf *VAR_0, int VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_0->alloc;
 ssize_t VAR_4;

 FUNC_0(VAR_0, VAR_2 ? VAR_2 : 8192);
 VAR_4 = FUNC_3(VAR_1, VAR_0->buf + VAR_0->len, VAR_0->alloc - VAR_0->len - 1);
 if (VAR_4 > 0)
  FUNC_2(VAR_0, VAR_0->len + VAR_4);
 else if (VAR_3 == 0)
  FUNC_1(VAR_0);
 return VAR_4;
}
