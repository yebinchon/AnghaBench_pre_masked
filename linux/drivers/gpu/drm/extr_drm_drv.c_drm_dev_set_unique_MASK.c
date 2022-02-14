
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ unique; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

int FUNC_2(struct drm_device *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_2->unique);
 VAR_2->unique = FUNC_1(VAR_3, VAR_1);

 return VAR_2->unique ? 0 : -VAR_0;
}
