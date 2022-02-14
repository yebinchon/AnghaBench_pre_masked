
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_guc_ct_channel {int enabled; struct intel_guc_ct_buffer* ctbs; } ;
struct intel_guc_ct_buffer {TYPE_1__* desc; } ;
struct intel_guc_ct {struct intel_guc_ct_channel host_channel; } ;
struct TYPE_2__ {int is_in_error; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct intel_guc_ct*,int *) ;
 int FUNC_3 (struct intel_guc_ct*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct intel_guc_ct_buffer*,int *) ;

__attribute__((used)) static void FUNC_6(struct intel_guc_ct *VAR_3)
{
 struct intel_guc_ct_channel *VAR_4 = &VAR_3->host_channel;
 struct intel_guc_ct_buffer *VAR_5 = &VAR_4->ctbs[VAR_0];
 u32 VAR_6[VAR_2 + 1];
 int VAR_7 = 0;

 if (!VAR_4->enabled)
  return;

 do {
  VAR_7 = FUNC_5(VAR_5, VAR_6);
  if (VAR_7)
   break;

  if (FUNC_4(VAR_6[0]))
   VAR_7 = FUNC_3(VAR_3, VAR_6);
  else
   VAR_7 = FUNC_2(VAR_3, VAR_6);
 } while (!VAR_7);

 if (FUNC_1(VAR_7 == -VAR_1)) {
  FUNC_0("CT: corrupted message detected!\n");
  VAR_5->desc->is_in_error = 1;
 }
}
