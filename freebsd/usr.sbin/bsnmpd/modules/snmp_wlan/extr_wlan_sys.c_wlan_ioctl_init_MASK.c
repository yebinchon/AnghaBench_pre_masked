
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

int
FUNC_3(void)
{
 if ((VAR_4 = FUNC_0(VAR_1, VAR_2, 0)) < 0) {
  FUNC_2(VAR_0, "cannot open socket : %s", FUNC_1(VAR_3));
  return (-1);
 }

 return (0);
}
