
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_zip_ctrl {int num_vfs; } ;
struct hisi_qm {int dummy; } ;
struct hisi_zip {struct hisi_qm qm; struct hisi_zip_ctrl* ctrl; } ;


 int FUNC_0 (struct hisi_qm*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hisi_zip *VAR_0)
{
 struct hisi_zip_ctrl *VAR_1 = VAR_0->ctrl;
 struct hisi_qm *VAR_2 = &VAR_0->qm;
 u32 VAR_3, VAR_4 = VAR_1->num_vfs;
 int VAR_5;

 for (VAR_3 = 1; VAR_3 <= VAR_4; VAR_3++) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, 0, 0);
  if (VAR_5)
   return VAR_5;
 }

 VAR_1->num_vfs = 0;

 return 0;
}
