
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef scalar_t__ (* char_predicate ) (char) ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char*,unsigned char) ;
 int FUNC_2 (struct strbuf*,size_t) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1, size_t VAR_2,
     char_predicate VAR_3)
{
 FUNC_2(VAR_0, VAR_2);
 while (VAR_2--) {
  char VAR_4 = *VAR_1++;
  if (VAR_3(VAR_4))
   FUNC_0(VAR_0, VAR_4);
  else
   FUNC_1(VAR_0, "%%%02x", (unsigned char)VAR_4);
 }
}
