
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dfi {int clk; } ;
struct devfreq_event_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rockchip_dfi* FUNC_1 (struct devfreq_event_dev*) ;
 int FUNC_2 (struct devfreq_event_dev*) ;

__attribute__((used)) static int FUNC_3(struct devfreq_event_dev *VAR_0)
{
 struct rockchip_dfi *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(VAR_1->clk);

 return 0;
}
