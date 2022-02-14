
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static u64 FUNC_0(unsigned int VAR_10, unsigned int VAR_11,
        int VAR_12, int VAR_13,
        unsigned int VAR_14,
        bool VAR_15, bool VAR_16, bool VAR_17, bool VAR_18,
        int VAR_19)
{
 u64 VAR_20 = (VAR_10 - 1) & VAR_6;

 VAR_20 |= ((u64) VAR_19 << VAR_7);
 VAR_20 |= ((u64) VAR_12 << VAR_2);
 VAR_20 |= ((u64) VAR_13 << VAR_0);
 if (VAR_15)
  VAR_20 |= VAR_9;
 if (VAR_16)
  VAR_20 |= VAR_8;
 if (VAR_17)
  VAR_20 |= VAR_3;
 if (VAR_18)
  VAR_20 |= VAR_1;
 if (VAR_11)
  VAR_20 |= ((u64) (VAR_11 - 1)) << VAR_5;
 if (VAR_14)
  VAR_20 |= ((u64) (VAR_14 - 1)) << VAR_4;

 return VAR_20;
}
