
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,unsigned int) ;
 int FUNC_1 (char const*,unsigned int) ;
 scalar_t__ FUNC_2 (int,int*,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_3(const char *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_4 && VAR_0 != VAR_1)
  return;
 if (FUNC_2(0, &VAR_5, &VAR_6) != 0)
  return;
 if (VAR_5)
  FUNC_0(VAR_2, VAR_3);
 if (VAR_6)
  FUNC_1(VAR_2, VAR_3);
 FUNC_2(1, &VAR_5, &VAR_6);
}
