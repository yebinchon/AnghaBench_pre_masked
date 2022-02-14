
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdev; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ,unsigned long*,int) ;

__attribute__((used)) static void FUNC_4(struct intel_vgpu *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3, VAR_0) / VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  unsigned long VAR_7 = VAR_2 + VAR_5;

  VAR_6 = FUNC_3(FUNC_1(VAR_1->vdev.mdev), &VAR_7, 1);
  FUNC_0(VAR_6 != 1);
 }
}
