
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int exepath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;

int FUNC_5(char* VAR_4, size_t* VAR_5) {

  char VAR_6[VAR_0 * 2 + 1];
  char VAR_7[VAR_0 + 1];
  uint32_t VAR_8;
  size_t VAR_9;

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || *VAR_5 == 0)
    return VAR_1;

  VAR_8 = sizeof(VAR_7);
  if (FUNC_1(VAR_7, &VAR_8))
    return VAR_2;

  if (FUNC_3(VAR_7, VAR_6) != VAR_6)
    return FUNC_0(VAR_3);

  VAR_9 = FUNC_4(VAR_6);
  if (VAR_9 == 0)
    return VAR_2;

  *VAR_5 -= 1;
  if (*VAR_5 > VAR_9)
    *VAR_5 = VAR_9;

  FUNC_2(VAR_4, VAR_6, *VAR_5);
  VAR_4[*VAR_5] = '\0';

  return 0;
}
