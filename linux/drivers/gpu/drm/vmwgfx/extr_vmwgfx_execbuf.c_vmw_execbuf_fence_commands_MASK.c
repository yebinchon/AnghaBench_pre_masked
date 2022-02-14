
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_private {int fman; } ;
struct vmw_fence_obj {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vmw_private*,int,int,int ,int,int ) ;
 int FUNC_4 (int ,int ,struct vmw_fence_obj**) ;
 int FUNC_5 (struct vmw_private*,int *) ;
 int FUNC_6 (struct drm_file*,int ,int ,struct vmw_fence_obj**,int *) ;

int FUNC_7(struct drm_file *VAR_1,
          struct vmw_private *VAR_2,
          struct vmw_fence_obj **VAR_3,
          uint32_t *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6;
 bool VAR_7 = 0;


 FUNC_0(VAR_4 != ((void*)0) && VAR_1 == ((void*)0));

 VAR_6 = FUNC_5(VAR_2, &VAR_5);
 if (FUNC_2(VAR_6 != 0)) {
  FUNC_1("Fence submission error. Syncing.\n");
  VAR_7 = 1;
 }

 if (VAR_4 != ((void*)0))
  VAR_6 = FUNC_6(VAR_1, VAR_2->fman,
         VAR_5, VAR_3, VAR_4);
 else
  VAR_6 = FUNC_4(VAR_2->fman, VAR_5, VAR_3);

 if (FUNC_2(VAR_6 != 0 && !VAR_7)) {
  (void) FUNC_3(VAR_2, 0, 0, VAR_5,
      0, VAR_0);
  *VAR_3 = ((void*)0);
 }

 return VAR_6;
}
