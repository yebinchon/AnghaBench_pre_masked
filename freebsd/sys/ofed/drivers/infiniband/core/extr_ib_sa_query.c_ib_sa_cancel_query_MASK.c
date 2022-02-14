
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {struct ib_mad_send_buf* mad_buf; TYPE_1__* port; } ;
struct ib_mad_send_buf {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {struct ib_mad_agent* agent; } ;


 struct ib_sa_query* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(int VAR_2, struct ib_sa_query *VAR_3)
{
 unsigned long VAR_4;
 struct ib_mad_agent *VAR_5;
 struct ib_mad_send_buf *VAR_6;

 FUNC_1(&VAR_0, VAR_4);
 if (FUNC_0(&VAR_1, VAR_2) != VAR_3) {
  FUNC_2(&VAR_0, VAR_4);
  return;
 }
 VAR_5 = VAR_3->port->agent;
 VAR_6 = VAR_3->mad_buf;
 FUNC_2(&VAR_0, VAR_4);
}
