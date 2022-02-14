
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct smu10_power_state const smu10_power_state ;
struct pp_hw_power_state {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const struct smu10_power_state *FUNC_0(
    const struct pp_hw_power_state *VAR_1)
{
 if (VAR_0 != VAR_1->magic)
  return ((void*)0);

 return (struct smu10_power_state *)VAR_1;
}
