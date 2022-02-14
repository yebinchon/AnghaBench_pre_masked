
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dfi {int clk; } ;
struct devfreq_event_dev {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct rockchip_dfi* FUNC_2 (struct devfreq_event_dev*) ;
 int FUNC_3 (struct devfreq_event_dev*) ;

__attribute__((used)) static int FUNC_4(struct devfreq_event_dev *VAR_0)
{
 struct rockchip_dfi *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2) {
  FUNC_1(&VAR_0->dev, "failed to enable dfi clk: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_3(VAR_0);
 return 0;
}
