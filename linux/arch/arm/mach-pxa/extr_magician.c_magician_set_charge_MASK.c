
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 if (VAR_3 & VAR_1) {
  FUNC_1("Charging from AC\n");
  FUNC_0(VAR_0, 1);
 } else if (VAR_3 & VAR_2) {
  FUNC_1("Charging from USB\n");
  FUNC_0(VAR_0, 1);
 } else {
  FUNC_1("Charging disabled\n");
  FUNC_0(VAR_0, 0);
 }
}
