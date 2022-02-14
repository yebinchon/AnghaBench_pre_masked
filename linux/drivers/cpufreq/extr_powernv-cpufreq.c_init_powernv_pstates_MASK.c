
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pstate_idx_revmap_data {unsigned int pstate_id; int cpufreq_table_idx; int hentry; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ frequency; int flags; scalar_t__ driver_data; } ;
struct TYPE_3__ {int wof_enabled; int nr_pstates; int max; int nominal; int min; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 struct pstate_idx_revmap_data* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 struct device_node* FUNC_4 (char*) ;
 int * FUNC_5 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,scalar_t__*) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (char*,scalar_t__,...) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(void)
{
 struct device_node *VAR_9;
 int VAR_10, VAR_11 = 0;
 const __be32 *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21 = -VAR_2;

 VAR_9 = FUNC_4("/ibm,opal/power-mgt");
 if (!VAR_9) {
  FUNC_10("power-mgt node not found\n");
  return -VAR_2;
 }

 if (FUNC_7(VAR_9, "ibm,pstate-min", &VAR_16)) {
  FUNC_10("ibm,pstate-min node not found\n");
  goto out;
 }

 if (FUNC_7(VAR_9, "ibm,pstate-max", &VAR_17)) {
  FUNC_10("ibm,pstate-max node not found\n");
  goto out;
 }

 if (FUNC_7(VAR_9, "ibm,pstate-nominal",
     &VAR_18)) {
  FUNC_10("ibm,pstate-nominal not found\n");
  goto out;
 }

 if (FUNC_7(VAR_9, "ibm,pstate-ultra-turbo",
     &VAR_20)) {
  VAR_7.wof_enabled = 0;
  goto next;
 }

 if (FUNC_7(VAR_9, "ibm,pstate-turbo",
     &VAR_19)) {
  VAR_7.wof_enabled = 0;
  goto next;
 }

 if (VAR_19 == VAR_20)
  VAR_7.wof_enabled = 0;
 else
  VAR_7.wof_enabled = 1;

next:
 FUNC_9("cpufreq pstate min 0x%x nominal 0x%x max 0x%x\n", VAR_16,
  VAR_18, VAR_17);
 FUNC_9("Workload Optimized Frequency is %s in the platform\n",
  (VAR_7.wof_enabled) ? "enabled" : "disabled");

 VAR_12 = FUNC_5(VAR_9, "ibm,pstate-ids", &VAR_14);
 if (!VAR_12) {
  FUNC_10("ibm,pstate-ids not found\n");
  goto out;
 }

 VAR_13 = FUNC_5(VAR_9, "ibm,pstate-frequencies-mhz",
          &VAR_15);
 if (!VAR_13) {
  FUNC_10("ibm,pstate-frequencies-mhz not found\n");
  goto out;
 }

 if (VAR_14 != VAR_15) {
  FUNC_10("Entries in ibm,pstate-ids and "
   "ibm,pstate-frequencies-mhz does not match\n");
 }

 VAR_11 = FUNC_3(VAR_14, VAR_15) / sizeof(u32);
 if (!VAR_11) {
  FUNC_10("No PStates found\n");
  goto out;
 }

 VAR_7.nr_pstates = VAR_11;
 FUNC_8("NR PStates %d\n", VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  u32 VAR_22 = FUNC_0(VAR_12[VAR_10]);
  u32 VAR_23 = FUNC_0(VAR_13[VAR_10]);
  struct pstate_idx_revmap_data *VAR_24;
  unsigned int VAR_25;

  FUNC_8("PState id %d freq %d MHz\n", VAR_22, VAR_23);
  VAR_6[VAR_10].frequency = VAR_23 * 1000;
  VAR_6[VAR_10].driver_data = VAR_22 & 0xFF;

  VAR_24 = FUNC_2(sizeof(*VAR_24), VAR_4);
  if (!VAR_24) {
   VAR_21 = -VAR_3;
   goto out;
  }

  VAR_24->pstate_id = VAR_22 & 0xFF;
  VAR_24->cpufreq_table_idx = VAR_10;
  VAR_25 = (VAR_24->pstate_id) % VAR_5;
  FUNC_1(VAR_8, &VAR_24->hentry, VAR_25);

  if (VAR_22 == VAR_17)
   VAR_7.max = VAR_10;
  if (VAR_22 == VAR_18)
   VAR_7.nominal = VAR_10;
  if (VAR_22 == VAR_16)
   VAR_7.min = VAR_10;

  if (VAR_7.wof_enabled && VAR_22 == VAR_19) {
   int VAR_26;

   for (VAR_26 = VAR_10 - 1; VAR_26 >= (int)VAR_7.max; VAR_26--)
    VAR_6[VAR_26].flags = VAR_0;
  }
 }


 VAR_6[VAR_10].frequency = VAR_1;

 FUNC_6(VAR_9);
 return 0;
out:
 FUNC_6(VAR_9);
 return VAR_21;
}
