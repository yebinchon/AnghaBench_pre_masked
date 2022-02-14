
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
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
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static unsigned int FUNC_11(void)
{
 unsigned int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 u32 VAR_19;

 if (FUNC_1() || FUNC_6())
  return FUNC_8(VAR_0) << 24;

 if (FUNC_3()) {
  VAR_19 = FUNC_10(VAR_14);
  return VAR_19 * 8 * 1024 * 1024;
 }

 if (FUNC_2() || FUNC_4()) {
  VAR_19 = FUNC_10(VAR_11);
  VAR_16 = (VAR_19 & VAR_12) >> VAR_13;
  VAR_15 = (VAR_19 & VAR_9) >> VAR_10;
  VAR_17 = (VAR_19 & VAR_7) ? 1 : 0;
  VAR_18 = (VAR_19 & VAR_8) ? 2 : 1;
 }

 if (FUNC_0() || FUNC_5() || FUNC_7()) {
  VAR_19 = FUNC_9(VAR_4);
  VAR_16 = (VAR_19 & VAR_5) >> VAR_6;
  VAR_15 = (VAR_19 & VAR_2) >> VAR_3;
  VAR_17 = (VAR_19 & VAR_1) ? 0 : 1;
  VAR_18 = 2;
 }


 VAR_16 += 11;


 VAR_15 += 8;

 return 1 << (VAR_15 + VAR_16 + (VAR_17 + 1) + VAR_18);
}
