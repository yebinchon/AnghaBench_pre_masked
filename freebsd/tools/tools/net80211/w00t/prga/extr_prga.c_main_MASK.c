
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* fname; int mtu; int rx; int tx; int tap; int prga_len; void* state; int mac; int ap; int seq; } ;
typedef int p ;


 void* VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct params*) ;
 int FUNC_3 (struct params*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct params*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct params*,int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* VAR_1 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct params*) ;
 int FUNC_16 (char*) ;

int FUNC_17(int VAR_2, char *VAR_3[])
{
 struct params VAR_4;
 char *VAR_5 = "wlan0";
 char *VAR_6 = "tap0";
 int VAR_7;

 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.fname = "prga.log";
 FUNC_7(VAR_4.mac, "\x00\x00\xde\xfa\xce\x0d", 6);
 VAR_4.state = VAR_0;
 VAR_4.mtu = 1500;
 VAR_4.seq = FUNC_5();

 while ((VAR_7 = FUNC_4(VAR_2, VAR_3, "hb:t:")) != -1) {
  switch (VAR_7) {
  case 'b':
   if (FUNC_14(VAR_4.ap, VAR_1) == -1) {
    FUNC_12("Can't parse BSSID\n");
    FUNC_1(1);
   }
   break;

  case 't':
   VAR_6 = VAR_1;
   break;

  case 'h':
  default:
   FUNC_16(VAR_3[0]);
   break;
  }
 }


 if ((VAR_4.rx = FUNC_9(VAR_5)) == -1)
  FUNC_0(1, "open_rx()");
 if ((VAR_4.tx = FUNC_11(VAR_5)) == -1)
  FUNC_0(1, "open_tx()");

 if ((VAR_4.tap = FUNC_10(VAR_6)) == -1)
  FUNC_0(1, "open_tap()");
 if (FUNC_13(VAR_6, VAR_4.mac) == -1)
  FUNC_0(1, "set_iface_mac()");

 FUNC_12("Obtaining PRGA\n");

 FUNC_6(&VAR_4);

 while (VAR_4.prga_len == 0)
  FUNC_3(&VAR_4);


 while (VAR_4.prga_len < VAR_4.mtu)
  FUNC_2(&VAR_4);


 VAR_4.state = VAR_0;
 while (1)
  FUNC_15(&VAR_4);

 FUNC_1(0);
}
