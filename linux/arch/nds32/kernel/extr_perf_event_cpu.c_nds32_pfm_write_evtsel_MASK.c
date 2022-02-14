
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(int VAR_7, u32 VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10 = FUNC_0(VAR_0);
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14;

 VAR_9 = VAR_3[VAR_7];

 VAR_12 = VAR_1[VAR_7];
 VAR_13 = VAR_2[VAR_7];
 VAR_10 &= ~VAR_12;
 VAR_10 &= ~VAR_13;
 if (VAR_8 & VAR_12)
  VAR_10 |= VAR_12;

 if (VAR_8 & VAR_13)
  VAR_10 |= VAR_13;


 VAR_11 = VAR_5[VAR_7];
 VAR_10 &= ~VAR_11;
 VAR_8 &= VAR_6;


 VAR_8 = FUNC_2(VAR_8);
 VAR_14 = VAR_10 | (VAR_8 << VAR_9);
 VAR_14 &= ~(VAR_4[0] | VAR_4[1] | VAR_4[2]);
 FUNC_1(VAR_14, VAR_0);
}
