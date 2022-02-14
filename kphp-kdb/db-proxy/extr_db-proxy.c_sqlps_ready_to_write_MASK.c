
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int fd; struct conn_query* first_query; } ;
struct conn_query {TYPE_1__* cq_type; } ;
struct TYPE_2__ {int (* wakeup ) (struct conn_query*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct conn_query*) ;
 int VAR_2 ;

int FUNC_3 (struct connection *VAR_3) {
  struct conn_query *VAR_4 = VAR_3->first_query;

  if (VAR_2 > 1) {
    FUNC_1 (VAR_1, "mysql server connection %d is ready to write\n", VAR_3->fd);
  }

  if (VAR_4 != (struct conn_query *) VAR_3) {
    FUNC_0 (VAR_4->cq_type == &VAR_0);
    VAR_4->cq_type->wakeup (VAR_4);
  }

  return 0;
}
