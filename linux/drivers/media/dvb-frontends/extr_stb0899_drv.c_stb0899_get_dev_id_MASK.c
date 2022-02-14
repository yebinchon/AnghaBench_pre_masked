
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct stb0899_state {int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int,char*,...) ;
 int FUNC_4 (struct stb0899_state*,int ) ;

__attribute__((used)) static int FUNC_5(struct stb0899_state *VAR_12)
{
 u8 VAR_13, VAR_14;
 u16 VAR_15;
 u32 VAR_16 = 0, VAR_17 = 0;
 char VAR_18[5] = { 0 };
 char VAR_19[5] = { 0 };

 VAR_15 = FUNC_4(VAR_12, VAR_9);
 FUNC_3(VAR_12->verbose, VAR_7, 1, "ID reg=[0x%02x]", VAR_15);
 VAR_13 = FUNC_1(VAR_0, VAR_15);
 VAR_14 = FUNC_1(VAR_1, VAR_15);

 FUNC_3(VAR_12->verbose, VAR_8, 1, "Device ID=[%d], Release=[%d]",
  VAR_13, VAR_14);

 FUNC_0(FUNC_2(VAR_10, VAR_2), (char *)&VAR_18);

 VAR_16 = FUNC_2(VAR_10, VAR_3);
 FUNC_3(VAR_12->verbose, VAR_8, 1, "Demodulator Core ID=[%s], Version=[%d]", (char *) &VAR_18, VAR_16);
 FUNC_0(FUNC_2(VAR_11, VAR_5), (char *)&VAR_19);
 VAR_17 = FUNC_2(VAR_11, VAR_6);
 if (! (VAR_13 > 0)) {
  FUNC_3(VAR_12->verbose, VAR_8, 1, "couldn't find a STB 0899");

  return -VAR_4;
 }
 FUNC_3(VAR_12->verbose, VAR_8, 1, "FEC Core ID=[%s], Version=[%d]", (char*) &VAR_19, VAR_17);

 return 0;
}
