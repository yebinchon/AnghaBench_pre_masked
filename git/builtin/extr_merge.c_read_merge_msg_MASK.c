
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct strbuf*,char const*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_0);
 FUNC_4(VAR_1);
 if (FUNC_3(VAR_1, VAR_2, 0) < 0)
  FUNC_1(FUNC_0("Could not read from '%s'"), VAR_2);
}
