
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_ip {scalar_t__ iomem; struct lima_device* dev; } ;
struct lima_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct lima_ip *VAR_3)
{
 struct lima_device *VAR_4 = VAR_3->dev;
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_3->iomem + VAR_2,
     VAR_6, VAR_6 & VAR_1,
     100, 100000);
 if (VAR_5) {
  FUNC_0(VAR_4->dev, "timeout wait pmd cmd\n");
  return VAR_5;
 }

 FUNC_1(VAR_0, VAR_1);
 return 0;
}
