
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qib_pportdata {int cc_shadow_lock; TYPE_1__* ccti_entries_shadow; } ;
struct qib_ibport {int dummy; } ;
struct ib_smp {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_cc_table_entry_shadow {int entry; } ;
struct ib_cc_table_attr {TYPE_2__* ccti_entries; void* ccti_limit; } ;
struct ib_cc_mad {int attr_mod; scalar_t__ mgmt_data; } ;
struct TYPE_4__ {void* entry; } ;
struct TYPE_3__ {int ccti_last_entry; struct ib_cc_table_entry_shadow* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 struct qib_pportdata* FUNC_4 (struct qib_ibport*) ;
 int FUNC_5 (struct ib_smp*) ;
 int FUNC_6 (struct ib_smp*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct qib_ibport* FUNC_9 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct ib_cc_mad *VAR_2,
    struct ib_device *VAR_3, u8 VAR_4)
{
 struct ib_cc_table_attr *VAR_5 =
  (struct ib_cc_table_attr *)VAR_2->mgmt_data;
 struct qib_ibport *VAR_6 = FUNC_9(VAR_3, VAR_4);
 struct qib_pportdata *VAR_7 = FUNC_4(VAR_6);
 u32 VAR_8 = FUNC_0(VAR_2->attr_mod);
 u32 VAR_9;
 u32 VAR_10;
 struct ib_cc_table_entry_shadow *VAR_11;
 int VAR_12;


 if (VAR_8 > VAR_1 - 1)
  goto bail;

 FUNC_3(VAR_2->mgmt_data, 0, sizeof(VAR_2->mgmt_data));

 FUNC_7(&VAR_7->cc_shadow_lock);

 VAR_9 =
  (VAR_7->ccti_entries_shadow->ccti_last_entry + 1)/VAR_0;
 VAR_9 = VAR_9 ? VAR_9 - 1 : 0;

 if (VAR_8 > VAR_9) {
  FUNC_8(&VAR_7->cc_shadow_lock);
  goto bail;
 }

 VAR_2->attr_mod = FUNC_2(VAR_8);

 VAR_10 = VAR_0 * (VAR_8 + 1);

 VAR_10--;

 VAR_5->ccti_limit = FUNC_1(VAR_10);

 VAR_11 = &VAR_7->ccti_entries_shadow->
   entries[VAR_0 * VAR_8];
 VAR_10 %= VAR_0;

 for (VAR_12 = 0; VAR_12 <= VAR_10; VAR_12++)
  VAR_5->ccti_entries[VAR_12].entry = FUNC_1(VAR_11[VAR_12].entry);

 FUNC_8(&VAR_7->cc_shadow_lock);

 return FUNC_5((struct ib_smp *) VAR_2);

bail:
 return FUNC_6((struct ib_smp *) VAR_2);
}
