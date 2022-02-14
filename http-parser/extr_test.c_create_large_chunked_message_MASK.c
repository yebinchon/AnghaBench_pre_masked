
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char const*) ;

char *
FUNC_6 (int VAR_0, const char* VAR_1)
{
  int VAR_2;
  size_t VAR_3 = 0;
  size_t VAR_4 = FUNC_5(VAR_1);
  size_t VAR_5 = VAR_4 + (5+1024+2)*VAR_0 + 6;
  char * VAR_6 = FUNC_1(VAR_5);

  FUNC_2(VAR_6, VAR_1, VAR_4);
  VAR_3 += VAR_4;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

    FUNC_2(VAR_6 + VAR_3, "400\r\n", 5);
    VAR_3 += 5;
    FUNC_3(VAR_6 + VAR_3, 'C', 1024);
    VAR_3 += 1024;
    FUNC_4(VAR_6 + VAR_3, "\r\n");
    VAR_3 += 2;
  }

  FUNC_2(VAR_6 + VAR_3, "0\r\n\r\n", 6);
  VAR_3 += 6;
  FUNC_0(VAR_3 == VAR_5);

  return VAR_6;
}
