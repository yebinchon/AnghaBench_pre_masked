
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(const struct strbuf *VAR_0)
{
 int VAR_1;
 char *VAR_2 = VAR_0->buf;


 if (FUNC_0(VAR_2, "From ") || FUNC_0(VAR_2, ">From "))
  return 1;

 while ((VAR_1 = *VAR_2++)) {
  if (VAR_1 == ':')
   return 1;
  if ((33 <= VAR_1 && VAR_1 <= 57) ||
      (59 <= VAR_1 && VAR_1 <= 126))
   continue;
  break;
 }
 return 0;
}
