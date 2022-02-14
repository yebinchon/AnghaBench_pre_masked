
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ,size_t*) ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*,size_t) ;

__attribute__((used)) static int
FUNC_4(void)
{
 char *VAR_3, *VAR_4;
 size_t VAR_5;
 int VAR_6, VAR_7;




 VAR_3 = VAR_1;
 VAR_6 = 0;
 do {
  if ((VAR_3 = FUNC_0(VAR_0, &VAR_5)) == ((void*)0))
   return (0);
  VAR_4 = VAR_3 + VAR_5 - 1;
  VAR_7 = 0;
  while (VAR_4 >= VAR_3 &&
      (*VAR_4 == ' ' || *VAR_4 == '\t' || *VAR_4 == '\n' || *VAR_4 == '\\')) {
   if (*VAR_4 == '\\')
    VAR_7 = 1;
   VAR_4--;
   VAR_5--;
  }
  if (VAR_7) {
   *++VAR_4 = ' ';
   VAR_5++;
  }
  if (VAR_2 < VAR_5 + VAR_6 + 1) {
   VAR_2 = VAR_5 + VAR_6 + 1;
   VAR_1 = FUNC_3(VAR_1, VAR_2);
   if (VAR_1 == ((void*)0))
    FUNC_2();
  }
  FUNC_1(VAR_1 + VAR_6, VAR_3, VAR_5);
  VAR_6 += VAR_5;
  VAR_1[VAR_6] = '\0';
 } while (VAR_6 == 0 || VAR_7);
 return (1);
}
