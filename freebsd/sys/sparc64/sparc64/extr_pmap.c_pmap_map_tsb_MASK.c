
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;

void
FUNC_5(void)
{
 vm_offset_t VAR_15;
 vm_paddr_t VAR_16;
 u_long VAR_17;
 int VAR_18;

 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18 += VAR_3) {
  VAR_15 = (vm_offset_t)VAR_12 + VAR_18;
  VAR_16 = VAR_13 + VAR_18;
  VAR_17 = VAR_9 | VAR_4 | FUNC_0(VAR_16) | VAR_7 | VAR_5 | VAR_6 |
      VAR_8 | VAR_10;
  FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_15) |
      FUNC_1(VAR_11));
  FUNC_4(0, VAR_2, VAR_17);
 }
}
