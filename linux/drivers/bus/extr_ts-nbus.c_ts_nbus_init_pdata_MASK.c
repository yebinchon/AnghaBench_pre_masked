
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_nbus {void* rdy; void* ale; void* strobe; void* txrx; void* csn; void* data; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*,int ) ;
 void* FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2, struct ts_nbus
  *VAR_3)
{
 VAR_3->data = FUNC_4(&VAR_2->dev, "ts,data",
   VAR_1);
 if (FUNC_0(VAR_3->data)) {
  FUNC_2(&VAR_2->dev, "failed to retrieve ts,data-gpio from dts\n");
  return FUNC_1(VAR_3->data);
 }

 VAR_3->csn = FUNC_3(&VAR_2->dev, "ts,csn", VAR_1);
 if (FUNC_0(VAR_3->csn)) {
  FUNC_2(&VAR_2->dev, "failed to retrieve ts,csn-gpio from dts\n");
  return FUNC_1(VAR_3->csn);
 }

 VAR_3->txrx = FUNC_3(&VAR_2->dev, "ts,txrx", VAR_1);
 if (FUNC_0(VAR_3->txrx)) {
  FUNC_2(&VAR_2->dev, "failed to retrieve ts,txrx-gpio from dts\n");
  return FUNC_1(VAR_3->txrx);
 }

 VAR_3->strobe = FUNC_3(&VAR_2->dev, "ts,strobe", VAR_1);
 if (FUNC_0(VAR_3->strobe)) {
  FUNC_2(&VAR_2->dev, "failed to retrieve ts,strobe-gpio from dts\n");
  return FUNC_1(VAR_3->strobe);
 }

 VAR_3->ale = FUNC_3(&VAR_2->dev, "ts,ale", VAR_1);
 if (FUNC_0(VAR_3->ale)) {
  FUNC_2(&VAR_2->dev, "failed to retrieve ts,ale-gpio from dts\n");
  return FUNC_1(VAR_3->ale);
 }

 VAR_3->rdy = FUNC_3(&VAR_2->dev, "ts,rdy", VAR_0);
 if (FUNC_0(VAR_3->rdy)) {
  FUNC_2(&VAR_2->dev, "failed to retrieve ts,rdy-gpio from dts\n");
  return FUNC_1(VAR_3->rdy);
 }

 return 0;
}
