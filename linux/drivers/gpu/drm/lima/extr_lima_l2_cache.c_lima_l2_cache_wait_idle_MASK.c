
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_ip {scalar_t__ iomem; struct lima_device* dev; } ;
struct lima_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lima_ip *VAR_2)
{
 struct lima_device *VAR_3 = VAR_2->dev;
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_2->iomem + VAR_0, VAR_5,
     !(VAR_5 & VAR_1),
     0, 1000);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "l2 cache wait command timeout\n");
  return VAR_4;
 }
 return 0;
}
