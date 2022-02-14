
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct qib_pportdata {size_t delay_mult; scalar_t__ hw_pidx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct qib_pportdata *VAR_4, u32 VAR_5,
       u8 VAR_6, u8 VAR_7)
{
 u8 VAR_8 = VAR_4->delay_mult;
 u8 VAR_9 = VAR_3[VAR_6];
 u32 VAR_10;

 VAR_10 = VAR_9 > VAR_8 ? ((VAR_5 + 1) >> 1) * VAR_8 : 0;


 if (VAR_7 == 15)
  VAR_10 |= VAR_0;
 else
  VAR_10 |= VAR_7 << VAR_2;
 VAR_10 |= ((u32)(VAR_4->hw_pidx)) << VAR_1;

 return VAR_10;
}
