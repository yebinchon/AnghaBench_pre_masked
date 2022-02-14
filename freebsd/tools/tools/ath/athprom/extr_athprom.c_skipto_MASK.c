
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char*,int,char*) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7;

 for (;;) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 == VAR_0)
   goto bad;
  if (VAR_7 == '.' && VAR_2) {
   if (FUNC_2(VAR_4, VAR_6, VAR_1, ".directive") == VAR_0)
    goto bad;
   if (FUNC_1(VAR_6, VAR_5) == 0)
    break;
   continue;
  }
  if (VAR_7 == '\\') {
   VAR_7 = FUNC_0(VAR_4);
   if (VAR_7 == VAR_0)
    goto bad;
  }
  VAR_2 = (VAR_7 == '\n');
  if (VAR_2)
   VAR_3++;
 }
 return 0;
bad:
 FUNC_3("EOF with no matching .%s", VAR_5);
 return VAR_0;
}
