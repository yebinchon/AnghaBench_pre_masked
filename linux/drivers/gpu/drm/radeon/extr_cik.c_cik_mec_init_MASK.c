
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_mec; int num_pipe; int num_queue; int * hpd_eop_obj; int hpd_eop_gpu_addr; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ mec; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct radeon_device*,int,int ,int,int ,int ,int *,int *,int **) ;
 int FUNC_4 (int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_4)
{
 int VAR_5;
 u32 *VAR_6;





 if (VAR_4->family == VAR_0)
  VAR_4->mec.num_mec = 2;
 else
  VAR_4->mec.num_mec = 1;
 VAR_4->mec.num_pipe = 4;
 VAR_4->mec.num_queue = VAR_4->mec.num_mec * VAR_4->mec.num_pipe * 8;

 if (VAR_4->mec.hpd_eop_obj == ((void*)0)) {
  VAR_5 = FUNC_3(VAR_4,
         VAR_4->mec.num_mec *VAR_4->mec.num_pipe * VAR_1 * 2,
         VAR_2, 1,
         VAR_3, 0, ((void*)0), ((void*)0),
         &VAR_4->mec.hpd_eop_obj);
  if (VAR_5) {
   FUNC_1(VAR_4->dev, "(%d) create HDP EOP bo failed\n", VAR_5);
   return VAR_5;
  }
 }

 VAR_5 = FUNC_7(VAR_4->mec.hpd_eop_obj, 0);
 if (FUNC_9(VAR_5 != 0)) {
  FUNC_0(VAR_4);
  return VAR_5;
 }
 VAR_5 = FUNC_6(VAR_4->mec.hpd_eop_obj, VAR_3,
     &VAR_4->mec.hpd_eop_gpu_addr);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "(%d) pin HDP EOP bo failed\n", VAR_5);
  FUNC_0(VAR_4);
  return VAR_5;
 }
 VAR_5 = FUNC_4(VAR_4->mec.hpd_eop_obj, (void **)&VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_4->dev, "(%d) map HDP EOP bo failed\n", VAR_5);
  FUNC_0(VAR_4);
  return VAR_5;
 }


 FUNC_2(VAR_6, 0, VAR_4->mec.num_mec *VAR_4->mec.num_pipe * VAR_1 * 2);

 FUNC_5(VAR_4->mec.hpd_eop_obj);
 FUNC_8(VAR_4->mec.hpd_eop_obj);

 return 0;
}
