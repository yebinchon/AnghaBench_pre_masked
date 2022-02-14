
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsi_master_gpio {int last_addr; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fsi_master_gpio *VAR_1,
  int VAR_2, bool VAR_3, uint32_t VAR_4)
{
 if (!VAR_3)
  VAR_1->last_addr = VAR_0;
 else
  VAR_1->last_addr = ((VAR_2 & 0x3) << 21) | (VAR_4 & ~0x3);
}
