
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; char* buf; int alloc; } ;


 int FUNC_0 (char*,size_t,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t,size_t) ;

void FUNC_3(struct strbuf *VAR_0, size_t VAR_1)
{
 int VAR_2 = !VAR_0->alloc;
 if (FUNC_2(VAR_1, 1) ||
     FUNC_2(VAR_0->len, VAR_1 + 1))
  FUNC_1("you want to use way too much memory");
 if (VAR_2)
  VAR_0->buf = ((void*)0);
 FUNC_0(VAR_0->buf, VAR_0->len + VAR_1 + 1, VAR_0->alloc);
 if (VAR_2)
  VAR_0->buf[0] = '\0';
}
