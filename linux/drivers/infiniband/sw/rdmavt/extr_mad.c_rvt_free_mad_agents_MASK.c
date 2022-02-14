
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rvt_ibport {TYPE_1__* sm_ah; struct ib_mad_agent* send_agent; } ;
struct TYPE_5__ {int (* notify_free_mad_agent ) (struct rvt_dev_info*,int) ;} ;
struct TYPE_6__ {int nports; } ;
struct rvt_dev_info {TYPE_2__ driver_f; struct rvt_ibport** ports; TYPE_3__ dparms; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_4__ {int ibah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct rvt_dev_info*,int) ;

void FUNC_3(struct rvt_dev_info *VAR_1)
{
 struct ib_mad_agent *VAR_2;
 struct rvt_ibport *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->dparms.nports; VAR_4++) {
  VAR_3 = VAR_1->ports[VAR_4];
  if (VAR_3->send_agent) {
   VAR_2 = VAR_3->send_agent;
   VAR_3->send_agent = ((void*)0);
   FUNC_0(VAR_2);
  }
  if (VAR_3->sm_ah) {
   FUNC_1(&VAR_3->sm_ah->ibah,
     VAR_0);
   VAR_3->sm_ah = ((void*)0);
  }

  if (VAR_1->driver_f.notify_free_mad_agent)
   VAR_1->driver_f.notify_free_mad_agent(VAR_1, VAR_4);
 }
}
