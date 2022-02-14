
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc {int dummy; } ;


 unsigned int FUNC_0 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_1 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_2 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_3 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_4 (struct dc*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_6 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_7 (struct dc*,char*,unsigned int) ;
 unsigned int FUNC_8 (struct dc*,char*,unsigned int) ;

void FUNC_9(struct dc *VAR_0, char *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{





 const unsigned int VAR_4 = 0x1;
 const unsigned int VAR_5 = 0x2;
 const unsigned int VAR_6 = 0x4;
 const unsigned int VAR_7 = 0x8;
 const unsigned int VAR_8 = 0x10;
 const unsigned int VAR_9 = 0x20;
 const unsigned int VAR_10 = 0x40;
 const unsigned int VAR_11 = 0x80;
 const unsigned int VAR_12 = 0x100;
 const unsigned int VAR_13 = 0x8000;

 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = VAR_2;

 if (VAR_3 == 0x0)
  VAR_3 = 0xFFFF;

 if ((VAR_3 & VAR_4) && VAR_15 > 0) {
  VAR_14 = FUNC_3(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_5) && VAR_15 > 0) {
  VAR_14 = FUNC_4(VAR_0, VAR_1, VAR_15, VAR_3 & VAR_13);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_6) && VAR_15 > 0) {
  VAR_14 = FUNC_7(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_7) && VAR_15 > 0) {
  VAR_14 = FUNC_2(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_8) && VAR_15 > 0) {
  VAR_14 = FUNC_8(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_9) && VAR_15 > 0) {
  VAR_14 = FUNC_1(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_10) && VAR_15 > 0) {
  VAR_14 = FUNC_5(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_11) && VAR_15 > 0) {
  VAR_14 = FUNC_6(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }

 if ((VAR_3 & VAR_12) && VAR_15 > 0) {
  VAR_14 = FUNC_0(VAR_0, VAR_1, VAR_15);
  VAR_1 += VAR_14;
  VAR_15 -= VAR_14;
 }
}
