
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,int,int ) ;
 scalar_t__ FUNC_5 (int,int*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(u_int VAR_7, UINT8 VAR_8, UINT16 VAR_9)
{
 u_int VAR_10, VAR_11;

 if (VAR_7 == 0xffffffff)
  VAR_10 = VAR_2;
 else if (FUNC_5(VAR_7, &VAR_10) != 0) {
  if (VAR_6)
   FUNC_6("MADT: Ignoring local NMI routed to "
       "ACPI CPU %u\n", VAR_7);
  return;
 }
 if (VAR_8 == 0)
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_5;
 FUNC_2(VAR_10, VAR_11, VAR_3);
 if (!(VAR_9 & VAR_1))
  FUNC_4(VAR_10, VAR_11,
      FUNC_1(VAR_9, 0));
 if (!(VAR_9 & VAR_0))
  FUNC_3(VAR_10, VAR_11,
      FUNC_0(VAR_9, 0));
}
