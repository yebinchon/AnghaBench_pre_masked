
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {TYPE_1__ base; } ;
struct TYPE_6__ {struct ttm_buffer_object base; } ;
struct TYPE_5__ {int base; } ;
struct vmw_user_buffer_object {TYPE_3__ vbo; TYPE_2__ prime; } ;
struct ttm_object_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ttm_buffer_object*,int) ;
 int FUNC_2 (struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_object_file*,int *,int ,int*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vmw_user_buffer_object *VAR_5,
        struct ttm_object_file *VAR_6,
        uint32_t VAR_7)
{
 struct ttm_buffer_object *VAR_8 = &VAR_5->vbo.base;
 bool VAR_9;
 int VAR_10;

 if (VAR_7 & VAR_3) {
  bool VAR_11 = !!(VAR_7 & VAR_4);
  long VAR_12;

  VAR_12 = FUNC_0
   (VAR_8->base.resv, 1, 1,
    VAR_11 ? 0 : VAR_1);
  if (!VAR_12)
   return -VAR_0;
  else if (VAR_12 < 0)
   return VAR_12;
  return 0;
 }

 VAR_10 = FUNC_1
  (VAR_8, !!(VAR_7 & VAR_4));
 if (FUNC_4(VAR_10 != 0))
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6, &VAR_5->prime.base,
     VAR_2, &VAR_9, 0);
 if (VAR_10 != 0 || VAR_9)
  FUNC_2(&VAR_5->vbo.base);

 return VAR_10;
}
