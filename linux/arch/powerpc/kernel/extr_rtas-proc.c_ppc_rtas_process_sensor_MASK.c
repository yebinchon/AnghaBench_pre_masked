
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct individual_sensor {int token; } ;
typedef int power_source ;
typedef int lid_status ;
typedef int key_switch ;
typedef int ibm_drconnector ;
typedef int epow_sensor ;
typedef int enclosure_switch ;
typedef int battery_remaining ;
typedef int battery_cyclestate ;
typedef int battery_charging ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct seq_file*,struct individual_sensor*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0,
 struct individual_sensor *VAR_1, int VAR_2, int VAR_3, const char *VAR_4)
{

 const char * VAR_5[] = { "Off\t", "Normal\t", "Secure\t",
      "Maintenance" };
 const char * VAR_6[] = { "Closed", "Open" };
 const char * VAR_7[] = { " ", "Open", "Closed" };
 const char * VAR_8[] = { "AC\t", "Battery",
        "AC & Battery" };
 const char * VAR_9[] = { "Very Low", "Low", "Mid", "High" };
 const char * VAR_10[] = {
  "EPOW Reset", "Cooling warning", "Power warning",
  "System shutdown", "System halt", "EPOW main enclosure",
  "EPOW power off" };
 const char * VAR_11[] = { "None", "In progress",
      "Requested" };
 const char * VAR_12[] = { "Charging", "Discharging",
      "No current flow" };
 const char * VAR_13[] = { "Empty", "Present", "Unusable",
      "Exchange" };

 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;



 switch (VAR_1->token) {
  case 131:
   FUNC_3(VAR_0, "Key switch:\t");
   VAR_15 = sizeof(VAR_5) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t", VAR_5[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 138:
   FUNC_3(VAR_0, "Enclosure switch:\t");
   VAR_15 = sizeof(VAR_6) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t",
      VAR_6[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 128:
   FUNC_3(VAR_0, "Temp. (C/F):\t");
   VAR_16 = 1;
   break;
  case 130:
   FUNC_3(VAR_0, "Lid status:\t");
   VAR_15 = sizeof(VAR_7) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t", VAR_7[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 129:
   FUNC_3(VAR_0, "Power source:\t");
   VAR_15 = sizeof(VAR_8) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t",
      VAR_8[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 139:
   FUNC_3(VAR_0, "Battery voltage:\t");
   break;
  case 140:
   FUNC_3(VAR_0, "Battery remaining:\t");
   VAR_15 = sizeof(VAR_9) / sizeof(char *);
   if (VAR_2 < VAR_15)
   {
    FUNC_3(VAR_0, "%s\t",
      VAR_9[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 141:
   FUNC_3(VAR_0, "Battery percentage:\t");
   break;
  case 137:
   FUNC_3(VAR_0, "EPOW Sensor:\t");
   VAR_15 = sizeof(VAR_10) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t", VAR_10[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 142:
   FUNC_3(VAR_0, "Battery cyclestate:\t");
   VAR_15 = sizeof(VAR_11) /
          sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t",
      VAR_11[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 143:
   FUNC_3(VAR_0, "Battery Charging:\t");
   VAR_15 = sizeof(VAR_12) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t",
      VAR_12[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 133:
   FUNC_3(VAR_0, "Surveillance:\t");
   break;
  case 135:
   FUNC_3(VAR_0, "Fan (rpm):\t");
   break;
  case 132:
   FUNC_3(VAR_0, "Voltage (mv):\t");
   break;
  case 136:
   FUNC_3(VAR_0, "DR connector:\t");
   VAR_15 = sizeof(VAR_13) / sizeof(char *);
   if (VAR_2 < VAR_15) {
    FUNC_3(VAR_0, "%s\t",
      VAR_13[VAR_2]);
    VAR_14 = 1;
   }
   break;
  case 134:
   FUNC_3(VAR_0, "Powersupply:\t");
   break;
  default:
   FUNC_3(VAR_0, "Unknown sensor (type %d), ignoring it\n",
     VAR_1->token);
   VAR_17 = 1;
   VAR_14 = 1;
   break;
 }
 if (VAR_14 == 0) {
  if (VAR_16) {
   FUNC_3(VAR_0, "%4d /%4d\t", VAR_2, FUNC_0(VAR_2));
  } else
   FUNC_3(VAR_0, "%10d\t", VAR_2);
 }
 if (VAR_17 == 0) {
  FUNC_3(VAR_0, "%s\t", FUNC_2(VAR_3));
  FUNC_1(VAR_0, VAR_1, VAR_4);
 }
}
