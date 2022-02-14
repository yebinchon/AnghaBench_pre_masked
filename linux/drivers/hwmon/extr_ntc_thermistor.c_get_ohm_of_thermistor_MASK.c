
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct ntc_thermistor_platform_data {unsigned int pullup_uv; unsigned int pullup_ohm; unsigned int pulldown_ohm; scalar_t__ connect; } ;
struct ntc_data {struct ntc_thermistor_platform_data* pdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ntc_data *VAR_3, unsigned int VAR_4)
{
 struct ntc_thermistor_platform_data *VAR_5 = VAR_3->pdata;
 u32 VAR_6 = VAR_5->pullup_uv;
 u64 VAR_7, VAR_8, VAR_9;
 VAR_8 = VAR_5->pullup_ohm;
 VAR_9 = VAR_5->pulldown_ohm;

 if (VAR_4 == 0)
  return (VAR_5->connect == VAR_2) ?
   VAR_0 : 0;
 if (VAR_4 >= VAR_6)
  return (VAR_5->connect == VAR_2) ?
   0 : VAR_0;

 if (VAR_5->connect == VAR_2 && VAR_8 == 0)
  VAR_7 = FUNC_1(VAR_9 * (VAR_6 - VAR_4), VAR_4);
 else if (VAR_5->connect == VAR_1 && VAR_9 == 0)
  VAR_7 = FUNC_1(VAR_8 * VAR_4, VAR_6 - VAR_4);
 else if (VAR_5->connect == VAR_2)
  VAR_7 = FUNC_0(VAR_9 * VAR_8 * (VAR_6 - VAR_4),
    VAR_8 * VAR_4 - VAR_9 * (VAR_6 - VAR_4));
 else
  VAR_7 = FUNC_0(VAR_9 * VAR_8 * VAR_4, VAR_9 * (VAR_6 - VAR_4) - VAR_8 * VAR_4);

 if (VAR_7 > VAR_0)
  VAR_7 = VAR_0;
 return VAR_7;
}
