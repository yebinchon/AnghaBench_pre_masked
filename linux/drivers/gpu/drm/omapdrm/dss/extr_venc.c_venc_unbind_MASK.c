
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int debugfs; } ;
struct device {int dummy; } ;


 struct venc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct venc_device *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3->debugfs);
}
