
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
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct cpuinfo_x86*,int ) ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_0(VAR_0, VAR_14, VAR_15);
 VAR_16 = VAR_15 | VAR_14;

 if (VAR_16 & VAR_11)
  FUNC_1(VAR_13, VAR_4);
 if (VAR_16 & VAR_12)
  FUNC_1(VAR_13, VAR_5);
 if (VAR_16 & VAR_10) {
  FUNC_0(VAR_1,
        VAR_14, VAR_15);
  VAR_17 = VAR_15 | VAR_14;
  if ((VAR_17 & VAR_8) &&
      (VAR_16 & VAR_11))
   FUNC_1(VAR_13, VAR_3);
  if (VAR_17 & VAR_7)
   FUNC_1(VAR_13, VAR_2);
  if (VAR_17 & VAR_9)
   FUNC_1(VAR_13, VAR_6);
 }
}
