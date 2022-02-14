
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int vdda_dac_reg; int output; int dss; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct venc_device*) ;
 int FUNC_4 (struct venc_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct venc_device *VAR_1)
{
 FUNC_4(VAR_1, VAR_0, 0);
 FUNC_1(VAR_1->dss, 0);

 FUNC_0(&VAR_1->output);

 FUNC_2(VAR_1->vdda_dac_reg);

 FUNC_3(VAR_1);
}
