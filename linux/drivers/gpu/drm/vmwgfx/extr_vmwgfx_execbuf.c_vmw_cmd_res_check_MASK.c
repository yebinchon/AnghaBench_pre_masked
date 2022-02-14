
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct vmw_user_resource_conv {int dummy; } ;
struct vmw_sw_context {int buf_start; TYPE_1__* fp; int ctx; struct vmw_res_cache_entry* res_cache; } ;
struct vmw_resource {int dummy; } ;
struct vmw_res_cache_entry {int valid_handle; scalar_t__ handle; struct vmw_resource* res; scalar_t__ valid; int private; } ;
struct vmw_private {int dummy; } ;
typedef enum vmw_res_type { ____Placeholder_vmw_res_type } vmw_res_type ;
struct TYPE_2__ {int tfile; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vmw_resource*) ;
 int FUNC_1 (struct vmw_resource*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct vmw_sw_context*,struct vmw_resource*,int ) ;
 unsigned int FUNC_6 (struct vmw_private*,int) ;
 int FUNC_7 (int ,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct vmw_sw_context*,struct vmw_resource*,int ,int ) ;
 struct vmw_resource* FUNC_9 (struct vmw_private*,int ,scalar_t__,struct vmw_user_resource_conv const*) ;
 int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct vmw_private *VAR_4,
    struct vmw_sw_context *VAR_5,
    enum vmw_res_type VAR_6,
    u32 VAR_7,
    const struct vmw_user_resource_conv *VAR_8,
    uint32_t *VAR_9,
    struct vmw_resource **VAR_10)
{
 struct vmw_res_cache_entry *VAR_11 = &VAR_5->res_cache[VAR_6];
 struct vmw_resource *VAR_12;
 int VAR_13;

 if (VAR_10)
  *VAR_10 = ((void*)0);

 if (*VAR_9 == VAR_1) {
  if (VAR_6 == VAR_2) {
   FUNC_2("Illegal context invalid id.\n");
   return -VAR_0;
  }
  return 0;
 }

 if (FUNC_3(VAR_11->valid_handle && *VAR_9 == VAR_11->handle)) {
  VAR_12 = VAR_11->res;
  if (VAR_7)
   FUNC_11(VAR_5->ctx,
           VAR_11->private, VAR_7);
 } else {
  unsigned int VAR_14 = FUNC_6(VAR_4, VAR_6);

  VAR_13 = FUNC_10(VAR_5->ctx, VAR_14);
  if (VAR_13)
   return VAR_13;

  VAR_12 = FUNC_9
   (VAR_4, VAR_5->fp->tfile, *VAR_9, VAR_8);
  if (FUNC_0(VAR_12)) {
   FUNC_2("Could not find/use resource 0x%08x.\n",
           (unsigned int) *VAR_9);
   return FUNC_1(VAR_12);
  }

  VAR_13 = FUNC_5(VAR_5, VAR_12, VAR_7);
  if (FUNC_4(VAR_13 != 0))
   return VAR_13;

  if (VAR_11->valid && VAR_11->res == VAR_12) {
   VAR_11->valid_handle = 1;
   VAR_11->handle = *VAR_9;
  }
 }

 VAR_13 = FUNC_8(VAR_5, VAR_12,
       FUNC_7(VAR_5->buf_start,
             VAR_9),
       VAR_3);
 if (VAR_10)
  *VAR_10 = VAR_12;

 return 0;
}
