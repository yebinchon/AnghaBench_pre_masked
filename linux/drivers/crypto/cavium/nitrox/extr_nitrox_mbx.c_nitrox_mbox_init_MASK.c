
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nitrox_vfdev {int vfno; } ;
struct TYPE_2__ {int num_vfs; struct nitrox_vfdev* vfdev; int pf2vf_wq; } ;
struct nitrox_device {TYPE_1__ iov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct nitrox_device*) ;
 struct nitrox_vfdev* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct nitrox_vfdev*) ;

int FUNC_4(struct nitrox_device *VAR_2)
{
 struct nitrox_vfdev *VAR_3;
 int VAR_4;

 VAR_2->iov.vfdev = FUNC_2(VAR_2->iov.num_vfs,
      sizeof(struct nitrox_vfdev), VAR_1);
 if (!VAR_2->iov.vfdev)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->iov.num_vfs; VAR_4++) {
  VAR_3 = VAR_2->iov.vfdev + VAR_4;
  VAR_3->vfno = VAR_4;
 }


 VAR_2->iov.pf2vf_wq = FUNC_0("nitrox_pf2vf", 0, 0);
 if (!VAR_2->iov.pf2vf_wq) {
  FUNC_3(VAR_2->iov.vfdev);
  return -VAR_0;
 }

 FUNC_1(VAR_2);

 return 0;
}
