
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ingenic_intc_data {unsigned int num_chips; scalar_t__ base; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ingenic_intc_data* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct ingenic_intc_data *VAR_6 = FUNC_2(VAR_4);
 uint32_t VAR_7;
 unsigned VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_chips; VAR_8++) {
  VAR_7 = FUNC_3(VAR_6->base + (VAR_8 * VAR_0) +
    VAR_3);
  if (!VAR_7)
   continue;

  FUNC_1(FUNC_0(VAR_7) + (VAR_8 * 32) + VAR_2);
 }

 return VAR_1;
}
