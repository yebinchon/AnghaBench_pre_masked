
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cec {int hpd; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 struct mtk_cec* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mtk_cec*) ;
 int FUNC_3 (struct mtk_cec*,int) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct device *VAR_3 = VAR_2;
 struct mtk_cec *VAR_4 = FUNC_1(VAR_3);
 bool VAR_5;

 FUNC_2(VAR_4);
 VAR_5 = FUNC_4(VAR_3);

 if (VAR_4->hpd != VAR_5) {
  FUNC_0(VAR_3, "hotplug event! cur hpd = %d, hpd = %d\n",
   VAR_4->hpd, VAR_5);
  VAR_4->hpd = VAR_5;
  FUNC_3(VAR_4, VAR_5);
 }
 return VAR_0;
}
