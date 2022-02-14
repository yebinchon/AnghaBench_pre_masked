
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; size_t len; size_t alloc; } ;


 int FUNC_0 (struct strbuf*,int ) ;
 int FUNC_1 (struct strbuf*) ;

void FUNC_2(struct strbuf *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3)
{
 FUNC_1(VAR_0);
 VAR_0->buf = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->alloc = VAR_3;
 FUNC_0(VAR_0, 0);
 VAR_0->buf[VAR_0->len] = '\0';
}
