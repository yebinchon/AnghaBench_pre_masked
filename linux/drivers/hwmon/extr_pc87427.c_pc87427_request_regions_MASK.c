
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; scalar_t__ start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned long,...) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4,
          int VAR_5)
{
 struct resource *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_7);
  if (!VAR_6) {
   FUNC_0(&VAR_4->dev, "Missing resource #%d\n", VAR_7);
   return -VAR_2;
  }
  if (!FUNC_1(&VAR_4->dev, VAR_6->start,
      FUNC_3(VAR_6), VAR_0)) {
   FUNC_0(&VAR_4->dev,
    "Failed to request region 0x%lx-0x%lx\n",
    (unsigned long)VAR_6->start,
    (unsigned long)VAR_6->end);
   return -VAR_1;
  }
 }
 return 0;
}
