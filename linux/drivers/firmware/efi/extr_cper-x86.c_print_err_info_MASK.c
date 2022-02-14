
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 char** VAR_20 ;
 char** VAR_21 ;
 char** VAR_22 ;
 char** VAR_23 ;
 int FUNC_7 (char*,char const*,int ,int ) ;
 void FUNC_8 (char const*,int,int ) ;
 int FUNC_9 (char*,char const*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_10(const char *VAR_24, u8 VAR_25, u64 VAR_26)
{
 u16 VAR_27 = FUNC_6(VAR_26);





 if (VAR_25 == VAR_19)
  return FUNC_8(VAR_24, VAR_27, VAR_26);

 if (VAR_27 & VAR_15) {
  u8 VAR_28 = FUNC_5(VAR_26);

  FUNC_9("%sTransaction Type: %u, %s\n", VAR_24, VAR_28,
         VAR_28 < FUNC_0(VAR_23) ?
         VAR_23[VAR_28] : "unknown");
 }

 if (VAR_27 & VAR_10) {
  u8 VAR_29 = FUNC_4(VAR_26);





  u8 VAR_30 = (VAR_25 == VAR_18) ? 9 : 7;

  FUNC_9("%sOperation: %u, %s\n", VAR_24, VAR_29,
         VAR_29 < VAR_30 ? VAR_22[VAR_29] : "unknown");
 }

 if (VAR_27 & VAR_9)
  FUNC_9("%sLevel: %llu\n", VAR_24, FUNC_3(VAR_26));

 if (VAR_27 & VAR_12)
  FUNC_7("Processor Context Corrupt", VAR_24, VAR_26, VAR_2);

 if (VAR_27 & VAR_16)
  FUNC_7("Uncorrected", VAR_24, VAR_26, VAR_5);

 if (VAR_27 & VAR_13)
  FUNC_7("Precise IP", VAR_24, VAR_26, VAR_3);

 if (VAR_27 & VAR_14)
  FUNC_7("Restartable IP", VAR_24, VAR_26, VAR_4);

 if (VAR_27 & VAR_11)
  FUNC_7("Overflow", VAR_24, VAR_26, VAR_1);

 if (VAR_25 != VAR_17)
  return;

 if (VAR_27 & VAR_7) {
  u8 VAR_31 = FUNC_2(VAR_26);

  FUNC_9("%sParticipation Type: %u, %s\n", VAR_24, VAR_31,
         VAR_31 < FUNC_0(VAR_21) ?
         VAR_21[VAR_31] : "unknown");
 }

 if (VAR_27 & VAR_8)
  FUNC_7("Time Out", VAR_24, VAR_26, VAR_0);

 if (VAR_27 & VAR_6) {
  u8 VAR_32 = FUNC_1(VAR_26);

  FUNC_9("%sAddress Space: %u, %s\n", VAR_24, VAR_32,
         VAR_32 < FUNC_0(VAR_20) ?
         VAR_20[VAR_32] : "unknown");
 }
}
