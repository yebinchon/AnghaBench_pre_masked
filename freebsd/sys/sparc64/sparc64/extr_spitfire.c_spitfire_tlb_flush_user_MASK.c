
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

void
FUNC_4(void)
{
 u_long VAR_9;
 u_long VAR_10;
 u_int VAR_11;
 u_int VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_12 = FUNC_0(VAR_8, VAR_11);
  VAR_9 = FUNC_2(VAR_12, VAR_0);
  VAR_10 = FUNC_2(VAR_12, VAR_1);
  if ((VAR_9 & VAR_6) != 0 && (VAR_9 & VAR_5) == 0 &&
      FUNC_1(VAR_10) != VAR_7)
   FUNC_3(VAR_12, VAR_0, 0);
  VAR_9 = FUNC_2(VAR_12, VAR_2);
  VAR_10 = FUNC_2(VAR_12, VAR_3);
  if ((VAR_9 & VAR_6) != 0 && (VAR_9 & VAR_5) == 0 &&
      FUNC_1(VAR_10) != VAR_7)
   FUNC_3(VAR_12, VAR_2, 0);
 }
}
