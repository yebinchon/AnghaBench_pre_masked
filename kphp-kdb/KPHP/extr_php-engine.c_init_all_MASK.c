
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct conn_query {int dummy; } ;
struct TYPE_4__ {struct conn_query* last_query; struct conn_query* first_query; } ;
struct TYPE_3__ {struct conn_query* last_query; struct conn_query* first_query; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (long) ;
 int FUNC_6 () ;
 int VAR_5 ;

void FUNC_7() {
  FUNC_5 ((long)FUNC_4());


  VAR_3.first_query = VAR_3.last_query = (struct conn_query *)&VAR_3;
  VAR_4 = 0;

  VAR_0.first_query = VAR_0.last_query = (struct conn_query *)&VAR_0;


  FUNC_6();
  FUNC_1();

  FUNC_0();
  VAR_1 = VAR_2;

  FUNC_2();

  VAR_5 = (int)FUNC_3();
}
