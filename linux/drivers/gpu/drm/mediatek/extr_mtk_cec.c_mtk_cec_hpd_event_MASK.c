
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cec {void (* hpd_event ) (int,struct device*) ;struct device* hdmi_dev; int lock; } ;
typedef struct device device ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct mtk_cec *VAR_0, bool VAR_1)
{
 void (*VAR_2)(bool VAR_3, struct device *VAR_4);
 struct device *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_0->lock, VAR_6);
 VAR_2 = VAR_0->hpd_event;
 VAR_5 = VAR_0->hdmi_dev;
 FUNC_1(&VAR_0->lock, VAR_6);

 if (VAR_2)
  VAR_2(VAR_1, VAR_5);
}
