
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(bool VAR_3)
{
 int VAR_4;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_2, 1, 0);
  if (VAR_4 < 0)
   FUNC_1("failed to reserve mixdev minor: %d\n", VAR_4);
 } else {
  VAR_4 = FUNC_0(VAR_1,
         VAR_0, 1);
  if (VAR_4 < 0)
   FUNC_1("failed to reserve new minor: %d\n", VAR_4);
 }

 return VAR_4;
}
