
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void
FUNC_3(void)
{
 u_int VAR_5;
 u_int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_5);
  if ((FUNC_1(VAR_6, VAR_0) & VAR_3) == 0)
   FUNC_2(VAR_6, VAR_0, 0);
  if ((FUNC_1(VAR_6, VAR_1) & VAR_3) == 0)
   FUNC_2(VAR_6, VAR_1, 0);
 }
}
