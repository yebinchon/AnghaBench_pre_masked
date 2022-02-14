
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int irqreturn_t ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3) {
 u32 VAR_4 = FUNC_0(VAR_0);
 switch (VAR_4 & VAR_1) {
 case 128:
  FUNC_1("Received chassis-initiated reset request");
 default:
  FUNC_1("Unknown external reset: CRCS=0x%x", VAR_4);
 }
}
