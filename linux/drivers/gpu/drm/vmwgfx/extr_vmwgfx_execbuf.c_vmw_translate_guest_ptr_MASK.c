
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_sw_context {int bo_relocations; int ctx; TYPE_1__* fp; } ;
struct vmw_relocation {int head; struct vmw_buffer_object* vbo; TYPE_2__* location; } ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int dummy; } ;
struct TYPE_5__ {int gmrId; } ;
struct TYPE_4__ {int tfile; } ;
typedef TYPE_2__ SVGAGuestPtr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vmw_buffer_object*) ;
 int FUNC_1 (struct vmw_buffer_object*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int) ;
 struct vmw_buffer_object* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct vmw_buffer_object*,int,int) ;
 struct vmw_relocation* FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct vmw_private *VAR_1,
       struct vmw_sw_context *VAR_2,
       SVGAGuestPtr *VAR_3,
       struct vmw_buffer_object **VAR_4)
{
 struct vmw_buffer_object *VAR_5;
 uint32_t VAR_6 = VAR_3->gmrId;
 struct vmw_relocation *VAR_7;
 int VAR_8;

 FUNC_9(VAR_2->ctx);
 VAR_5 = FUNC_5(VAR_2->fp->tfile, VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_2("Could not find or use GMR region.\n");
  return FUNC_1(VAR_5);
 }

 VAR_8 = FUNC_7(VAR_2->ctx, VAR_5, 0, 0);
 FUNC_6();
 if (FUNC_4(VAR_8 != 0))
  return VAR_8;

 VAR_7 = FUNC_8(VAR_2->ctx, sizeof(*VAR_7));
 if (!VAR_7)
  return -VAR_0;

 VAR_7->location = VAR_3;
 VAR_7->vbo = VAR_5;
 *VAR_4 = VAR_5;
 FUNC_3(&VAR_7->head, &VAR_2->bo_relocations);

 return 0;
}
