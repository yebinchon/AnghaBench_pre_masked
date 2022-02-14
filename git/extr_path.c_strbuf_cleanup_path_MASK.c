
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct strbuf *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0->buf);
 if (VAR_1 > VAR_0->buf)
  FUNC_1(VAR_0, 0, VAR_1 - VAR_0->buf);
}
