
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt_timer {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,struct rt_timer*) ;
 int VAR_3 ;
 int FUNC_3 (struct rt_timer*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rt_timer *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4->irq, VAR_3, 0,
      FUNC_1(VAR_4->dev), VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "failed to request irq\n");
 } else {
  u32 VAR_6 = VAR_1 | VAR_2;
  FUNC_3(VAR_4, VAR_0, VAR_6);
 }
 return VAR_5;
}
