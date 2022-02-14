
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scratch ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (char*,int) ;
 size_t FUNC_2 (char*) ;

int FUNC_3(char* VAR_5, size_t* VAR_6) {
  char VAR_7[1 + VAR_3];

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    return VAR_1;


  if (FUNC_1(VAR_5, *VAR_6) != ((void*)0))
    goto fixup;

  if (VAR_4 != VAR_0)
    return FUNC_0(VAR_4);




  if (FUNC_1(VAR_7, sizeof(VAR_7)) == ((void*)0))
    return FUNC_0(VAR_4);

  VAR_5 = VAR_7;

fixup:

  *VAR_6 = FUNC_2(VAR_5);

  if (*VAR_6 > 1 && VAR_5[*VAR_6 - 1] == '/') {
    *VAR_6 -= 1;
    VAR_5[*VAR_6] = '\0';
  }

  if (VAR_5 == VAR_7) {
    *VAR_6 += 1;
    return VAR_2;
  }

  return 0;
}
