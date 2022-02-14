
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int ismic ;
struct TYPE_3__ {int ah_macVersion; int ah_macRev; } ;
struct TYPE_4__ {TYPE_1__ revs; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int,int) ;
 int VAR_6 ;
 char* FUNC_10 (int*) ;
 int FUNC_11 (int *,char*,...) ;
 scalar_t__ FUNC_12 (int*,int) ;
 scalar_t__ FUNC_13 (int*,int) ;
 int FUNC_14 (int*,int ,int) ;
 int FUNC_15 (int*,int) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static void
FUNC_16(FILE *VAR_8, int VAR_9)
{
 static const char *VAR_10[] = {
  "WEP-40",
  "WEP-104",
  "#2",
  "WEP-128",
  "TKIP",
  "AES-OCB",
  "AES-CCM",
  "CLR",
 };
 int VAR_11 = FUNC_9(VAR_7.revs.ah_macVersion, VAR_7.revs.ah_macRev) < FUNC_9(4,8) ? 0 :
        FUNC_8(VAR_6, VAR_2) & VAR_3;
 u_int8_t VAR_12[VAR_4];
 u_int8_t VAR_13[128/VAR_5];
 int VAR_14;
 int VAR_15 = 1;

 FUNC_14(VAR_13, 0, sizeof(VAR_13));
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  u_int32_t VAR_16, VAR_17, VAR_18;
  u_int32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

  VAR_17 = FUNC_8(VAR_6, FUNC_6(VAR_14));
  if ((VAR_17 & VAR_1) == 0 && FUNC_12(VAR_13, VAR_14))
   continue;
  VAR_16 = FUNC_8(VAR_6, FUNC_5(VAR_14));
  VAR_17 <<= 1;
  if (VAR_16 & (1<<31))
   VAR_17 |= 1;
  VAR_16 <<= 1;
  VAR_12[4] = VAR_17 & 0xff;
  VAR_12[5] = VAR_17 >> 8;
  VAR_12[0] = VAR_16 & 0xff;
  VAR_12[1] = VAR_16 >> 8;
  VAR_12[2] = VAR_16 >> 16;
  VAR_12[3] = VAR_16 >> 24;
  VAR_18 = FUNC_8(VAR_6, FUNC_7(VAR_14));
  if ((VAR_18 & 7) == VAR_0 && VAR_11)
   FUNC_15(VAR_13, VAR_14+64);
  VAR_19 = FUNC_8(VAR_6, FUNC_0(VAR_14));
  VAR_20 = FUNC_8(VAR_6, FUNC_1(VAR_14));
  VAR_21 = FUNC_8(VAR_6, FUNC_2(VAR_14));
  VAR_22 = FUNC_8(VAR_6, FUNC_3(VAR_14));
  VAR_23 = FUNC_8(VAR_6, FUNC_4(VAR_14));
  if (VAR_15) {
   FUNC_11(VAR_8, "\n");
   VAR_15 = 0;
  }
  FUNC_11(VAR_8, "KEY[%03u] MAC %s %-7s %02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x\n"
   , VAR_14
   , FUNC_10(VAR_12)
   , FUNC_13(VAR_13, VAR_14) ? "MIC" : VAR_10[VAR_18 & 7]
   , (VAR_19 >> 0) & 0xff
   , (VAR_19 >> 8) & 0xff
   , (VAR_19 >> 16) & 0xff
   , (VAR_19 >> 24) & 0xff
   , (VAR_20 >> 0) & 0xff
   , (VAR_20 >> 8) & 0xff
   , (VAR_21 >> 0) & 0xff
   , (VAR_21 >> 8) & 0xff
   , (VAR_21 >> 16) & 0xff
   , (VAR_21 >> 24) & 0xff
   , (VAR_22 >> 0) & 0xff
   , (VAR_22 >> 8) & 0xff
   , (VAR_23 >> 0) & 0xff
   , (VAR_23 >> 8) & 0xff
   , (VAR_23 >> 16) & 0xff
   , (VAR_23 >> 24) & 0xff
  );
 }
}
