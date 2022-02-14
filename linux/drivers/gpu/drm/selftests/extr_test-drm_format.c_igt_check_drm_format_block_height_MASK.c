
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_format_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct drm_format_info* FUNC_1 (int ) ;
 int FUNC_2 (struct drm_format_info const*,int) ;

int FUNC_3(void *VAR_4)
{
 const struct drm_format_info *VAR_5 = ((void*)0);


 FUNC_0(FUNC_2(VAR_5, 0) != 0);
 FUNC_0(FUNC_2(VAR_5, -1) != 0);
 FUNC_0(FUNC_2(VAR_5, 1) != 0);


 VAR_5 = FUNC_1(VAR_2);
 FUNC_0(!VAR_5);
 FUNC_0(FUNC_2(VAR_5, 0) != 1);
 FUNC_0(FUNC_2(VAR_5, 1) != 0);
 FUNC_0(FUNC_2(VAR_5, -1) != 0);


 VAR_5 = FUNC_1(VAR_0);
 FUNC_0(!VAR_5);
 FUNC_0(FUNC_2(VAR_5, 0) != 1);
 FUNC_0(FUNC_2(VAR_5, 1) != 1);
 FUNC_0(FUNC_2(VAR_5, 2) != 0);
 FUNC_0(FUNC_2(VAR_5, -1) != 0);


 VAR_5 = FUNC_1(VAR_3);
 FUNC_0(!VAR_5);
 FUNC_0(FUNC_2(VAR_5, 0) != 1);
 FUNC_0(FUNC_2(VAR_5, 1) != 1);
 FUNC_0(FUNC_2(VAR_5, 2) != 1);
 FUNC_0(FUNC_2(VAR_5, 3) != 0);
 FUNC_0(FUNC_2(VAR_5, -1) != 0);


 VAR_5 = FUNC_1(VAR_1);
 FUNC_0(!VAR_5);
 FUNC_0(FUNC_2(VAR_5, 0) != 2);
 FUNC_0(FUNC_2(VAR_5, 1) != 0);
 FUNC_0(FUNC_2(VAR_5, -1) != 0);

 return 0;
}
