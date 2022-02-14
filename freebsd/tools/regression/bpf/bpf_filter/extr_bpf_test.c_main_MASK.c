
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,...) ;
 int VAR_12 ;
 int FUNC_4 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;

int
FUNC_5(void)
{

 u_int VAR_15;

 u_int VAR_16;
 int VAR_17;





 for (VAR_17 = VAR_3; VAR_17 <= VAR_4; VAR_17++)
  FUNC_4(VAR_17, VAR_12);
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  VAR_16 = FUNC_1(VAR_9 != 0 ? VAR_10 : ((void*)0), VAR_11, VAR_14, VAR_5);

 if (VAR_7 != 0) {
  if (VAR_13 > 1)
   FUNC_3("Expected signal %d but got none:\t",
       VAR_7);
  if (VAR_13 > 0)
   FUNC_3("FAILED\n");
  return (VAR_1);
 }
 if (VAR_16 != VAR_6) {
  if (VAR_13 > 1)
   FUNC_3("Expected 0x%x but got 0x%x:\t", VAR_6, VAR_16);
  if (VAR_13 > 0)
   FUNC_3("FAILED\n");
  return (VAR_1);
 }
 if (VAR_13 > 1)
  FUNC_3("Expected and got 0x%x:\t", VAR_16);
 if (VAR_13 > 0)
  FUNC_3("PASSED\n");

 return (VAR_2);
}
