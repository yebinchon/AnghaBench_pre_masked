
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stype; } ;
struct vio_rdx {TYPE_1__ tag; } ;
struct vio_driver_state {int hs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vio_driver_state*) ;
 scalar_t__ FUNC_1 (struct vio_driver_state*,TYPE_1__*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct vio_driver_state *VAR_3, struct vio_rdx *VAR_4)
{
 FUNC_2(VAR_0, "GOT RDX INFO\n");

 VAR_4->tag.stype = VAR_2;
 FUNC_2(VAR_0, "SEND RDX ACK\n");
 if (FUNC_1(VAR_3, &VAR_4->tag, sizeof(*VAR_4)) < 0)
  return FUNC_0(VAR_3);

 VAR_3->hs_state |= VAR_1;
 return 0;
}
