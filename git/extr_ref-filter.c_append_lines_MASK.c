
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char* FUNC_0 (char const*,char,unsigned long) ;
 int FUNC_1 (struct strbuf*,char const*,size_t) ;
 int FUNC_2 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, unsigned long VAR_2, int VAR_3)
{
 int VAR_4;
 const char *VAR_5, *VAR_6;
 size_t VAR_7;

 VAR_5 = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3 && VAR_5 < VAR_1 + VAR_2; VAR_4++) {
  if (VAR_4)
   FUNC_2(VAR_0, "\n    ");
  VAR_6 = FUNC_0(VAR_5, '\n', VAR_2 - (VAR_5 - VAR_1));
  VAR_7 = VAR_6 ? VAR_6 - VAR_5 : VAR_2 - (VAR_5 - VAR_1);
  FUNC_1(VAR_0, VAR_5, VAR_7);
  if (!VAR_6)
   break;
  VAR_5 = VAR_6 + 1;
 }
}
