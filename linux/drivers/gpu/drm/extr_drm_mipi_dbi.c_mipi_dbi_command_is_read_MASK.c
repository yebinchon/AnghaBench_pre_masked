
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mipi_dbi {scalar_t__* read_commands; } ;



__attribute__((used)) static bool FUNC_0(struct mipi_dbi *VAR_0, u8 VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_0->read_commands)
  return 0;

 for (VAR_2 = 0; VAR_2 < 0xff; VAR_2++) {
  if (!VAR_0->read_commands[VAR_2])
   return 0;
  if (VAR_1 == VAR_0->read_commands[VAR_2])
   return 1;
 }

 return 0;
}
