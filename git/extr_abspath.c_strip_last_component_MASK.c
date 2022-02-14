
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int * buf; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0)
{
 size_t VAR_1 = FUNC_1(VAR_0->buf);
 size_t VAR_2 = VAR_0->len;


 while (VAR_1 < VAR_2 && !FUNC_0(VAR_0->buf[VAR_2 - 1]))
  VAR_2--;

 while (VAR_1 < VAR_2 && FUNC_0(VAR_0->buf[VAR_2 - 1]))
  VAR_2--;

 FUNC_2(VAR_0, VAR_2);
}
