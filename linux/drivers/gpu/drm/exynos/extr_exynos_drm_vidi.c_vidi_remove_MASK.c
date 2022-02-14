
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {struct edid* raw_edid; } ;
struct platform_device {int dev; } ;
struct edid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct edid*) ;
 struct vidi_context* FUNC_2 (struct platform_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct vidi_context *VAR_4 = FUNC_2(VAR_3);

 if (VAR_4->raw_edid != (struct edid *)VAR_1) {
  FUNC_1(VAR_4->raw_edid);
  VAR_4->raw_edid = ((void*)0);

  return -VAR_0;
 }

 FUNC_0(&VAR_3->dev, &VAR_2);

 return 0;
}
