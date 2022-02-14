
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vmw_private {int active_display_unit; int capabilities; } ;
struct TYPE_10__ {int dev; } ;
struct vmw_framebuffer {scalar_t__ bo; TYPE_4__ base; } ;
struct vmw_buffer_object {int dummy; } ;
struct ttm_placement {int dummy; } ;
struct TYPE_11__ {struct vmw_buffer_object* buffer; } ;
struct TYPE_9__ {TYPE_2__* surface; } ;
struct TYPE_7__ {struct vmw_buffer_object* backup; } ;
struct TYPE_8__ {TYPE_1__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmw_private*,struct vmw_buffer_object*,struct ttm_placement*,int) ;
 int FUNC_1 (struct vmw_private*,struct vmw_buffer_object*,int) ;



 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 struct ttm_placement VAR_2 ;
 int FUNC_4 (struct vmw_private*) ;
 int FUNC_5 (struct vmw_private*) ;
 struct vmw_private* FUNC_6 (int ) ;
 struct ttm_placement VAR_3 ;
 struct ttm_placement VAR_4 ;

__attribute__((used)) static int FUNC_7(struct vmw_framebuffer *VAR_5)
{
 struct vmw_private *VAR_6 = FUNC_6(VAR_5->base.dev);
 struct vmw_buffer_object *VAR_7;
 struct ttm_placement *VAR_8;
 int VAR_9;

 VAR_7 = VAR_5->bo ? FUNC_2(&VAR_5->base)->buffer :
  FUNC_3(&VAR_5->base)->surface->res.backup;

 if (!VAR_7)
  return 0;

 switch (VAR_6->active_display_unit) {
 case 130:
  FUNC_4(VAR_6);
  VAR_9 = FUNC_1(VAR_6, VAR_7, 0);
  FUNC_5(VAR_6);
  break;
 case 129:
 case 128:
  if (VAR_5->bo) {
   if (VAR_6->capabilities & VAR_1) {




    VAR_8 = &VAR_4;
   } else {

    VAR_8 = &VAR_3;
   }
  } else {

   VAR_8 = &VAR_2;
  }

  return FUNC_0(VAR_6, VAR_7, VAR_8, 0);
 default:
  return -VAR_0;
 }

 return VAR_9;
}
