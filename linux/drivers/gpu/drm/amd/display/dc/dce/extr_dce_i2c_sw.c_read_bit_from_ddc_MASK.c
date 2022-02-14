
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ddc {int pin_clock; int pin_data; } ;


 int FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static inline bool FUNC_1(
 struct ddc *VAR_0,
 bool VAR_1)
{
 uint32_t VAR_2 = 0;

 if (VAR_1)
  FUNC_0(VAR_0->pin_data, &VAR_2);
 else
  FUNC_0(VAR_0->pin_clock, &VAR_2);

 return (VAR_2 != 0);
}
