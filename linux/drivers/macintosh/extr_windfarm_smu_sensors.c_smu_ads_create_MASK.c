
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* name; int * ops; } ;
struct smu_ad_sensor {TYPE_1__ sens; int reg; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct smu_ad_sensor*) ;
 struct smu_ad_sensor* FUNC_2 (int,int ) ;
 void* FUNC_3 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static struct smu_ad_sensor *FUNC_7(struct device_node *VAR_11)
{
 struct smu_ad_sensor *VAR_12;
 const char *VAR_13;
 const u32 *VAR_14;

 VAR_12 = FUNC_2(sizeof(struct smu_ad_sensor), VAR_0);
 if (VAR_12 == ((void*)0))
  return ((void*)0);
 VAR_13 = FUNC_3(VAR_11, "location", ((void*)0));
 if (VAR_13 == ((void*)0))
  goto fail;
 if (FUNC_4(VAR_11, "temp-sensor") &&
     !FUNC_5(VAR_13, "CPU T-Diode")) {
  VAR_12->sens.ops = &VAR_8;
  VAR_12->sens.name = "cpu-temp";
  if (VAR_4 == ((void*)0)) {
   FUNC_0("wf: cpudiode partition (%02x) not found\n",
       VAR_1);
   goto fail;
  }
 } else if (FUNC_4(VAR_11, "current-sensor") &&
     !FUNC_5(VAR_13, "CPU Current")) {
  VAR_12->sens.ops = &VAR_7;
  VAR_12->sens.name = "cpu-current";
  if (VAR_5 == ((void*)0)) {
   FUNC_0("wf: cpuvcp partition (%02x) not found\n",
       VAR_2);
   goto fail;
  }
 } else if (FUNC_4(VAR_11, "voltage-sensor") &&
     !FUNC_5(VAR_13, "CPU Voltage")) {
  VAR_12->sens.ops = &VAR_9;
  VAR_12->sens.name = "cpu-voltage";
  if (VAR_5 == ((void*)0)) {
   FUNC_0("wf: cpuvcp partition (%02x) not found\n",
       VAR_2);
   goto fail;
  }
 } else if (FUNC_4(VAR_11, "power-sensor") &&
     !FUNC_5(VAR_13, "Slots Power")) {
  VAR_12->sens.ops = &VAR_10;
  VAR_12->sens.name = "slots-power";
  if (VAR_6 == ((void*)0)) {
   FUNC_0("wf: slotspow partition (%02x) not found\n",
       VAR_3);
   goto fail;
  }
 } else
  goto fail;

 VAR_14 = FUNC_3(VAR_11, "reg", ((void*)0));
 if (VAR_14 == ((void*)0))
  goto fail;
 VAR_12->reg = *VAR_14;

 if (FUNC_6(&VAR_12->sens))
  goto fail;
 return VAR_12;
 fail:
 FUNC_1(VAR_12);
 return ((void*)0);
}
