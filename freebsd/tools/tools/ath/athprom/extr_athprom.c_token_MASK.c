
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*,int ,char const*) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_3, char VAR_4[], int VAR_5, const char *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_8 = 0;
 for (;;) {
  VAR_7 = FUNC_0(VAR_3);
  if (VAR_7 == VAR_0)
   return VAR_0;
  if (!FUNC_1(VAR_7) && VAR_7 != '_') {
   FUNC_2(VAR_7, VAR_3);
   break;
  }
  if (VAR_8 == VAR_5-1) {
   FUNC_3("line %d, %s too long", VAR_2, VAR_6);
   break;
  }
  VAR_4[VAR_8++] = VAR_7;
 }
 VAR_4[VAR_8] = '\0';
 if (VAR_8 != 0)
  VAR_1 = 0;
 return VAR_8;
}
