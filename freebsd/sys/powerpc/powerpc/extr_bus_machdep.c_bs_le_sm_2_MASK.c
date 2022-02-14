
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int volatile*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(bus_space_handle_t VAR_0, bus_size_t VAR_1, uint16_t VAR_2, size_t VAR_3)
{
 volatile uint16_t *VAR_4 = FUNC_0(VAR_0, VAR_1);

 while (VAR_3--)
  FUNC_1(VAR_4, VAR_2);
 FUNC_2();
}
