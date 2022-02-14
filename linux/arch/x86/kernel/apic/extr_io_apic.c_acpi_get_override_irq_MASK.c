
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_1 ;

int FUNC_5(u32 VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (VAR_1)
  return -1;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 < 0)
  return -1;

 VAR_6 = FUNC_4(VAR_5, VAR_2);
 if (VAR_6 < 0)
  return -1;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_0);
 if (VAR_7 < 0)
  return -1;

 *VAR_3 = FUNC_2(VAR_7);
 *VAR_4 = FUNC_1(VAR_7);
 return 0;
}
