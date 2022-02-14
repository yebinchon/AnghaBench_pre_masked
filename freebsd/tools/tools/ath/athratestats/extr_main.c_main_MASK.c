
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int useconds_t ;
typedef int uint8_t ;
struct ether_addr {int dummy; } ;
struct TYPE_2__ {char* buf; int len; } ;
struct ath_ratestats {scalar_t__ s; TYPE_1__ re; } ;
typedef int r ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ath_ratestats*,char const*) ;
 int FUNC_1 (struct ath_ratestats*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_11 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,char*) ;
 struct ether_addr* FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ath_ratestats*,struct ether_addr*,int *) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (int,int ,short) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 char* VAR_12 ;
 int FUNC_20 (int ,short*,short*) ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (char*,char*,float*) ;
 int FUNC_24 () ;
 int VAR_13 ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;

int
FUNC_27(int VAR_14, char *VAR_15[])
{
 char const *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19 = 0;
 struct ether_addr *VAR_20;
 struct ath_ratestats VAR_21;
 uint8_t *VAR_22;
 useconds_t VAR_23;
 float VAR_24;
 short VAR_25, VAR_26;

 VAR_16 = FUNC_9("ATH");
 if (VAR_16 == ((void*)0))
  VAR_16 = VAR_1;

 while ((VAR_18 = FUNC_10(VAR_14, VAR_15, "ahi:m:s:")) != -1) {
  switch (VAR_18) {
  case 'a':
   VAR_19 = 1;
   break;
  case 'i':
   VAR_16 = VAR_12;
   break;
  case 'm':
   VAR_17 = VAR_12;
   break;
  case 's':
   FUNC_23(VAR_12, "%f", &VAR_24);
   VAR_11 = 1;
   VAR_23 = (useconds_t) (VAR_24 * 1000000.0);
   break;
  default:
   FUNC_5(1,
       "usage: %s [-h] [-i ifname] [-a] [-m macaddr] [-s sleep period]\n",
       VAR_15[0]);

  }
 }

 if (VAR_17 == ((void*)0)) {
  FUNC_5(1, "%s: macaddress wasn't supplied and no -a given\n",
      VAR_15[0]);

 }
 VAR_20 = FUNC_6(VAR_17);
 if (VAR_20 == ((void*)0))
  FUNC_4(1, "ether_aton");

 FUNC_1(&VAR_21, sizeof(VAR_21));




 VAR_22 = FUNC_15(VAR_9);
 if (VAR_22 == ((void*)0))
  FUNC_4(1, "calloc");

 VAR_21.re.buf = (char *) VAR_22;
 VAR_21.re.len = VAR_9;

 VAR_21.s = FUNC_22(VAR_0, VAR_8, 0);
 if (VAR_21.s < 0) {
  FUNC_4(1, "socket");
 }


 FUNC_0(&VAR_21, VAR_16);

 if (VAR_11) {
  FUNC_12();
  FUNC_24();
  FUNC_25();
  FUNC_20(0, &VAR_25, &VAR_26);

  FUNC_11(1, VAR_6, VAR_26);

  FUNC_11(2, VAR_5, VAR_26);

  FUNC_11(3, VAR_3, VAR_26);

  FUNC_11(4, VAR_2, VAR_26);

  FUNC_11(5, VAR_4, VAR_26);
  FUNC_2();
  FUNC_18();
  FUNC_19();
  FUNC_17(VAR_13, 1);
  FUNC_13(VAR_13, VAR_7);
  FUNC_14(VAR_13, VAR_10);

  while (1) {
   FUNC_3();
   FUNC_16(0, 0);
   FUNC_8(&VAR_21, VAR_20, VAR_22);
   FUNC_21();
   FUNC_26(VAR_23);
  }
 } else
  FUNC_8(&VAR_21, VAR_20, VAR_22);

 FUNC_7(0);
}
