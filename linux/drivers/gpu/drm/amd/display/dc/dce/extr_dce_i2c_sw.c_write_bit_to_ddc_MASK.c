
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ddc {int pin_clock; int pin_data; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(
 struct ddc *VAR_0,
 bool VAR_1,
 bool VAR_2)
{
 uint32_t VAR_3 = VAR_2 ? 1 : 0;

 if (VAR_1)
  FUNC_0(VAR_0->pin_data, VAR_3);
 else
  FUNC_0(VAR_0->pin_clock, VAR_3);
}
