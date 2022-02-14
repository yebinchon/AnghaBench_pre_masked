
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (int*,int,char*,size_t*,int *,int ) ;

int FUNC_4(char* VAR_6, size_t* VAR_7) {
  char VAR_8[VAR_3 * 2 + 1];
  int VAR_9[4];
  size_t VAR_10;

  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || *VAR_7 == 0)
    return VAR_4;

  VAR_9[0] = VAR_0;
  VAR_9[1] = VAR_1;
  VAR_9[2] = VAR_2;
  VAR_9[3] = -1;

  VAR_10 = sizeof VAR_8;
  if (FUNC_3(VAR_9, 4, VAR_8, &VAR_10, ((void*)0), 0))
    return FUNC_0(VAR_5);

  FUNC_1(VAR_10 > 0);
  VAR_10 -= 1;
  *VAR_7 -= 1;

  if (*VAR_7 > VAR_10)
    *VAR_7 = VAR_10;

  FUNC_2(VAR_6, VAR_8, *VAR_7);
  VAR_6[*VAR_7] = '\0';

  return 0;
}
