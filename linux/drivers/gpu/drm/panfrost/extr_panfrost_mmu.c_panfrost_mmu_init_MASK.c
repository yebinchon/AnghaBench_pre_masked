
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int ,int ,int ,char*,struct panfrost_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct panfrost_device *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(FUNC_3(VAR_4->dev), "mmu");
 if (VAR_6 <= 0)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->dev, VAR_6, VAR_2,
     VAR_3,
     VAR_1, "mmu", VAR_4);

 if (VAR_5) {
  FUNC_0(VAR_4->dev, "failed to request mmu irq");
  return VAR_5;
 }

 return 0;
}
