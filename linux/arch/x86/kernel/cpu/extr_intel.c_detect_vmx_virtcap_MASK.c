
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct cpuinfo_x86*,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct cpuinfo_x86*,int ) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_3(struct cpuinfo_x86 *VAR_16)
{
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22;

 FUNC_0(VAR_16, VAR_6);
 FUNC_0(VAR_16, VAR_7);
 FUNC_0(VAR_16, VAR_5);
 FUNC_0(VAR_16, VAR_3);
 FUNC_0(VAR_16, VAR_8);
 FUNC_0(VAR_16, VAR_4);

 FUNC_1(VAR_1, VAR_17, VAR_18);
 VAR_19 = VAR_18 | VAR_17;
 if (VAR_19 & 0x00200000)
  FUNC_2(VAR_16, VAR_6);
 if (VAR_19 & 0x00400000)
  FUNC_2(VAR_16, VAR_7);
 if (VAR_19 & 0x80000000) {
  FUNC_1(VAR_2,
        VAR_17, VAR_18);
  VAR_20 = VAR_18 | VAR_17;
  if ((VAR_20 & 0x00000001) &&
      (VAR_19 & 0x00200000))
   FUNC_2(VAR_16, VAR_5);
  if (VAR_20 & 0x00000002) {
   FUNC_2(VAR_16, VAR_3);
   FUNC_1(VAR_0,
         VAR_22, VAR_21);
   if (VAR_22 & 0x00200000)
    FUNC_2(VAR_16, VAR_4);
  }
  if (VAR_20 & 0x00000020)
   FUNC_2(VAR_16, VAR_8);
 }
}
