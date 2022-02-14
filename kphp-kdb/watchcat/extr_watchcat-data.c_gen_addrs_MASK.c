
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int ) ;

char *FUNC_4 (char *VAR_3) {

  char *VAR_4 = VAR_3;
  int VAR_5 = 0;
  while (*VAR_4) {
    if (*VAR_4++ == 1) {
      VAR_5 = 1;
      VAR_4[-1] = 0;
      break;
    }
  }

  FUNC_3 (&VAR_0, VAR_3, FUNC_2 (VAR_3));

  if (VAR_5) {
    VAR_4[-1] = 1;
  } else {
    VAR_4 = VAR_3;
  }

  VAR_2 = 0;
  FUNC_1(&VAR_0);
  FUNC_0 (VAR_1, VAR_2);
  return VAR_4;
}
