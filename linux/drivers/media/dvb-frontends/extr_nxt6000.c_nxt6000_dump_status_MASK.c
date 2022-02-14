
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nxt6000_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct nxt6000_state* VAR_12 ;
 int FUNC_0 (struct nxt6000_state*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct nxt6000_state *VAR_13)
{
 u8 VAR_14;
 FUNC_2("NXT6000 status:");

 VAR_14 = FUNC_0(VAR_13, VAR_10);

 FUNC_1(" DATA DESCR LOCK: %d,", VAR_14 & 0x01);
 FUNC_1(" DATA SYNC LOCK: %d,", (VAR_14 >> 1) & 0x01);

 VAR_14 = FUNC_0(VAR_13, VAR_11);

 FUNC_1(" VITERBI LOCK: %d,", (VAR_14 >> 7) & 0x01);

 switch ((VAR_14 >> 4) & 0x07) {

 case 0x00:
  FUNC_1(" VITERBI CODERATE: 1/2,");
  break;

 case 0x01:
  FUNC_1(" VITERBI CODERATE: 2/3,");
  break;

 case 0x02:
  FUNC_1(" VITERBI CODERATE: 3/4,");
  break;

 case 0x03:
  FUNC_1(" VITERBI CODERATE: 5/6,");
  break;

 case 0x04:
  FUNC_1(" VITERBI CODERATE: 7/8,");
  break;

 default:
  FUNC_1(" VITERBI CODERATE: Reserved,");

 }

 VAR_14 = FUNC_0(VAR_13, VAR_0);

 FUNC_1(" CHCTrack: %d,", (VAR_14 >> 7) & 0x01);
 FUNC_1(" TPSLock: %d,", (VAR_14 >> 6) & 0x01);
 FUNC_1(" SYRLock: %d,", (VAR_14 >> 5) & 0x01);
 FUNC_1(" AGCLock: %d,", (VAR_14 >> 4) & 0x01);

 switch (VAR_14 & 0x0F) {

 case 0x00:
  FUNC_1(" CoreState: IDLE,");
  break;

 case 0x02:
  FUNC_1(" CoreState: WAIT_AGC,");
  break;

 case 0x03:
  FUNC_1(" CoreState: WAIT_SYR,");
  break;

 case 0x04:
  FUNC_1(" CoreState: WAIT_PPM,");
  break;

 case 0x01:
  FUNC_1(" CoreState: WAIT_TRL,");
  break;

 case 0x05:
  FUNC_1(" CoreState: WAIT_TPS,");
  break;

 case 0x06:
  FUNC_1(" CoreState: MONITOR_TPS,");
  break;

 default:
  FUNC_1(" CoreState: Reserved,");

 }

 VAR_14 = FUNC_0(VAR_13, VAR_1);

 FUNC_1(" SYRLock: %d,", (VAR_14 >> 4) & 0x01);
 FUNC_1(" SYRMode: %s,", (VAR_14 >> 2) & 0x01 ? "8K" : "2K");

 switch ((VAR_14 >> 4) & 0x03) {

 case 0x00:
  FUNC_1(" SYRGuard: 1/32,");
  break;

 case 0x01:
  FUNC_1(" SYRGuard: 1/16,");
  break;

 case 0x02:
  FUNC_1(" SYRGuard: 1/8,");
  break;

 case 0x03:
  FUNC_1(" SYRGuard: 1/4,");
  break;
 }

 VAR_14 = FUNC_0(VAR_13, VAR_4);

 switch ((VAR_14 >> 4) & 0x07) {

 case 0x00:
  FUNC_1(" TPSLP: 1/2,");
  break;

 case 0x01:
  FUNC_1(" TPSLP: 2/3,");
  break;

 case 0x02:
  FUNC_1(" TPSLP: 3/4,");
  break;

 case 0x03:
  FUNC_1(" TPSLP: 5/6,");
  break;

 case 0x04:
  FUNC_1(" TPSLP: 7/8,");
  break;

 default:
  FUNC_1(" TPSLP: Reserved,");

 }

 switch (VAR_14 & 0x07) {

 case 0x00:
  FUNC_1(" TPSHP: 1/2,");
  break;

 case 0x01:
  FUNC_1(" TPSHP: 2/3,");
  break;

 case 0x02:
  FUNC_1(" TPSHP: 3/4,");
  break;

 case 0x03:
  FUNC_1(" TPSHP: 5/6,");
  break;

 case 0x04:
  FUNC_1(" TPSHP: 7/8,");
  break;

 default:
  FUNC_1(" TPSHP: Reserved,");

 }

 VAR_14 = FUNC_0(VAR_13, VAR_5);

 FUNC_1(" TPSMode: %s,", VAR_14 & 0x01 ? "8K" : "2K");

 switch ((VAR_14 >> 4) & 0x03) {

 case 0x00:
  FUNC_1(" TPSGuard: 1/32,");
  break;

 case 0x01:
  FUNC_1(" TPSGuard: 1/16,");
  break;

 case 0x02:
  FUNC_1(" TPSGuard: 1/8,");
  break;

 case 0x03:
  FUNC_1(" TPSGuard: 1/4,");
  break;

 }


 FUNC_0(VAR_13, VAR_9);
 VAR_14 = FUNC_0(VAR_13, VAR_8);
 VAR_14 = FUNC_0(VAR_13, VAR_8);

 FUNC_1(" RF AGC LOCK: %d,", (VAR_14 >> 4) & 0x01);
 FUNC_1("\n");
}
