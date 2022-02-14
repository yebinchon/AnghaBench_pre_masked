
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int ,...) ;

int FUNC_2(int VAR_5, int VAR_6) {
  int VAR_7;
  int VAR_8;

  do
    VAR_8 = FUNC_1(VAR_5, VAR_2);
  while (VAR_8 == -1 && VAR_4 == VAR_0);

  if (VAR_8 == -1)
    return FUNC_0(VAR_4);


  if (!!(VAR_8 & VAR_1) == !!VAR_6)
    return 0;

  if (VAR_6)
    VAR_7 = VAR_8 | VAR_1;
  else
    VAR_7 = VAR_8 & ~VAR_1;

  do
    VAR_8 = FUNC_1(VAR_5, VAR_3, VAR_7);
  while (VAR_8 == -1 && VAR_4 == VAR_0);

  if (VAR_8)
    return FUNC_0(VAR_4);

  return 0;
}
