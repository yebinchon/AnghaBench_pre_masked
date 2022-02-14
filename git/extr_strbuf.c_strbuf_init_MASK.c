
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; scalar_t__ alloc; } ;


 int FUNC_0 (struct strbuf*,size_t) ;
 int VAR_0 ;

void FUNC_1(struct strbuf *VAR_1, size_t VAR_2)
{
 VAR_1->alloc = VAR_1->len = 0;
 VAR_1->buf = VAR_0;
 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);
}
