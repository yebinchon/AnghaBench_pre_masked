
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_msg_tag {int sid; } ;
struct vio_driver_state {int dummy; } ;


 int FUNC_0 (struct vio_driver_state*,struct vio_msg_tag*,int) ;
 int FUNC_1 (struct vio_driver_state*) ;

__attribute__((used)) static int FUNC_2(struct vio_driver_state *VAR_0,
       struct vio_msg_tag *VAR_1, int VAR_2)
{
 VAR_1->sid = FUNC_1(VAR_0);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
