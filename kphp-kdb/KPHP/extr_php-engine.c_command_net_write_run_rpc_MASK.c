
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int last_query_sent_time; } ;
typedef int command_t ;
struct TYPE_2__ {scalar_t__ len; int * data; int extra; } ;
typedef TYPE_1__ command_net_write_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct connection*,int ,int ,int*,scalar_t__) ;

void FUNC_4 (command_t *VAR_2, void *VAR_3) {
  command_net_write_t *VAR_4 = (command_net_write_t *)VAR_2;


  FUNC_0 (VAR_4->data != ((void*)0));
  struct connection *VAR_5 = (struct connection *)VAR_3;


  FUNC_3 (VAR_5, VAR_0, VAR_4->extra, (int *)VAR_4->data, VAR_4->len);

  FUNC_1 (VAR_5);
  VAR_5->last_query_sent_time = VAR_1;

  FUNC_2 (VAR_4->data);
  VAR_4->data = ((void*)0);
  VAR_4->len = 0;
}
