
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct TYPE_10__ {int dev; } ;
struct vmw_framebuffer {TYPE_4__ base; scalar_t__ bo; } ;
struct vmw_buffer_object {int dummy; } ;
struct TYPE_11__ {struct vmw_buffer_object* buffer; } ;
struct TYPE_9__ {TYPE_2__* surface; } ;
struct TYPE_7__ {struct vmw_buffer_object* backup; } ;
struct TYPE_8__ {TYPE_1__ res; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vmw_private*,struct vmw_buffer_object*,int) ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 struct vmw_private* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct vmw_framebuffer *VAR_0)
{
 struct vmw_private *VAR_1 = FUNC_4(VAR_0->base.dev);
 struct vmw_buffer_object *VAR_2;

 VAR_2 = VAR_0->bo ? FUNC_2(&VAR_0->base)->buffer :
  FUNC_3(&VAR_0->base)->surface->res.backup;

 if (FUNC_0(!VAR_2))
  return 0;

 return FUNC_1(VAR_1, VAR_2, 0);
}
