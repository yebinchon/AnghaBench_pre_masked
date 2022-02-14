
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int,int*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(u32 VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = FUNC_0(FUNC_2("get-sensor-state"), 2, 2, &VAR_8,
         VAR_3, VAR_7);
 if (VAR_9 || VAR_8 != VAR_4)
  return -1;

 VAR_9 = FUNC_1(VAR_0, VAR_7, VAR_2);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_6);
 if (VAR_9) {
  FUNC_1(VAR_0, VAR_7, VAR_1);
  return VAR_9;
 }

 return 0;
}
