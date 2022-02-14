
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_bool ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static mrb_bool
FUNC_3(char *VAR_2, FILE *VAR_3)
{
  int VAR_4;
  char *VAR_5;
  size_t VAR_6;

  if ((VAR_6 = FUNC_1(VAR_2)) == 0) {
    return VAR_0;
  }

  VAR_5 = VAR_2 + VAR_6 - 1;

  if (*VAR_5 != '\r' && *VAR_5 != '\n') {
    return VAR_0;
  }

  if (*VAR_5 == '\r') {

    if ((VAR_4 = FUNC_0(VAR_3)) != '\n') {
      FUNC_2(VAR_4, VAR_3);
    }
  }


  while (VAR_2 <= VAR_5 && (*VAR_5 == '\r' || *VAR_5 == '\n')) {
    *VAR_5-- = '\0';
  }

  return VAR_1;
}
