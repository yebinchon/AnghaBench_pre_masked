
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum LAPIC_REGISTERS { ____Placeholder_LAPIC_REGISTERS } LAPIC_REGISTERS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(enum LAPIC_REGISTERS VAR_4, uint32_t VAR_5)
{

 if (VAR_3) {
  FUNC_0(VAR_1 + VAR_4, VAR_5);
 } else {
  *(volatile uint32_t *)(VAR_2 + VAR_4 * VAR_0) = VAR_5;
 }
}
