
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connection {scalar_t__ status; int last_query_sent_time; int Out; } ;
typedef int command_t ;
struct TYPE_4__ {scalar_t__ len; int * data; } ;
typedef TYPE_1__ command_net_write_t ;
struct TYPE_6__ {int response_state; } ;
struct TYPE_5__ {int (* sql_flush_packet ) (struct connection*,scalar_t__) ;} ;


 TYPE_3__* FUNC_0 (struct connection*) ;
 TYPE_2__* FUNC_1 (struct connection*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct connection*,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int *,scalar_t__) ;

void FUNC_7 (command_t *VAR_4, void *VAR_5) {

  command_net_write_t *VAR_6 = (command_net_write_t *)VAR_4;

  FUNC_2 (VAR_6->data != ((void*)0));
  struct connection *VAR_7 = (struct connection *)VAR_5;
  FUNC_2 (VAR_7->status == VAR_0);
  FUNC_2 (FUNC_6 (&(VAR_7)->Out, VAR_6->data, VAR_6->len) == VAR_6->len);
  FUNC_1 (VAR_7)->sql_flush_packet (VAR_7, VAR_6->len - 4);

  FUNC_3 (VAR_7);
  VAR_7->last_query_sent_time = VAR_2;
  VAR_7->status = VAR_1;
  FUNC_0(VAR_7)->response_state = VAR_3;


  FUNC_4 (VAR_6->data);
  VAR_6->data = ((void*)0);
  VAR_6->len = 0;
}
