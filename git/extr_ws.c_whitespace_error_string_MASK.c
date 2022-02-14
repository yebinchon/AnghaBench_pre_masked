
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;


 struct strbuf VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct strbuf*,char*) ;
 char* FUNC_1 (struct strbuf*,int *) ;

char *FUNC_2(unsigned VAR_7)
{
 struct strbuf VAR_8 = VAR_0;
 if ((VAR_7 & VAR_6) == VAR_6)
  FUNC_0(&VAR_8, "trailing whitespace");
 else {
  if (VAR_7 & VAR_2)
   FUNC_0(&VAR_8, "trailing whitespace");
  if (VAR_7 & VAR_1) {
   if (VAR_8.len)
    FUNC_0(&VAR_8, ", ");
   FUNC_0(&VAR_8, "new blank line at EOF");
  }
 }
 if (VAR_7 & VAR_4) {
  if (VAR_8.len)
   FUNC_0(&VAR_8, ", ");
  FUNC_0(&VAR_8, "space before tab in indent");
 }
 if (VAR_7 & VAR_3) {
  if (VAR_8.len)
   FUNC_0(&VAR_8, ", ");
  FUNC_0(&VAR_8, "indent with spaces");
 }
 if (VAR_7 & VAR_5) {
  if (VAR_8.len)
   FUNC_0(&VAR_8, ", ");
  FUNC_0(&VAR_8, "tab in indent");
 }
 return FUNC_1(&VAR_8, ((void*)0));
}
