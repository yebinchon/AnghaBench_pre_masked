
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct execlist_ring_context {TYPE_1__* pdps; } ;
struct TYPE_2__ {int val; } ;



__attribute__((used)) static void FUNC_0(
  struct execlist_ring_context *VAR_0,
  u32 VAR_1[8])
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_0->pdps[VAR_2].val = VAR_1[7 - VAR_2];
}
