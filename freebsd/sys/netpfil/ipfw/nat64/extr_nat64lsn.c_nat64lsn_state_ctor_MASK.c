
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nat64lsn_states_chunk {TYPE_1__* state; } ;
struct TYPE_2__ {scalar_t__ flags; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, int VAR_1, void *VAR_2, int VAR_3)
{
 struct nat64lsn_states_chunk *VAR_4;
 int VAR_5;

 VAR_4 = (struct nat64lsn_states_chunk *)VAR_0;
 for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
  VAR_4->state[VAR_5].flags = 0;
 return (0);
}
