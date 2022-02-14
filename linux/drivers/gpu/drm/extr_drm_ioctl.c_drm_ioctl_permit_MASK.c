
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_file {int authenticated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_file*) ;
 scalar_t__ FUNC_2 (struct drm_file*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(u32 VAR_6, struct drm_file *VAR_7)
{

 if (FUNC_3((VAR_6 & VAR_4) && !FUNC_0(VAR_0)))
  return -VAR_5;


 if (FUNC_3((VAR_6 & VAR_1) && !FUNC_2(VAR_7) &&
       !VAR_7->authenticated))
  return -VAR_5;


 if (FUNC_3((VAR_6 & VAR_2) &&
       !FUNC_1(VAR_7)))
  return -VAR_5;


 if (FUNC_3(!(VAR_6 & VAR_3) &&
       FUNC_2(VAR_7)))
  return -VAR_5;

 return 0;
}
