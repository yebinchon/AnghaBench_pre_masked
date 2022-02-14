
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_4, int VAR_5) {
  int VAR_6;

  do
    VAR_6 = FUNC_1(VAR_4, VAR_5 ? VAR_1 : VAR_2);
  while (VAR_6 == -1 && VAR_3 == VAR_0);

  if (VAR_6)
    return FUNC_0(VAR_3);

  return 0;
}
