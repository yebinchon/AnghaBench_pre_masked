
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcast_group {int* members; } ;



__attribute__((used)) static void FUNC_0(struct mcast_group *VAR_0, u8 VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++, VAR_1 >>= 1)
  if (VAR_1 & 0x1)
   VAR_0->members[VAR_3] += VAR_2;
}
