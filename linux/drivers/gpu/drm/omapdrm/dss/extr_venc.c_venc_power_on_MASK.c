
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venc_device {scalar_t__ type; int invert_polarity; int dss; int vdda_dac_reg; int output; int config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct venc_device*) ;
 int FUNC_6 (struct venc_device*) ;
 int FUNC_7 (struct venc_device*) ;
 int FUNC_8 (struct venc_device*,int ) ;
 int FUNC_9 (struct venc_device*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct venc_device *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto err0;

 FUNC_5(VAR_2);
 FUNC_8(VAR_2, VAR_2->config);

 FUNC_2(VAR_2->dss, VAR_2->type);
 FUNC_1(VAR_2->dss, 1);

 VAR_3 = 0;

 if (VAR_2->type == VAR_0)
  VAR_3 |= 1 << 1;
 else
  VAR_3 |= (1 << 0) | (1 << 2);

 if (VAR_2->invert_polarity == 0)
  VAR_3 |= 1 << 3;

 FUNC_9(VAR_2, VAR_1, VAR_3);

 VAR_4 = FUNC_4(VAR_2->vdda_dac_reg);
 if (VAR_4)
  goto err1;

 VAR_4 = FUNC_0(&VAR_2->output);
 if (VAR_4)
  goto err2;

 return 0;

err2:
 FUNC_3(VAR_2->vdda_dac_reg);
err1:
 FUNC_9(VAR_2, VAR_1, 0);
 FUNC_1(VAR_2->dss, 0);

 FUNC_7(VAR_2);
err0:
 return VAR_4;
}
