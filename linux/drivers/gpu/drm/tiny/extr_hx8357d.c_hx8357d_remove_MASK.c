
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 struct drm_device* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
