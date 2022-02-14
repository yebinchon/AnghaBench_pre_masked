
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_cmdline_mode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,struct drm_cmdline_mode*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct drm_cmdline_mode VAR_2 = { };

 FUNC_0(FUNC_1("1024x-24",
         &VAR_0,
         &VAR_2));

 return 0;
}
