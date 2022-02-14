
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; } ;
struct mthca_dev {struct ib_mad_agent*** send_agent; TYPE_1__ limits; int ib_dev; int sm_lock; } ;
struct ib_mad_agent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (struct ib_mad_agent*) ;
 struct ib_mad_agent* FUNC_2 (int *,int,int ,int *,int ,int ,int *,int *,int ) ;
 int FUNC_3 (struct ib_mad_agent*) ;
 int FUNC_4 (struct mthca_dev*,char*,int) ;
 int FUNC_5 (struct mthca_dev*,int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mthca_dev *VAR_3)
{
 struct ib_mad_agent *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 FUNC_6(&VAR_3->sm_lock);

 for (VAR_5 = 0; VAR_5 < VAR_3->limits.num_ports; ++VAR_5)
  for (VAR_6 = 0; VAR_6 <= 1; ++VAR_6) {
   VAR_4 = FUNC_2(&VAR_3->ib_dev, VAR_5 + 1,
            VAR_6 ? VAR_0 : VAR_1,
            ((void*)0), 0, VAR_2,
            ((void*)0), ((void*)0), 0);
   if (FUNC_0(VAR_4)) {
    VAR_7 = FUNC_1(VAR_4);
    goto err;
   }
   VAR_3->send_agent[VAR_5][VAR_6] = VAR_4;
  }


 for (VAR_5 = 1; VAR_5 <= VAR_3->limits.num_ports; ++VAR_5) {
  VAR_7 = FUNC_5(VAR_3, VAR_5);
  if (VAR_7) {
   FUNC_4(VAR_3, "Failed to obtain port %d rate."
      " aborting.\n", VAR_5);
   goto err;
  }
 }

 return 0;

err:
 for (VAR_5 = 0; VAR_5 < VAR_3->limits.num_ports; ++VAR_5)
  for (VAR_6 = 0; VAR_6 <= 1; ++VAR_6)
   if (VAR_3->send_agent[VAR_5][VAR_6])
    FUNC_3(VAR_3->send_agent[VAR_5][VAR_6]);

 return VAR_7;
}
