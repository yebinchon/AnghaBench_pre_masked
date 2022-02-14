
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int num_ports; scalar_t__* sm_ah; struct ib_mad_agent*** send_agent; } ;
struct ib_mad_agent {int dummy; } ;


 int FUNC_0 (struct ib_mad_agent*) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct mlx4_ib_dev *VAR_0)
{
 struct ib_mad_agent *VAR_1;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ports; ++VAR_2) {
  for (VAR_3 = 0; VAR_3 <= 1; ++VAR_3) {
   VAR_1 = VAR_0->send_agent[VAR_2][VAR_3];
   if (VAR_1) {
    VAR_0->send_agent[VAR_2][VAR_3] = ((void*)0);
    FUNC_0(VAR_1);
   }
  }

  if (VAR_0->sm_ah[VAR_2])
   FUNC_1(VAR_0->sm_ah[VAR_2], 0);
 }
}
