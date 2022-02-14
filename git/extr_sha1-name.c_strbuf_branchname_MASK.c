
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const*,int,struct strbuf*,unsigned int) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (char const*) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, unsigned VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_0, VAR_2);

 if (VAR_4 < 0)
  VAR_4 = 0;
 FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_3 - VAR_4);
}
