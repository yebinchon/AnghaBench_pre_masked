
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0);


 if ((VAR_3 & VAR_1) == 0)
  return -1;


 return (VAR_3 >> 29) & 0x3;
}
