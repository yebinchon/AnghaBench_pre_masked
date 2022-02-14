
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int async_reset; } ;
struct lima_ip {TYPE_1__ data; scalar_t__ iomem; struct lima_device* dev; } ;
struct lima_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct lima_ip *VAR_6)
{
 struct lima_device *VAR_7 = VAR_6->dev;
 int VAR_8;
 u32 VAR_9;

 if (!VAR_6->data.async_reset)
  return 0;

 VAR_8 = FUNC_2(VAR_6->iomem + VAR_2, VAR_9,
     VAR_9 & VAR_5,
     0, 100);
 if (VAR_8) {
  FUNC_0(VAR_7->dev, "gp soft reset time out\n");
  return VAR_8;
 }

 FUNC_1(VAR_0, VAR_3);
 FUNC_1(VAR_1, VAR_4);

 VAR_6->data.async_reset = 0;
 return 0;
}
