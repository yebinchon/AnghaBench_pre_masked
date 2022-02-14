
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6775_data {int have_temp; int temp_fixed_num; int have_temp_fixed; int DIODE_MASK; int* temp_type; scalar_t__ REG_DIODE; scalar_t__ REG_VBAT; scalar_t__* reg_temp_config; scalar_t__ REG_CONFIG; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct nct6775_data*,scalar_t__) ;
 int FUNC_2 (struct nct6775_data*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_3(struct nct6775_data *VAR_1)
{
 int VAR_2;
 u8 VAR_3, VAR_4;


 if (VAR_1->REG_CONFIG) {
  VAR_3 = FUNC_1(VAR_1, VAR_1->REG_CONFIG);
  if (!(VAR_3 & 0x01))
   FUNC_2(VAR_1, VAR_1->REG_CONFIG, VAR_3 | 0x01);
 }


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!(VAR_1->have_temp & FUNC_0(VAR_2)))
   continue;
  if (!VAR_1->reg_temp_config[VAR_2])
   continue;
  VAR_3 = FUNC_1(VAR_1, VAR_1->reg_temp_config[VAR_2]);
  if (VAR_3 & 0x01)
   FUNC_2(VAR_1, VAR_1->reg_temp_config[VAR_2],
         VAR_3 & 0xfe);
 }


 VAR_3 = FUNC_1(VAR_1, VAR_1->REG_VBAT);
 if (!(VAR_3 & 0x01))
  FUNC_2(VAR_1, VAR_1->REG_VBAT, VAR_3 | 0x01);

 VAR_4 = FUNC_1(VAR_1, VAR_1->REG_DIODE);

 for (VAR_2 = 0; VAR_2 < VAR_1->temp_fixed_num; VAR_2++) {
  if (!(VAR_1->have_temp_fixed & FUNC_0(VAR_2)))
   continue;
  if ((VAR_3 & (VAR_1->DIODE_MASK << VAR_2)))
   VAR_1->temp_type[VAR_2]
     = 3 - ((VAR_4 >> VAR_2) & VAR_1->DIODE_MASK);
  else
   VAR_1->temp_type[VAR_2] = 4;
 }
}
