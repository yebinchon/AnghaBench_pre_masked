
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cec {void (* hpd_event ) (int,struct device*) ;int lock; struct device* hdmi_dev; } ;
struct device {int dummy; } ;


 struct mtk_cec* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct device *VAR_0,
      void (*VAR_1)(bool VAR_2, struct device *VAR_3),
      struct device *VAR_4)
{
 struct mtk_cec *VAR_5 = FUNC_0(VAR_0);
 unsigned long VAR_6;

 FUNC_1(&VAR_5->lock, VAR_6);
 VAR_5->hdmi_dev = VAR_4;
 VAR_5->hpd_event = VAR_1;
 FUNC_2(&VAR_5->lock, VAR_6);
}
