
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,int,size_t) ;
 int FUNC_1 (struct strbuf*,size_t) ;
 int FUNC_2 (struct strbuf*,scalar_t__) ;

void FUNC_3(struct strbuf *VAR_0, int VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0->buf + VAR_0->len, VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_0->len + VAR_2);
}
