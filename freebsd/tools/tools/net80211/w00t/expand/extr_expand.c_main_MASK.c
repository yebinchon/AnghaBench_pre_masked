
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int rx; int tx; int tap; int state; int mac; int ap; int mcast; int seq; } ;
typedef int p ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct params*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* VAR_1 ;
 int FUNC_9 (struct params*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*) ;

int FUNC_14(int VAR_2, char *VAR_3[])
{
 struct params VAR_4;
 char *VAR_5 = "wlan0";
 char *VAR_6 = "tap0";
 int VAR_7;

 FUNC_5(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(VAR_4.mac, "\x00\x00\xde\xfa\xce\xd", 6);
 VAR_4.seq = FUNC_3();
 FUNC_4(VAR_4.mcast, "\x01\x00\x5e\x00\x00", 5);

 while ((VAR_7 = FUNC_2(VAR_2, VAR_3, "hb:t:")) != -1) {
  switch (VAR_7) {
  case 't':
   VAR_6 = VAR_1;
   break;

  case 'b':
   if (FUNC_12(VAR_4.ap, VAR_1) == -1) {
    FUNC_10("Can't parse BSSID\n");
    FUNC_1(1);
   }
   break;

  case 'h':
  default:
   FUNC_13(VAR_3[0]);
   break;
  }
 }

 if ((VAR_4.rx = FUNC_6(VAR_5)) == -1)
  FUNC_0(1, "open_rx()");
 if ((VAR_4.tx = FUNC_8(VAR_5)) == -1)
  FUNC_0(1, "open_tx()");

 if ((VAR_4.tap = FUNC_7(VAR_6)) == -1)
  FUNC_0(1, "open_tap()");
 if (FUNC_11(VAR_6, VAR_4.mac) == -1)
  FUNC_0(1, "set_iface_mac()");

 VAR_4.state = VAR_0;
 while (1)
  FUNC_9(&VAR_4);

 FUNC_1(0);
}
