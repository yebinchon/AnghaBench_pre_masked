
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int state_count; TYPE_1__* states; } ;
struct powernow_k8_data {TYPE_2__ acpi_data; scalar_t__ exttype; } ;
struct cpufreq_frequency_table {int driver_data; int frequency; } ;
struct TYPE_3__ {int status; int control; int core_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cpufreq_frequency_table*,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct powernow_k8_data *VAR_8,
  struct cpufreq_frequency_table *VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_8->acpi_data.state_count; VAR_10++) {
  u32 VAR_11;
  u32 VAR_12;
  u32 VAR_13, VAR_14;
  u64 VAR_15, VAR_16;

  if (VAR_8->exttype) {
   VAR_15 = VAR_8->acpi_data.states[VAR_10].status;
   VAR_11 = VAR_15 & VAR_0;
   VAR_12 = (VAR_15 >> VAR_7) & VAR_1;
  } else {
   VAR_16 = VAR_8->acpi_data.states[VAR_10].control;
   VAR_11 = VAR_16 & VAR_2;
   VAR_12 = (VAR_16 >> VAR_7) & VAR_5;
  }

  FUNC_2("   %d : fid 0x%x, vid 0x%x\n", VAR_10, VAR_11, VAR_12);

  VAR_14 = VAR_11 | (VAR_12<<8);
  VAR_9[VAR_10].driver_data = VAR_14;

  VAR_13 = FUNC_0(VAR_11);
  VAR_9[VAR_10].frequency = VAR_13;


  if ((VAR_13 > (VAR_3 * 1000)) || (VAR_13 < (VAR_4 * 1000))) {
   FUNC_2("invalid freq %u kHz, ignoring\n", VAR_13);
   FUNC_1(VAR_9, VAR_10);
   continue;
  }



  if (VAR_12 == VAR_6) {
   FUNC_2("invalid vid %u, ignoring\n", VAR_12);
   FUNC_1(VAR_9, VAR_10);
   continue;
  }

  if (VAR_13 != (VAR_8->acpi_data.states[VAR_10].core_frequency * 1000)) {
   FUNC_3("invalid freq entries %u kHz vs. %u kHz\n",
    VAR_13, (unsigned int)
    (VAR_8->acpi_data.states[VAR_10].core_frequency
     * 1000));
   FUNC_1(VAR_9, VAR_10);
   continue;
  }
 }
 return 0;
}
