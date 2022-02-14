
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ) ;

void FUNC_5(void)
{
 int VAR_1 = FUNC_4("/dev/null", VAR_0, 0);
 while (VAR_1 != -1 && VAR_1 < 2)
  VAR_1 = FUNC_3(VAR_1);
 if (VAR_1 == -1)
  FUNC_2(FUNC_0("open /dev/null or dup failed"));
 if (VAR_1 > 2)
  FUNC_1(VAR_1);
}
