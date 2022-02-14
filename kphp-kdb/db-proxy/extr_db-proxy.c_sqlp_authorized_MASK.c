
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int Out; int status; } ;
typedef int nbw_iterator_t ;
struct TYPE_4__ {int auth_state; scalar_t__ packet_state; } ;
struct TYPE_3__ {int (* sql_flush_packet ) (struct connection*,int) ;int (* sql_becomes_ready ) (struct connection*) ;} ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (struct connection*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int *,...) ;

int FUNC_9 (struct connection *VAR_6) {
  nbw_iterator_t VAR_7;
  unsigned VAR_8 = 0x00000000;
  int VAR_9 = 0;
  char VAR_10 = 2;

  if (!VAR_3 || !*VAR_3) {
    FUNC_0(VAR_6)->auth_state = VAR_2;
    VAR_6->status = VAR_0;
    FUNC_0(VAR_6)->packet_state = 0;
    if (VAR_5 > 1) {
      FUNC_2 (VAR_4, "outcoming initdb successful\n");
    }
    FUNC_1(VAR_6)->sql_becomes_ready (VAR_6);
    return 0;
  }

  FUNC_3 (&VAR_7, &VAR_6->Out);
  FUNC_8 (&VAR_6->Out, &VAR_8, 4);

  VAR_9 += FUNC_8 (&VAR_6->Out, &VAR_10, 1);
  if (VAR_3 && *VAR_3) {
    VAR_9 += FUNC_8 (&VAR_6->Out, VAR_3, FUNC_5 (VAR_3));
  }

  FUNC_4 (&VAR_7, &VAR_9, 3);

  FUNC_1(VAR_6)->sql_flush_packet (VAR_6, VAR_9);

  FUNC_0(VAR_6)->auth_state = VAR_1;
  return 0;
}
