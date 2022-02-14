
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 FUNC_0(&VAR_3, "%s/%s.pack", VAR_1, VAR_2);
 FUNC_2(VAR_3.buf, 1);
 FUNC_1(&VAR_3);
}
