
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vmw_resource {int id; struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;
struct vmw_fence_obj {int dummy; } ;
struct ttm_validate_buffer {struct ttm_buffer_object* bo; } ;
struct TYPE_6__ {scalar_t__ mem_type; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;
struct TYPE_8__ {int size; int id; } ;
struct TYPE_7__ {int mobid; int sid; } ;
typedef TYPE_2__ SVGA3dCmdReadbackGBSurface ;
typedef TYPE_2__ SVGA3dCmdInvalidateGBSurface ;
typedef TYPE_4__ SVGA3dCmdHeader ;
typedef TYPE_2__ SVGA3dCmdBindGBSurface ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (struct vmw_private*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ttm_buffer_object*,struct vmw_fence_obj*) ;
 int FUNC_5 (int *,struct vmw_private*,struct vmw_fence_obj**,int *) ;
 int FUNC_6 (struct vmw_fence_obj**) ;
 int FUNC_7 (struct vmw_private*,int) ;

__attribute__((used)) static int FUNC_8(struct vmw_resource *VAR_6,
     bool VAR_7,
     struct ttm_validate_buffer *VAR_8)
{
 struct vmw_private *VAR_9 = VAR_6->dev_priv;
 struct ttm_buffer_object *VAR_10 = VAR_8->bo;
 struct vmw_fence_obj *VAR_11;

 struct {
  SVGA3dCmdHeader header;
  SVGA3dCmdReadbackGBSurface body;
 } *VAR_12;
 struct {
  SVGA3dCmdHeader header;
  SVGA3dCmdInvalidateGBSurface body;
 } *VAR_13;
 struct {
  SVGA3dCmdHeader header;
  SVGA3dCmdBindGBSurface body;
 } *VAR_14;
 uint32_t VAR_15;
 uint8_t *VAR_16;


 FUNC_0(VAR_10->mem.mem_type != VAR_5);

 VAR_15 = sizeof(*VAR_14) + (VAR_7 ? sizeof(*VAR_12) : sizeof(*VAR_13));
 VAR_16 = FUNC_1(VAR_9, VAR_15);
 if (FUNC_3(!VAR_16))
  return -VAR_0;

 if (VAR_7) {
  VAR_12 = (void *) VAR_16;
  VAR_12->header.id = VAR_4;
  VAR_12->header.size = sizeof(VAR_12->body);
  VAR_12->body.sid = VAR_6->id;
  VAR_14 = (void *) &VAR_12[1];
 } else {
  VAR_13 = (void *) VAR_16;
  VAR_13->header.id = VAR_3;
  VAR_13->header.size = sizeof(VAR_13->body);
  VAR_13->body.sid = VAR_6->id;
  VAR_14 = (void *) &VAR_13[1];
 }

 VAR_14->header.id = VAR_2;
 VAR_14->header.size = sizeof(VAR_14->body);
 VAR_14->body.sid = VAR_6->id;
 VAR_14->body.mobid = VAR_1;

 FUNC_7(VAR_9, VAR_15);





 (void) FUNC_5(((void*)0), VAR_9,
       &VAR_11, ((void*)0));

 FUNC_4(VAR_8->bo, VAR_11);

 if (FUNC_2(VAR_11 != ((void*)0)))
  FUNC_6(&VAR_11);

 return 0;
}
