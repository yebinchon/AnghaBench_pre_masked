
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int size_list_size; struct list_head* size_list; } ;
struct vc4_dev {TYPE_1__ bo_cache; } ;
struct list_head {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct list_head*) ;
 struct list_head* FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (struct list_head*) ;
 int FUNC_5 (struct list_head*,struct list_head*) ;
 int FUNC_6 (int,int) ;
 struct vc4_dev* FUNC_7 (struct drm_device*) ;

__attribute__((used)) static struct list_head *FUNC_8(struct drm_device *VAR_1,
           size_t VAR_2)
{
 struct vc4_dev *VAR_3 = FUNC_7(VAR_1);
 uint32_t VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->bo_cache.size_list_size <= VAR_4) {
  uint32_t VAR_5 = FUNC_6(VAR_3->bo_cache.size_list_size * 2,
     VAR_4 + 1);
  struct list_head *VAR_6;
  uint32_t VAR_7;

  VAR_6 = FUNC_3(VAR_5, sizeof(struct list_head),
      VAR_0);
  if (!VAR_6)
   return ((void*)0);




  for (VAR_7 = 0; VAR_7 < VAR_3->bo_cache.size_list_size; VAR_7++) {
   struct list_head *VAR_8 =
    &VAR_3->bo_cache.size_list[VAR_7];

   if (FUNC_4(VAR_8))
    FUNC_0(&VAR_6[VAR_7]);
   else
    FUNC_5(VAR_8, &VAR_6[VAR_7]);
  }

  for (VAR_7 = VAR_3->bo_cache.size_list_size; VAR_7 < VAR_5; VAR_7++)
   FUNC_0(&VAR_6[VAR_7]);

  FUNC_2(VAR_3->bo_cache.size_list);
  VAR_3->bo_cache.size_list = VAR_6;
  VAR_3->bo_cache.size_list_size = VAR_5;
 }

 return &VAR_3->bo_cache.size_list[VAR_4];
}
