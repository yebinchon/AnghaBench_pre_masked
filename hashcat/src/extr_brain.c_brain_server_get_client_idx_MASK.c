
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* client_slots; } ;
typedef TYPE_1__ brain_server_dbs_t ;


 int VAR_0 ;

int FUNC_0 (brain_server_dbs_t *VAR_1)
{
  for (int VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
  {
    if (VAR_1->client_slots[VAR_2] == 0)
    {
      VAR_1->client_slots[VAR_2] = 1;

      return VAR_2;
    }
  }

  return -1;
}
