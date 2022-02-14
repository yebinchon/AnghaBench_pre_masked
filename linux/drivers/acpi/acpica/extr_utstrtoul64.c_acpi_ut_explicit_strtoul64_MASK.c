
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

u64 FUNC_7(char *VAR_1)
{
 u64 VAR_2 = 0;
 u32 VAR_3 = 10;

 FUNC_0(VAR_0, VAR_1);

 if (!FUNC_5(&VAR_1)) {
  FUNC_6(0);
 }





 if (FUNC_3(&VAR_1)) {
  VAR_3 = 16;
 }

 if (!FUNC_4(&VAR_1)) {
  FUNC_6(0);
 }






 switch (VAR_3) {
 case 10:
 default:
  FUNC_1(VAR_1, &VAR_2);
  break;

 case 16:
  FUNC_2(VAR_1, &VAR_2);
  break;
 }

 FUNC_6(VAR_2);
}
