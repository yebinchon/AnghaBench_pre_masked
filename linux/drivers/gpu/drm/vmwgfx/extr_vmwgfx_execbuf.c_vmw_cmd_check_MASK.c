
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vmw_sw_context {int kernel; } ;
struct vmw_private {int capabilities; } ;
struct vmw_cmd_entry {int (* func ) (struct vmw_private*,struct vmw_sw_context*,TYPE_1__*) ;scalar_t__ gb_enable; scalar_t__ gb_disable; int user_allow; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ size; } ;
typedef TYPE_1__ SVGA3dCmdHeader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (struct vmw_private*,struct vmw_sw_context*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vmw_private*,struct vmw_sw_context*,void*,scalar_t__*) ;
 struct vmw_cmd_entry* VAR_6 ;

__attribute__((used)) static int FUNC_4(struct vmw_private *VAR_7,
    struct vmw_sw_context *VAR_8, void *VAR_9,
    uint32_t *VAR_10)
{
 uint32_t VAR_11;
 uint32_t VAR_12 = *VAR_10;
 SVGA3dCmdHeader *VAR_13 = (SVGA3dCmdHeader *) VAR_9;
 int VAR_14;
 const struct vmw_cmd_entry *VAR_15;
 bool VAR_16 = VAR_7->capabilities & VAR_4;

 VAR_11 = ((uint32_t *)VAR_9)[0];

 if (FUNC_2(VAR_11 < VAR_5))
  return FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);


 VAR_11 = VAR_13->id;
 *VAR_10 = VAR_13->size + sizeof(SVGA3dCmdHeader);

 VAR_11 -= VAR_2;
 if (FUNC_2(*VAR_10 > VAR_12))
  goto out_invalid;

 if (FUNC_2(VAR_11 >= VAR_3 - VAR_2))
  goto out_invalid;

 VAR_15 = &VAR_6[VAR_11];
 if (FUNC_2(!VAR_15->func))
  goto out_invalid;

 if (FUNC_2(!VAR_15->user_allow && !VAR_8->kernel))
  goto out_privileged;

 if (FUNC_2(VAR_15->gb_disable && VAR_16))
  goto out_old;

 if (FUNC_2(VAR_15->gb_enable && !VAR_16))
  goto out_new;

 VAR_14 = VAR_15->func(VAR_7, VAR_8, VAR_13);
 if (FUNC_2(VAR_14 != 0)) {
  FUNC_0("SVGA3D command: %d failed with error %d\n",
          VAR_11 + VAR_2, VAR_14);
  return VAR_14;
 }

 return 0;
out_invalid:
 FUNC_0("Invalid SVGA3D command: %d\n",
         VAR_11 + VAR_2);
 return -VAR_0;
out_privileged:
 FUNC_0("Privileged SVGA3D command: %d\n",
         VAR_11 + VAR_2);
 return -VAR_1;
out_old:
 FUNC_0("Deprecated (disallowed) SVGA3D command: %d\n",
         VAR_11 + VAR_2);
 return -VAR_0;
out_new:
 FUNC_0("SVGA3D command: %d not supported by virtual device.\n",
         VAR_11 + VAR_2);
 return -VAR_0;
}
