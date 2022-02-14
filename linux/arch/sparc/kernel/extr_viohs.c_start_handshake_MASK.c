
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {TYPE_1__* ver_table; int hs_state; } ;
struct TYPE_2__ {int minor; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vio_driver_state*,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct vio_driver_state *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, "START HANDSHAKE\n");

 VAR_2->hs_state = VAR_1;

 VAR_3 = FUNC_0(VAR_2,
      VAR_2->ver_table[0].major,
      VAR_2->ver_table[0].minor);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
