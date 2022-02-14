
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int next_fence_to_post; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int,int ,int,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_5, void *VAR_6, struct drm_file *VAR_7)
{
 drm_mga_private_t *VAR_8 = VAR_5->dev_private;
 u32 *VAR_9 = VAR_6;
 VAR_0;

 if (!VAR_8) {
  FUNC_4("called with no initialization\n");
  return -VAR_1;
 }

 FUNC_3("pid=%d\n", FUNC_5(VAR_4));





 *VAR_9 = VAR_8->next_fence_to_post;
 VAR_8->next_fence_to_post++;

 FUNC_1(1);
 FUNC_2(VAR_2, 0x00000000,
    VAR_2, 0x00000000,
    VAR_2, 0x00000000, VAR_3, 0x00000000);
 FUNC_0();

 return 0;
}
