
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
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (struct connection*,int) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (int *,...) ;

int FUNC_9 (struct connection *VAR_4) {
  nbw_iterator_t VAR_5;
  unsigned VAR_6 = 0x00000000;
  int VAR_7 = 0;
  char VAR_8 = 2;

  if (!VAR_3 || !*VAR_3) {
    FUNC_0(VAR_4)->auth_state = VAR_2;
    VAR_4->status = VAR_0;
    FUNC_0(VAR_4)->packet_state = 0;
    FUNC_7 (1, "outcoming initdb successful\n");
    FUNC_1(VAR_4)->sql_becomes_ready (VAR_4);
    return 0;
  }

  FUNC_2 (&VAR_5, &VAR_4->Out);
  FUNC_8 (&VAR_4->Out, &VAR_6, 4);

  VAR_7 += FUNC_8 (&VAR_4->Out, &VAR_8, 1);
  if (VAR_3 && *VAR_3) {
    VAR_7 += FUNC_8 (&VAR_4->Out, VAR_3, (int)FUNC_4 (VAR_3));
  }

  FUNC_3 (&VAR_5, &VAR_7, 3);

  FUNC_1(VAR_4)->sql_flush_packet (VAR_4, VAR_7);

  FUNC_0(VAR_4)->auth_state = VAR_1;
  return 0;
}
