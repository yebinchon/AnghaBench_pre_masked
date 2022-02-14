
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_ibport {struct ib_mad_agent* send_agent; } ;
struct TYPE_4__ {int (* notify_free_mad_agent ) (struct rvt_dev_info*,int) ;int (* notify_create_mad_agent ) (struct rvt_dev_info*,int) ;} ;
struct TYPE_3__ {int nports; } ;
struct rvt_dev_info {TYPE_2__ driver_f; struct rvt_ibport** ports; TYPE_1__ dparms; int ibdev; } ;
struct ib_mad_agent {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (struct ib_mad_agent*) ;
 struct ib_mad_agent* FUNC_2 (int *,int,int ,int *,int ,int ,int *,int *,int ) ;
 int FUNC_3 (struct ib_mad_agent*) ;
 int VAR_1 ;
 int FUNC_4 (struct rvt_dev_info*,int) ;
 int FUNC_5 (struct rvt_dev_info*,int) ;

int FUNC_6(struct rvt_dev_info *VAR_2)
{
 struct ib_mad_agent *VAR_3;
 struct rvt_ibport *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->dparms.nports; VAR_5++) {
  VAR_4 = VAR_2->ports[VAR_5];
  VAR_3 = FUNC_2(&VAR_2->ibdev, VAR_5 + 1,
           VAR_0,
           ((void*)0), 0, VAR_1,
           ((void*)0), ((void*)0), 0);
  if (FUNC_0(VAR_3)) {
   VAR_6 = FUNC_1(VAR_3);
   goto err;
  }

  VAR_4->send_agent = VAR_3;

  if (VAR_2->driver_f.notify_create_mad_agent)
   VAR_2->driver_f.notify_create_mad_agent(VAR_2, VAR_5);
 }

 return 0;

err:
 for (VAR_5 = 0; VAR_5 < VAR_2->dparms.nports; VAR_5++) {
  VAR_4 = VAR_2->ports[VAR_5];
  if (VAR_4->send_agent) {
   VAR_3 = VAR_4->send_agent;
   VAR_4->send_agent = ((void*)0);
   FUNC_3(VAR_3);
   if (VAR_2->driver_f.notify_free_mad_agent)
    VAR_2->driver_f.notify_free_mad_agent(VAR_2, VAR_5);
  }
 }

 return VAR_6;
}
