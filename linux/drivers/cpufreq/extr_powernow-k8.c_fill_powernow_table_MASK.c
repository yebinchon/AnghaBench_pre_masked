
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pst_s {scalar_t__ fid; int vid; } ;
struct powernow_k8_data {unsigned int batps; unsigned int numps; scalar_t__ currfid; int currvid; scalar_t__ cpu; struct cpufreq_frequency_table* powernow_table; } ;
struct cpufreq_frequency_table {int driver_data; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct powernow_k8_data*,struct pst_s*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cpufreq_frequency_table*) ;
 struct cpufreq_frequency_table* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (struct powernow_k8_data*) ;
 scalar_t__ FUNC_9 (struct powernow_k8_data*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct powernow_k8_data *VAR_6,
  struct pst_s *VAR_7, u8 VAR_8)
{
 struct cpufreq_frequency_table *VAR_9;
 unsigned int VAR_10;

 if (VAR_6->batps) {

  FUNC_7("Only %d pstates usable (use ACPI driver for full range\n",
   VAR_6->batps);
  VAR_6->numps = VAR_6->batps;
 }

 for (VAR_10 = 1; VAR_10 < VAR_6->numps; VAR_10++) {
  if (VAR_7[VAR_10-1].fid >= VAR_7[VAR_10].fid) {
   FUNC_6("PST out of sequence\n");
   return -VAR_1;
  }
 }

 if (VAR_6->numps < 2) {
  FUNC_6("no p states to transition\n");
  return -VAR_3;
 }

 if (FUNC_0(VAR_6, VAR_7, VAR_8))
  return -VAR_1;

 VAR_9 = FUNC_4((sizeof(*VAR_9)
  * (VAR_6->numps + 1)), VAR_5);
 if (!VAR_9)
  return -VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_6->numps; VAR_10++) {
  int VAR_11;
  VAR_9[VAR_10].driver_data = VAR_7[VAR_10].fid;
  VAR_9[VAR_10].driver_data |= (VAR_7[VAR_10].vid << 8);
  VAR_11 = FUNC_2(VAR_7[VAR_10].fid);
  VAR_9[VAR_10].frequency = VAR_11;
 }
 VAR_9[VAR_6->numps].frequency = VAR_0;
 VAR_9[VAR_6->numps].driver_data = 0;

 if (FUNC_9(VAR_6)) {
  FUNC_3(VAR_9);
  return -VAR_2;
 }

 FUNC_5("cfid 0x%x, cvid 0x%x\n", VAR_6->currfid, VAR_6->currvid);
 VAR_6->powernow_table = VAR_9;
 if (FUNC_1(FUNC_10(VAR_6->cpu)) == VAR_6->cpu)
  FUNC_8(VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_6->numps; VAR_10++)
  if ((VAR_7[VAR_10].fid == VAR_6->currfid) &&
      (VAR_7[VAR_10].vid == VAR_6->currvid))
   return 0;

 FUNC_5("currfid/vid do not match PST, ignoring\n");
 return 0;
}
