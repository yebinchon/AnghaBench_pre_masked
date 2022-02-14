
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char const*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,char const*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_4,
         const char *VAR_5)
{
 struct resource *VAR_6;

 if (FUNC_0(VAR_0) && VAR_4->dev.of_node) {
  int VAR_7;

  VAR_7 = FUNC_1(VAR_4->dev.of_node, VAR_5);
  if (VAR_7 > 0 || VAR_7 == -VAR_2)
   return VAR_7;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6->start;

 return -VAR_1;
}
