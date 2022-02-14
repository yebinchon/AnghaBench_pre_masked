
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

int FUNC_4(int VAR_5, int VAR_6, int *VAR_7)
{
 int VAR_8 = FUNC_3("get-sensor-state");
 int VAR_9;

 if (VAR_8 == VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8, 2, 2, VAR_7, VAR_5, VAR_6);
 FUNC_0(VAR_9 == VAR_1 || (VAR_9 >= VAR_3 &&
        VAR_9 <= VAR_2));

 if (VAR_9 < 0)
  return FUNC_2(VAR_9);
 return VAR_9;
}
