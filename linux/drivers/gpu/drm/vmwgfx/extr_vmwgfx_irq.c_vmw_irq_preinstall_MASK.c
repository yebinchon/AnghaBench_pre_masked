
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {scalar_t__ io_start; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct vmw_private* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_1)
{
 struct vmw_private *VAR_2 = FUNC_2(VAR_1);
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->io_start + VAR_0);
 FUNC_1(VAR_3, VAR_2->io_start + VAR_0);
}
