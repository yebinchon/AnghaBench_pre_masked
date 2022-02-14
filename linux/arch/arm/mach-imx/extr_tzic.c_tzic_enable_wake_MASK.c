
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(void)
{
 unsigned int VAR_3;

 FUNC_3(1, VAR_2 + VAR_1);
 if (FUNC_4(FUNC_2(VAR_2 + VAR_1) == 0))
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_3(FUNC_2(VAR_2 + FUNC_0(VAR_3)),
      VAR_2 + FUNC_1(VAR_3));

 return 0;
}
