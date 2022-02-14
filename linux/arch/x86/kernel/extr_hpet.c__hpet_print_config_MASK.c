
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(const char *VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_4("%s(%d):\n", VAR_7, VAR_8);

 VAR_10 = FUNC_3(VAR_2);
 VAR_11 = FUNC_3(VAR_5);
 FUNC_4("ID: 0x%x, PERIOD: 0x%x\n", VAR_10, VAR_11);

 VAR_12 = FUNC_3(VAR_0);
 VAR_13 = FUNC_3(VAR_6);
 FUNC_4("CFG: 0x%x, STATUS: 0x%x\n", VAR_12, VAR_13);

 VAR_15 = FUNC_3(VAR_1);
 VAR_16 = FUNC_3(VAR_1+4);
 FUNC_4("COUNTER_l: 0x%x, COUNTER_h: 0x%x\n", VAR_15, VAR_16);

 VAR_14 = ((VAR_10 & VAR_3) >> VAR_4) + 1;

 for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++) {
  VAR_15 = FUNC_3(FUNC_0(VAR_9));
  VAR_16 = FUNC_3(FUNC_0(VAR_9)+4);
  FUNC_4("T%d: CFG_l: 0x%x, CFG_h: 0x%x\n", VAR_9, VAR_15, VAR_16);

  VAR_15 = FUNC_3(FUNC_1(VAR_9));
  VAR_16 = FUNC_3(FUNC_1(VAR_9)+4);
  FUNC_4("T%d: CMP_l: 0x%x, CMP_h: 0x%x\n", VAR_9, VAR_15, VAR_16);

  VAR_15 = FUNC_3(FUNC_2(VAR_9));
  VAR_16 = FUNC_3(FUNC_2(VAR_9)+4);
  FUNC_4("T%d ROUTE_l: 0x%x, ROUTE_h: 0x%x\n", VAR_9, VAR_15, VAR_16);
 }
}
