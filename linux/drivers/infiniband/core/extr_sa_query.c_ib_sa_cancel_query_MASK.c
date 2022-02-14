
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {struct ib_mad_send_buf* mad_buf; TYPE_1__* port; } ;
struct ib_mad_send_buf {int dummy; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {struct ib_mad_agent* agent; } ;


 int FUNC_0 (struct ib_mad_agent*,struct ib_mad_send_buf*) ;
 int FUNC_1 (struct ib_sa_query*) ;
 int VAR_0 ;
 struct ib_sa_query* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(int VAR_1, struct ib_sa_query *VAR_2)
{
 unsigned long VAR_3;
 struct ib_mad_agent *VAR_4;
 struct ib_mad_send_buf *VAR_5;

 FUNC_3(&VAR_0, VAR_3);
 if (FUNC_2(&VAR_0, VAR_1) != VAR_2) {
  FUNC_4(&VAR_0, VAR_3);
  return;
 }
 VAR_4 = VAR_2->port->agent;
 VAR_5 = VAR_2->mad_buf;
 FUNC_4(&VAR_0, VAR_3);






 if (!FUNC_1(VAR_2))
  FUNC_0(VAR_4, VAR_5);
}
