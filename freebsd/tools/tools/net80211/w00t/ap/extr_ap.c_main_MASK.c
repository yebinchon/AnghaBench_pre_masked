
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int bint; int chan; int tx; int rx; int tap; int mac; int wep_len; int wep_key; int * ssid; int blast; int seq; } ;
typedef int p ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct params*,int ,int) ;
 int FUNC_8 (struct params*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* VAR_0 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int *,char*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,char*,int) ;
 int FUNC_18 (char*) ;

int FUNC_19(int VAR_1, char *VAR_2[])
{
 char *VAR_3 = "wlan0";
 char *VAR_4 = "tap0";
 struct params VAR_5;
 int VAR_6;


 FUNC_7(&VAR_5, 0, sizeof(VAR_5));
 FUNC_6(VAR_5.mac, "\x00\x00\xde\xfa\xce\x0d", 6);
 FUNC_16(VAR_5.ssid, "sorbo");
 VAR_5.bint = 500*1000;
 VAR_5.seq = FUNC_4();
 if (FUNC_5(&VAR_5.blast, ((void*)0)) == -1)
  FUNC_1(1, "gettimeofday()");
 VAR_5.chan = 3;

 while ((VAR_6 = FUNC_3(VAR_1, VAR_2, "hi:s:m:w:c:t:")) != -1) {
  switch (VAR_6) {
  case 'i':
   VAR_3 = VAR_0;
   break;
  case 't':
   VAR_4 = VAR_0;
   break;

  case 'c':
   VAR_5.chan = FUNC_0(VAR_0);
   break;

  case 's':
   FUNC_17(VAR_5.ssid, VAR_0, sizeof(VAR_5.ssid)-1);
   VAR_5.ssid[sizeof(VAR_5.ssid)-1] = 0;
   break;

  case 'm':
   FUNC_14(VAR_5.mac, VAR_0);
   break;

  case 'w':
   if (FUNC_15(VAR_5.wep_key, &VAR_5.wep_len, VAR_0)) {
    FUNC_12("Error parsing WEP key\n");
    FUNC_2(1);
   }
   break;

  case 'h':
  default:
   FUNC_18(VAR_2[0]);
   break;
  }
 }


 if ((VAR_5.tx = FUNC_11(VAR_3)) == -1)
  FUNC_1(1, "open_tx()");
 if ((VAR_5.rx = FUNC_9(VAR_3)) == -1)
  FUNC_1(1, "open_rx()");

 if ((VAR_5.tap = FUNC_10(VAR_4)) == -1)
  FUNC_1(1, "open_tap()");
 if (FUNC_13(VAR_4, VAR_5.mac) == -1)
  FUNC_1(1, "set_iface_mac()");

 while (1) {
  FUNC_8(&VAR_5);
 }

 FUNC_2(0);
}
