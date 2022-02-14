
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hdmi {TYPE_1__* pdev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdmi*,int) ;
 int FUNC_1 (struct hdmi*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static enum drm_connector_status FUNC_4(struct hdmi *VAR_4)
{
 uint32_t VAR_5;

 FUNC_2(&VAR_4->pdev->dev);
 FUNC_0(VAR_4, 1);

 VAR_5 = FUNC_1(VAR_4, VAR_1);

 FUNC_0(VAR_4, 0);
 FUNC_3(&VAR_4->pdev->dev);

 return (VAR_5 & VAR_0) ?
   VAR_2 : VAR_3;
}
