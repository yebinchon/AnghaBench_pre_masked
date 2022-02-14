
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 size_t FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

void
FUNC_4(char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5;
 mbstate_t VAR_6;
 size_t VAR_7;

 if (VAR_3 && (VAR_4 = FUNC_2(VAR_1, '\0') - VAR_3) > VAR_1 &&
     FUNC_3(VAR_2, VAR_4) == 0) {

  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  for (VAR_5 = VAR_1; VAR_5 < VAR_4; VAR_5 += VAR_7) {
   VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);
   if (VAR_7 == (size_t)-1 || VAR_7 == (size_t)-2) {
    FUNC_1(&VAR_6, 0, sizeof(VAR_6));
    VAR_7 = 1;
   }
  }

  if (VAR_4 == VAR_5)
   *VAR_4 = '\0';
 }
}
