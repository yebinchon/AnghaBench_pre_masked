
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;

void FUNC_1(FILE *VAR_1, const char *VAR_2, const struct strbuf *VAR_3)
{
 if (*VAR_2)
  FUNC_0(VAR_1, "%s", VAR_2);
 FUNC_0(VAR_1, "%s", VAR_3->buf);
 if (*VAR_2)
  FUNC_0(VAR_1, "%s", VAR_0);
}
