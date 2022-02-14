
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct drm_format_name_buf {int dummy; } ;
typedef int name ;


 char* FUNC_0 (int ,struct drm_format_name_buf*) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;

__attribute__((used)) static inline const char *FUNC_2(u32 VAR_0, u64 VAR_1)
{
 struct drm_format_name_buf VAR_2;
 static char VAR_3[64];

 FUNC_1(VAR_3, sizeof(VAR_3), "%s with modifier: 0x%llx.",
   FUNC_0(VAR_0, &VAR_2), VAR_1);

 return VAR_3;
}
