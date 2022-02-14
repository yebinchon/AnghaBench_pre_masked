
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qxl_device {TYPE_1__* rom; } ;
struct drm_qxl_clientcap {int index; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* pdev; struct qxl_device* dev_private; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_3__ {int* client_capabilities; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct drm_device *VAR_1, void *VAR_2,
      struct drm_file *VAR_3)
{
 struct qxl_device *VAR_4 = VAR_1->dev_private;
 struct drm_qxl_clientcap *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 VAR_6 = VAR_5->index / 8;
 VAR_7 = VAR_5->index % 8;

 if (VAR_1->pdev->revision < 4)
  return -VAR_0;

 if (VAR_6 >= 58)
  return -VAR_0;

 if (VAR_4->rom->client_capabilities[VAR_6] & (1 << VAR_7))
  return 0;
 return -VAR_0;
}
