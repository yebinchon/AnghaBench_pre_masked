
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; } ;
struct mthca_dev {scalar_t__* sm_ah; struct ib_mad_agent*** send_agent; TYPE_1__ limits; } ;
struct ib_mad_agent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct mthca_dev *VAR_1)
{
 struct ib_mad_agent *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->limits.num_ports; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 <= 1; ++VAR_4) {
   VAR_2 = VAR_1->send_agent[VAR_3][VAR_4];
   VAR_1->send_agent[VAR_3][VAR_4] = ((void*)0);
   FUNC_0(VAR_2);
  }

  if (VAR_1->sm_ah[VAR_3])
   FUNC_1(VAR_1->sm_ah[VAR_3],
     VAR_0);
 }
}
