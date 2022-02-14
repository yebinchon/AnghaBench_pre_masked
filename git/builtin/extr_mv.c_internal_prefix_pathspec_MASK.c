
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const) ;
 char* FUNC_4 (char const*,int,char const*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,int) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static const char **FUNC_8(const char *VAR_2,
          const char **VAR_3,
          int VAR_4, unsigned VAR_5)
{
 int VAR_6;
 const char **VAR_7;
 int VAR_8 = VAR_2 ? FUNC_5(VAR_2) : 0;
 FUNC_0(VAR_7, VAR_4 + 1);


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  int VAR_9 = FUNC_5(VAR_3[VAR_6]);
  int VAR_10 = VAR_9;
  char *VAR_11;
  while (!(VAR_5 & VAR_1) &&
         VAR_10 > 0 && FUNC_3(VAR_3[VAR_6][VAR_10 - 1]))
   VAR_10--;

  VAR_11 = FUNC_6(VAR_3[VAR_6], VAR_10);
  if (VAR_5 & VAR_0) {
   VAR_7[VAR_6] = FUNC_7(FUNC_1(VAR_11));
   FUNC_2(VAR_11);
  } else {
   VAR_7[VAR_6] = VAR_11;
  }
 }
 VAR_7[VAR_4] = ((void*)0);


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  const char *VAR_12 = FUNC_4(VAR_2, VAR_8, VAR_7[VAR_6]);
  FUNC_2((char *) VAR_7[VAR_6]);
  VAR_7[VAR_6] = VAR_12;
 }

 return VAR_7;
}
