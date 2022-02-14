
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GColors ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6 (GColors * VAR_0, const char *VAR_1)
{
  char *VAR_2, *VAR_3, *VAR_4;
  int VAR_5 = 0;

  VAR_2 = FUNC_5 (VAR_1);

  VAR_4 = FUNC_3 (VAR_2, ' ');
  if ((!VAR_4) || (!*(VAR_4 + 1))) {
    FUNC_0 (("attempted to parse color attr: %s\n", VAR_1));
    goto clean;
  }

  VAR_4++;
  while (1) {
    if ((VAR_3 = FUNC_4 (VAR_4, ", ")) != ((void*)0))
      *VAR_3 = 0;
    FUNC_2 (VAR_0, VAR_4);
    if (VAR_3 == ((void*)0))
      break;
    VAR_4 = VAR_3 + 1;
  }

clean:
  FUNC_1 (VAR_2);

  return VAR_5;
}
