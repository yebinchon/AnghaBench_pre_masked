
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ad5761_state {int range; scalar_t__ use_intref; } ;
typedef enum ad5761_voltage_range { ____Placeholder_ad5761_voltage_range } ad5761_voltage_range ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad5761_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ad5761_state *VAR_4,
    enum ad5761_voltage_range VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 VAR_6 = (VAR_5 & 0x7) | VAR_2;

 if (VAR_4->use_intref)
  VAR_6 |= VAR_3;

 VAR_7 = FUNC_0(VAR_4, VAR_1, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_4->range = VAR_5;

 return 0;
}
