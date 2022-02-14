
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcast_group {int* members; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mcast_group *VAR_1, u8 VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_2 >>= 1)
  if (VAR_2 & 0x1)
   VAR_1->members[VAR_4] += VAR_3;
}
