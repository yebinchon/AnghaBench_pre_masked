
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int irq_enabled; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int ,struct drm_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_4 ;

int FUNC_2(struct drm_device *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->irq_enabled)
  return -VAR_0;

 FUNC_1(VAR_5);

 VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4,
       VAR_1, VAR_2, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->irq_enabled = 1;
 VAR_5->irq = VAR_6;

 return VAR_7;
}
