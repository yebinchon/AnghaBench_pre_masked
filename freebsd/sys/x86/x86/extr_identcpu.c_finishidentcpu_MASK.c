
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 char* VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(void)
{
 u_int VAR_42[4];




 FUNC_3();

 if (VAR_32 >= 5 && (VAR_31 & VAR_4) != 0) {
  FUNC_0(5, VAR_42);
  VAR_37 = VAR_42[2];
  VAR_36 = VAR_42[0] & VAR_6;
  VAR_35 = VAR_42[1] & VAR_5;
 }

 FUNC_2();
 if (VAR_40 == VAR_19 ||
     VAR_40 == VAR_15 ||
     VAR_40 == VAR_16) {
  FUNC_0(0x80000000, VAR_42);
  VAR_29 = VAR_42[0];
 }

 if (VAR_29 >= 0x80000001) {
  FUNC_0(0x80000001, VAR_42);
  VAR_24 = VAR_42[3] & ~(VAR_30 & 0x0183f3ff);
  VAR_25 = VAR_42[2];
 }
 if (VAR_29 >= 0x80000007) {
  FUNC_0(0x80000007, VAR_42);
  VAR_27 = VAR_42[1];
  VAR_26 = VAR_42[3];
 }
 if (VAR_29 >= 0x80000008) {
  FUNC_0(0x80000008, VAR_42);
  VAR_34 = VAR_42[0] & 0xff;
  VAR_23 = VAR_42[1];
  VAR_38 = VAR_42[2];
 } else {
  VAR_34 = (VAR_30 & VAR_7) != 0 ? 36 : 32;
 }
}
