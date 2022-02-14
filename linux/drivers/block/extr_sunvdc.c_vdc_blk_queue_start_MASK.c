
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vio_dring_state {int dummy; } ;
struct TYPE_3__ {struct vio_dring_state* drings; } ;
struct vdc_port {TYPE_2__* disk; TYPE_1__ vio; } ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct vio_dring_state*) ;

__attribute__((used)) static void FUNC_2(struct vdc_port *VAR_2)
{
 struct vio_dring_state *VAR_3 = &VAR_2->vio.drings[VAR_1];





 if (VAR_2->disk && FUNC_1(VAR_3) * 100 / VAR_0 >= 50)
  FUNC_0(VAR_2->disk->queue, 1);
}
