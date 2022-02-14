
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; unsigned char* prga; unsigned char* iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_10 (int,unsigned char*,int) ;

void FUNC_11(unsigned char* VAR_8, unsigned char* VAR_9,
       unsigned char* VAR_10, int VAR_11) {

 int VAR_12;
 int VAR_13;

 if (VAR_7.len != 0)
  FUNC_2(VAR_7.prga);

 VAR_7.prga = (unsigned char*) FUNC_4(VAR_11);
 if (!VAR_7.prga) {
  FUNC_7("malloc()");
  FUNC_1(1);
 }

 VAR_7.len = VAR_11;
 FUNC_5(VAR_7.iv, VAR_8, 3);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_7.prga[VAR_12] = ( VAR_9 ? (VAR_10[VAR_12] ^ VAR_9[VAR_12]) :
              VAR_10[VAR_12]);
 }

 FUNC_9("Got %d bytes of prga IV=(%.02x:%.02x:%.02x) PRGA=",
        VAR_7.len, VAR_7.iv[0], VAR_7.iv[1], VAR_7.iv[2]);
 FUNC_3(VAR_7.prga, VAR_7.len);

 if (!VAR_9)
  return;

 VAR_13 = FUNC_6(VAR_2, VAR_1 | VAR_0,
    VAR_5 | VAR_6 | VAR_3 | VAR_4);

 if (VAR_13 == -1) {
  FUNC_7("open()");
  FUNC_1(1);
 }

 VAR_12 = FUNC_10(VAR_13, VAR_7.iv, 3);
 if (VAR_12 == -1) {
  FUNC_7("write()");
  FUNC_1(1);
 }
 if (VAR_12 != 3) {
  FUNC_8("Wrote %d out of %d\n", VAR_12, 3);
  FUNC_1(1);
 }

 VAR_12 = FUNC_10(VAR_13, VAR_7.prga, VAR_7.len);
 if (VAR_12 == -1) {
  FUNC_7("write()");
  FUNC_1(1);
 }
 if (VAR_12 != VAR_7.len) {
  FUNC_8("Wrote %d out of %d\n", VAR_12, VAR_7.len);
  FUNC_1(1);
 }

 FUNC_0(VAR_13);
}
