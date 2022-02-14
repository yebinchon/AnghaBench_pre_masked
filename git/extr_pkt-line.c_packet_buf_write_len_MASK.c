
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int * buf; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,size_t,int) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (struct strbuf*,char const*,size_t) ;
 int FUNC_5 (struct strbuf*,char*) ;

void FUNC_6(struct strbuf *VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_4 = VAR_1->len;
 FUNC_5(VAR_1, "0000");
 FUNC_4(VAR_1, VAR_2, VAR_3);
 VAR_5 = VAR_1->len - VAR_4;

 if (VAR_5 > VAR_0)
  FUNC_1(FUNC_0("protocol error: impossibly long line"));

 FUNC_3(&VAR_1->buf[VAR_4], VAR_5);
 FUNC_2(VAR_2, VAR_3, 1);
}
