
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_rdx {int dummy; } ;
struct vio_driver_state {int hs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vio_driver_state*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct vio_driver_state *VAR_3, struct vio_rdx *VAR_4)
{
 FUNC_1(VAR_0, "GOT RDX ACK\n");

 if (!(VAR_3->hs_state & VAR_2))
  return FUNC_0(VAR_3);

 VAR_3->hs_state |= VAR_1;
 return 0;
}
