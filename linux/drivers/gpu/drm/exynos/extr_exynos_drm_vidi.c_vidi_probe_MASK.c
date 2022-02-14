
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {int lock; int timer; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;
 struct vidi_context* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct vidi_context*) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct vidi_context *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = VAR_7;

 FUNC_7(&VAR_6->timer, VAR_4, 0);

 FUNC_5(&VAR_6->lock);

 FUNC_6(VAR_5, VAR_6);

 VAR_8 = FUNC_2(VAR_7, &VAR_2);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7,
         "failed to create connection sysfs.\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7, &VAR_3);
 if (VAR_8)
  goto err_remove_file;

 return VAR_8;

err_remove_file:
 FUNC_3(VAR_7, &VAR_2);

 return VAR_8;
}
