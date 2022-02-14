
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,int) ;

int
FUNC_4(int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0);
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 FUNC_1(&VAR_0);
 if (VAR_3)
  FUNC_2("adb handler change: [%d] 0x%X\n", VAR_1, VAR_2);
 return VAR_3;
}
