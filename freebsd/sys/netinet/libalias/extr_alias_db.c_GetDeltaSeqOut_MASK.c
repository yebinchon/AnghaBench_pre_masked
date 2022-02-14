
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {TYPE_1__* tcp; } ;
struct alias_link {TYPE_2__ data; } ;
struct ack_data_record {int active; int delta; int ack_old; } ;
struct TYPE_3__ {struct ack_data_record* ack; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1(u_long VAR_1, struct alias_link *VAR_2)
{






 int VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 0;
 VAR_5 = -1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ack_data_record VAR_6;

  VAR_6 = VAR_2->data.tcp->ack[VAR_3];
  if (VAR_6.active == 1) {
   int VAR_7;

   VAR_7 = FUNC_0(VAR_6.ack_old, VAR_1);
   if (VAR_7 >= 0) {
    if (VAR_5 >= 0) {
     if (VAR_7 < VAR_5) {
      VAR_4 = VAR_6.delta;
      VAR_5 = VAR_7;
     }
    } else {
     VAR_4 = VAR_6.delta;
     VAR_5 = VAR_7;
    }
   }
  }
 }
 return (VAR_4);
}
