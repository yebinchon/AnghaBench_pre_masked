
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int nasid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(nasid_t VAR_6, int VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_7 == 0) {
  VAR_8 = FUNC_0(VAR_6, VAR_0);
  VAR_9 = FUNC_0(VAR_6, VAR_2);
 } else {
  VAR_8 = FUNC_0(VAR_6, VAR_1);
  VAR_9 = FUNC_0(VAR_6, VAR_3);
 }

 VAR_10 = FUNC_0(VAR_6, VAR_4);
 VAR_11 = FUNC_0(VAR_6, VAR_5);

 FUNC_1("PI_INT_MASK0: %16llx PI_INT_MASK1: %16llx\n", VAR_8, VAR_9);
 FUNC_1("PI_INT_PEND0: %16llx PI_INT_PEND1: %16llx\n", VAR_10, VAR_11);
 FUNC_1("\n\n");
}
