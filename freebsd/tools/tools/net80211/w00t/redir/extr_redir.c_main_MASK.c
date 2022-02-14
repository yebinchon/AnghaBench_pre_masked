
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* fname; int prga_len; int rx; int tx; int tap; int state; int mac; int port; int dst; int ap; int rtr; int src; int seq; } ;
typedef int p ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct params*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (struct params*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct params*,int ,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 char* VAR_1 ;
 int FUNC_14 (struct params*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (char*) ;

int FUNC_19(int VAR_2, char *VAR_3[])
{
 struct params VAR_4;
 char *VAR_5 = "wlan0";
 char *VAR_6 = "tap0";
 int VAR_7;

 FUNC_10(&VAR_4, 0, sizeof(VAR_4));
 FUNC_9(VAR_4.mac, "\x00\x00\xde\xfa\xce\xd", 6);
 VAR_4.fname = "prga.log";
 VAR_4.seq = FUNC_6();

 while ((VAR_7 = FUNC_5(VAR_2, VAR_3, "hd:p:b:t:r:s:")) != -1) {
  switch (VAR_7) {
  case 's':
   if (!FUNC_7(VAR_1, &VAR_4.src)) {
    FUNC_15("Can't parse src IP\n");
    FUNC_4(1);
   }
   break;

  case 'r':
   if (FUNC_17(VAR_4.rtr, VAR_1) == -1) {
    FUNC_15("Can't parse rtr MAC\n");
    FUNC_4(1);
   }
   break;

  case 't':
   VAR_6 = VAR_1;
   break;

  case 'b':
   if (FUNC_17(VAR_4.ap, VAR_1) == -1) {
    FUNC_15("Can't parse BSSID\n");
    FUNC_4(1);
   }
   break;

  case 'd':
   if (!FUNC_7(VAR_1, &VAR_4.dst)) {
    FUNC_15("Can't parse IP\n");
    FUNC_4(1);
   }
   break;

  case 'p':
   VAR_4.port = FUNC_1(VAR_1);
   break;

  case 'h':
  default:
   FUNC_18(VAR_3[0]);
   break;
  }
 }

 FUNC_8(&VAR_4);
 FUNC_0(VAR_4.prga_len > 60);

 if ((VAR_4.rx = FUNC_11(VAR_5)) == -1)
  FUNC_3(1, "open_rx()");
 if ((VAR_4.tx = FUNC_13(VAR_5)) == -1)
  FUNC_3(1, "open_tx()");

 if ((VAR_4.tap = FUNC_12(VAR_6)) == -1)
  FUNC_3(1, "open_tap()");
 if (FUNC_16(VAR_6, VAR_4.mac) == -1)
  FUNC_3(1, "set_iface_mac()");

 if (FUNC_2(&VAR_4) == -1)
  FUNC_3(1, "connect_buddy()");

 VAR_4.state = VAR_0;
 while (1)
  FUNC_14(&VAR_4);

 FUNC_4(0);
}
