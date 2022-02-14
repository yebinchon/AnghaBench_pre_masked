
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_device_modify {int node_desc; } ;
struct ib_device {int node_desc; } ;
struct TYPE_2__ {int sm_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_3, int VAR_4,
      struct ib_device_modify *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4 & ~VAR_1)
  return -VAR_0;

 if (VAR_4 & VAR_1) {
  FUNC_1(&FUNC_3(VAR_3)->sm_lock, VAR_6);
  FUNC_0(VAR_3->node_desc, VAR_5->node_desc, VAR_2);
  FUNC_2(&FUNC_3(VAR_3)->sm_lock, VAR_6);
 }

 return 0;
}
