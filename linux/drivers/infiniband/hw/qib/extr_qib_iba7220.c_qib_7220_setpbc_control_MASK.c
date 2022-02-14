
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct qib_pportdata {size_t delay_mult; TYPE_1__* cpspec; } ;
struct TYPE_2__ {size_t last_delay_mult; } ;


 size_t VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct qib_pportdata *VAR_2, u32 VAR_3,
       u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6 = VAR_2->delay_mult;
 u8 VAR_7 = VAR_1[VAR_4];
 u32 VAR_8 = VAR_2->cpspec->last_delay_mult;

 VAR_2->cpspec->last_delay_mult = (VAR_7 > VAR_6) ?
  (VAR_3 * (VAR_7 - VAR_6) + 1) >> 1 : 0;


 if (VAR_5 == 15)
  VAR_8 |= VAR_0;
 return VAR_8;
}
