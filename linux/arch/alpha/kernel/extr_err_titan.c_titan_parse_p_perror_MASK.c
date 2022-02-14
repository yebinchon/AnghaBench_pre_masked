
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int,int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_2(int VAR_20, int VAR_21, u64 VAR_22, int VAR_23)
{
 int VAR_24;
 unsigned long VAR_25;
 int VAR_26 = VAR_1;
 if (!(VAR_22 & ((1UL << 0) | (1UL << 1) | (1UL << 2) | (1UL << 3) | (1UL << 4) | (1UL << 5) | (1UL << 6) | (1UL << 7) | (1UL << 8) | (1UL << 9) | (1UL << 10))))
  return VAR_2;

 VAR_24 = FUNC_0(VAR_22, VAR_5);
 VAR_25 = FUNC_0(VAR_22, VAR_3) << 2;
 if (((VAR_22 & (1UL << 8)) ||
      ((VAR_22 & ((1UL << 0) | (1UL << 1) | (1UL << 2) | (1UL << 3) | (1UL << 4) | (1UL << 5) | (1UL << 6) | (1UL << 7) | (1UL << 8) | (1UL << 9) | (1UL << 10))) ==
       (1UL << 0))) &&
     ((((VAR_24 & 0xE) == 2) && (VAR_25 < 0x1000)) ||
      (((VAR_24 & 0xE) == 6) && (VAR_25 >= 0xA0000) && (VAR_25 < 0x100000)))) {
  VAR_26 = VAR_0;
 }
 return VAR_26;
}
