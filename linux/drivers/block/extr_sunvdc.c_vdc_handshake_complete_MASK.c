
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dummy; } ;
struct vdc_port {int ldc_reset_timer_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vdc_port* FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (struct vdc_port*) ;
 int FUNC_3 (struct vio_driver_state*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vio_driver_state *VAR_1)
{
 struct vdc_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->ldc_reset_timer_work);
 FUNC_3(VAR_1, 0, VAR_0);
 FUNC_2(VAR_2);
}
