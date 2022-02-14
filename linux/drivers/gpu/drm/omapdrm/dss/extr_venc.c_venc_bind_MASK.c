
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct venc_device {int debugfs; struct dss_device* dss; } ;
struct dss_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 struct venc_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dss_device*,char*,int ,struct venc_device*) ;
 struct dss_device* FUNC_3 (struct device*) ;
 int VAR_1 ;
 int FUNC_4 (struct venc_device*,int ) ;
 int FUNC_5 (struct venc_device*) ;
 int FUNC_6 (struct venc_device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2, struct device *VAR_3, void *VAR_4)
{
 struct dss_device *VAR_5 = FUNC_3(VAR_3);
 struct venc_device *VAR_6 = FUNC_1(VAR_2);
 u8 VAR_7;
 int VAR_8;

 VAR_6->dss = VAR_5;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = (u8)(FUNC_4(VAR_6, VAR_0) & 0xff);
 FUNC_0(VAR_2, "OMAP VENC rev %d\n", VAR_7);

 FUNC_6(VAR_6);

 VAR_6->debugfs = FUNC_2(VAR_5, "venc", VAR_1,
      VAR_6);

 return 0;
}
