
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {scalar_t__ tv_dac_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct venc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct venc_device *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->tv_dac_clk)
  FUNC_0(VAR_1->tv_dac_clk);

 return 0;
}
