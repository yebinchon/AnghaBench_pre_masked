
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_device {TYPE_1__* rom; } ;
struct drm_qxl_getparam {int param; int value; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct TYPE_2__ {int n_surfaces; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(struct drm_device *VAR_2, void *VAR_3,
         struct drm_file *VAR_4)
{
 struct qxl_device *VAR_5 = VAR_2->dev_private;
 struct drm_qxl_getparam *VAR_6 = VAR_3;

 switch (VAR_6->param) {
 case 128:
  VAR_6->value = VAR_5->rom->n_surfaces;
  break;
 case 129:
  VAR_6->value = VAR_1;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
