
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 char* VAR_0 ;
 int FUNC_4 (char*,char*,int) ;
 char VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int,int,int,int*) ;
 int FUNC_8 (int *,int,int,char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_9 (user *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, char *VAR_10) {


  if (VAR_2) {
    return 1;
  }

  FUNC_2 (FUNC_6 (VAR_3));
  int VAR_11 = FUNC_5 (VAR_10);
  FUNC_2 (FUNC_3 (VAR_10, VAR_11));

  int VAR_12;
  char *VAR_13 = FUNC_7 (VAR_3, VAR_4, VAR_5, 1, &VAR_12);

  if (VAR_13 == ((void*)0)) {
    return 0;
  }

  char *VAR_14 = VAR_0;
  if (VAR_12 > 0 && VAR_13[0] < 0) {
    int VAR_15 = -(VAR_13[0] + VAR_1) + 4 * sizeof (int) + 1;
    VAR_12 -= VAR_15;
    VAR_13 += VAR_15;
  }

  *VAR_14++ = -VAR_11 - VAR_1;
  FUNC_0(VAR_14, VAR_6);
  FUNC_0(VAR_14, VAR_7);
  FUNC_0(VAR_14, VAR_8);
  FUNC_0(VAR_14, VAR_9);
  FUNC_1(VAR_14, VAR_10);

  if (VAR_12 == 0) {
    *VAR_14++ = 0;
  } else {
    FUNC_4 (VAR_14, VAR_13, VAR_12);
  }

  return FUNC_8 (VAR_3, VAR_4, VAR_5, VAR_0, (VAR_14 - VAR_0) + VAR_12);
}
