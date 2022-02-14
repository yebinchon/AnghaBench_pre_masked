
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(void) {
  int VAR_6;
  int VAR_7;

  VAR_6 = VAR_2;
  if (!FUNC_2(&VAR_5))
    return VAR_1;

  VAR_7 = 0;
  if (VAR_4 != -1)
    if (FUNC_1(VAR_4, VAR_0, &VAR_3))
      VAR_7 = FUNC_0(VAR_2);

  FUNC_3(&VAR_5);
  VAR_2 = VAR_6;

  return VAR_7;
}
