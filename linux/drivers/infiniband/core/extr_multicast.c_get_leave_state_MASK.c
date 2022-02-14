
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int join_state; } ;
struct mcast_group {TYPE_1__ rec; int * members; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct mcast_group *VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!VAR_1->members[VAR_3])
   VAR_2 |= (0x1 << VAR_3);

 return VAR_2 & VAR_1->rec.join_state;
}
