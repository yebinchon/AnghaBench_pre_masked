
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
typedef int u_int ;
struct TYPE_6__ {TYPE_2__* tcp; } ;
struct alias_link {TYPE_3__ data; } ;
struct ack_data_record {int delta; int active; void* ack_new; void* ack_old; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_5__ {TYPE_1__ state; struct ack_data_record* ack; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct alias_link *VAR_1, int VAR_2, u_int VAR_3, u_short VAR_4,
    u_long VAR_5, u_int VAR_6)
{






 struct ack_data_record VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = (VAR_3 + VAR_6) << 2;
 VAR_9 = FUNC_2(VAR_4);
 VAR_10 = VAR_9 - VAR_8;

 VAR_7.ack_old = FUNC_0(FUNC_1(VAR_5) + VAR_10);
 VAR_7.ack_new = FUNC_0(FUNC_1(VAR_5) + VAR_10 + VAR_2);
 VAR_7.delta = VAR_2;
 VAR_7.active = 1;

 VAR_11 = VAR_1->data.tcp->state.index;
 VAR_1->data.tcp->ack[VAR_11] = VAR_7;

 VAR_11++;
 if (VAR_11 == VAR_0)
  VAR_1->data.tcp->state.index = 0;
 else
  VAR_1->data.tcp->state.index = VAR_11;
}
