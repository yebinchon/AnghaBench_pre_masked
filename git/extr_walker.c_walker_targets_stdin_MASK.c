
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const**,int) ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct strbuf*,int ) ;
 int FUNC_2 (struct strbuf*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;

int FUNC_6(char ***VAR_3, const char ***VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 struct strbuf VAR_7 = VAR_1;
 *VAR_3 = ((void*)0); *VAR_4 = ((void*)0);
 while (1) {
  char *VAR_8 = ((void*)0);
  char *VAR_9;

  if (FUNC_1(&VAR_7, VAR_2) == VAR_0)
   break;
  VAR_9 = VAR_7.buf;
  VAR_8 = FUNC_3(VAR_9, '\t');
  if (VAR_8)
   *VAR_8++ = 0;

  if (VAR_5 >= VAR_6) {
   VAR_6 = VAR_6 ? VAR_6 * 2 : 64;
   FUNC_0(*VAR_3, VAR_6);
   FUNC_0(*VAR_4, VAR_6);
  }
  (*VAR_3)[VAR_5] = FUNC_4(VAR_9);
  (*VAR_4)[VAR_5] = FUNC_5(VAR_8);
  VAR_5++;
 }
 FUNC_2(&VAR_7);
 return VAR_5;
}
