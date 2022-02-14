
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int prefix2 ;
typedef int prefix1 ;


 int FUNC_0 (struct strbuf*,char*,char*,char const*,size_t) ;
 char VAR_0 ;
 int FUNC_1 (char*,int,char*,char) ;

void FUNC_2(struct strbuf *VAR_1, const char *VAR_2, size_t VAR_3)
{
 static char VAR_4[3];
 static char VAR_5[2];

 if (VAR_4[0] != VAR_0) {
  FUNC_1(VAR_4, sizeof(VAR_4), "%c ", VAR_0);
  FUNC_1(VAR_5, sizeof(VAR_5), "%c", VAR_0);
 }
 FUNC_0(VAR_1, VAR_4, VAR_5, VAR_2, VAR_3);
}
