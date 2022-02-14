
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc_ct_channel {int dummy; } ;
struct intel_guc_ct {struct intel_guc_ct_channel host_channel; } ;
struct intel_guc {int send_mutex; struct intel_guc_ct ct; } ;


 int FUNC_0 (char*,int const,int,int) ;
 int FUNC_1 (char*,int const,int,int ) ;
 int FUNC_2 (struct intel_guc_ct*,struct intel_guc_ct_channel*,int const*,int ,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct intel_guc *VAR_0, const u32 *VAR_1, u32 VAR_2,
        u32 *VAR_3, u32 VAR_4)
{
 struct intel_guc_ct *VAR_5 = &VAR_0->ct;
 struct intel_guc_ct_channel *VAR_6 = &VAR_5->host_channel;
 u32 VAR_7 = ~0;
 int VAR_8;

 FUNC_3(&VAR_0->send_mutex);

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_1, VAR_2, VAR_3, VAR_4,
   &VAR_7);
 if (FUNC_5(VAR_8 < 0)) {
  FUNC_1("CT: send action %#X failed; err=%d status=%#X\n",
     VAR_1[0], VAR_8, VAR_7);
 } else if (FUNC_5(VAR_8)) {
  FUNC_0("CT: send action %#x returned %d (%#x)\n",
    VAR_1[0], VAR_8, VAR_8);
 }

 FUNC_4(&VAR_0->send_mutex);
 return VAR_8;
}
