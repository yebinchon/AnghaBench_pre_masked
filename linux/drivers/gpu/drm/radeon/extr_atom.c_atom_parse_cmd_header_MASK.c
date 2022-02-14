
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u16 ;
struct atom_context {scalar_t__ cmd_table; scalar_t__ bios; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct atom_context *VAR_0, int VAR_1, uint8_t * VAR_2,
      uint8_t * VAR_3)
{
 int VAR_4 = VAR_1 * 2 + 4;
 int VAR_5 = FUNC_0(VAR_0->cmd_table + VAR_4);
 u16 *VAR_6 = (u16 *)(VAR_0->bios + VAR_0->cmd_table + 4);

 if (!VAR_6[VAR_1])
  return 0;

 if (VAR_2)
  *VAR_2 = FUNC_1(VAR_5 + 2);
 if (VAR_3)
  *VAR_3 = FUNC_1(VAR_5 + 3);
 return 1;
}
