
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct link {int * proto_out; int * proto_in; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_0(struct link *VAR_3, u_short VAR_4, int VAR_5)
{
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    if (VAR_2[VAR_6].number == VAR_4 || VAR_2[VAR_6].number == 0) {
      if (VAR_5 == VAR_1)
        VAR_3->proto_in[VAR_6]++;
      else
        VAR_3->proto_out[VAR_6]++;
      break;
    }
}
