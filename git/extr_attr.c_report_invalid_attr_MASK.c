
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,char const*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct strbuf*,int ,int,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, size_t VAR_3,
    const char *VAR_4, int VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 FUNC_2(&VAR_6, FUNC_0("%.*s is not a valid attribute name"),
      (int) VAR_3, VAR_2);
 FUNC_1(VAR_1, "%s: %s:%d\n", VAR_6.buf, VAR_4, VAR_5);
 FUNC_3(&VAR_6);
}
