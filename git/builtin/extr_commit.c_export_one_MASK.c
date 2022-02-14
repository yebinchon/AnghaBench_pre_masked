
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int ,int) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*,char*,int,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 if (VAR_4)
  FUNC_1(&VAR_5, VAR_4);
 FUNC_2(&VAR_5, "%.*s", (int)(VAR_3 - VAR_2), VAR_2);
 FUNC_0(VAR_1, VAR_5.buf, 1);
 FUNC_3(&VAR_5);
}
