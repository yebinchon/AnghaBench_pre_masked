
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(int VAR_7)
{
 u_long VAR_8 = 0;
 int VAR_9, VAR_10;
 u_long VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_5(&VAR_6, VAR_2);


 if ((VAR_5 & (1 << VAR_7)) == 0) {
  FUNC_7("isa_dmastatus: channel %d not active\n", VAR_7);
  return(-1);
 }


 if (((VAR_4 & (1 << VAR_7)) == 0) &&
     (VAR_3 & (1 << VAR_7)) == 0 ) {
     FUNC_7("chan %d not busy\n", VAR_7);
     return -2 ;
 }
 if (VAR_7 < 4) {
  VAR_9 = VAR_0;
  VAR_10 = FUNC_0(VAR_7) + 1;
 } else {
  VAR_9 = VAR_1;
  VAR_10 = FUNC_1(VAR_7 - 4) + 2;
 }

 FUNC_2();
 FUNC_6(VAR_9, 0);
 VAR_11 = FUNC_4(VAR_10);
 VAR_12 = FUNC_4(VAR_10);
 FUNC_6(VAR_9, 0);
 VAR_13 = FUNC_4(VAR_10);
 VAR_14 = FUNC_4(VAR_10);
 FUNC_3();






 if (VAR_11 >= VAR_13) {
  VAR_8 = (VAR_11 + (VAR_12 << 8) + 1) & 0xffff;
 } else {
  VAR_8 = (VAR_13 + (VAR_14 << 8) + 1) & 0xffff;
 }

 if (VAR_7 >= 4)
  VAR_8 *= 2;
 return(VAR_8);
}
