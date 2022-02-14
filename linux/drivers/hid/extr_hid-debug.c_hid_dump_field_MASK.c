
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hid_field {int maxusage; scalar_t__ logical_minimum; scalar_t__ logical_maximum; scalar_t__ physical_minimum; scalar_t__ physical_maximum; int unit; int flags; int report_offset; int report_count; int report_size; scalar_t__ unit_exponent; TYPE_1__* usage; scalar_t__ application; scalar_t__ logical; scalar_t__ physical; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ hid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__,struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (int,struct seq_file*) ;

void FUNC_3(struct hid_field *VAR_9, int VAR_10, struct seq_file *VAR_11) {
 int VAR_12;

 if (VAR_9->physical) {
  FUNC_2(VAR_10, VAR_11);
  FUNC_1(VAR_11, "Physical(");
  FUNC_0(VAR_9->physical, VAR_11); FUNC_1(VAR_11, ")\n");
 }
 if (VAR_9->logical) {
  FUNC_2(VAR_10, VAR_11);
  FUNC_1(VAR_11, "Logical(");
  FUNC_0(VAR_9->logical, VAR_11); FUNC_1(VAR_11, ")\n");
 }
 if (VAR_9->application) {
  FUNC_2(VAR_10, VAR_11);
  FUNC_1(VAR_11, "Application(");
  FUNC_0(VAR_9->application, VAR_11); FUNC_1(VAR_11, ")\n");
 }
 FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Usage(%d)\n", VAR_9->maxusage);
 for (VAR_12 = 0; VAR_12 < VAR_9->maxusage; VAR_12++) {
  FUNC_2(VAR_10+2, VAR_11); FUNC_0(VAR_9->usage[VAR_12].hid, VAR_11); FUNC_1(VAR_11, "\n");
 }
 if (VAR_9->logical_minimum != VAR_9->logical_maximum) {
  FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Logical Minimum(%d)\n", VAR_9->logical_minimum);
  FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Logical Maximum(%d)\n", VAR_9->logical_maximum);
 }
 if (VAR_9->physical_minimum != VAR_9->physical_maximum) {
  FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Physical Minimum(%d)\n", VAR_9->physical_minimum);
  FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Physical Maximum(%d)\n", VAR_9->physical_maximum);
 }
 if (VAR_9->unit_exponent) {
  FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Unit Exponent(%d)\n", VAR_9->unit_exponent);
 }
 if (VAR_9->unit) {
  static const char *VAR_13[5] = { "None", "SI Linear", "SI Rotation", "English Linear", "English Rotation" };
  static const char *VAR_14[5][8] = {
   { "None", "None", "None", "None", "None", "None", "None", "None" },
   { "None", "Centimeter", "Gram", "Seconds", "Kelvin", "Ampere", "Candela", "None" },
   { "None", "Radians", "Gram", "Seconds", "Kelvin", "Ampere", "Candela", "None" },
   { "None", "Inch", "Slug", "Seconds", "Fahrenheit", "Ampere", "Candela", "None" },
   { "None", "Degrees", "Slug", "Seconds", "Fahrenheit", "Ampere", "Candela", "None" }
  };

  int VAR_15;
  int VAR_16;
                __u32 VAR_17 = VAR_9->unit;


  VAR_16 = VAR_17 & 0xf;
  VAR_17 >>= 4;

  if(VAR_16 > 4) {
   FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Unit(Invalid)\n");
  }
  else {
   int VAR_18 = 0;

   FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Unit(%s : ", VAR_13[VAR_16]);

   for (VAR_15=1 ; VAR_15<sizeof(__u32)*2 ; VAR_15++) {
    char VAR_19 = VAR_17 & 0xf;
    VAR_17 >>= 4;
    if (VAR_19 != 0) {
     if(VAR_18++ > 0)
      FUNC_1(VAR_11, "*");
     FUNC_1(VAR_11, "%s", VAR_14[VAR_16][VAR_15]);
     if(VAR_19 != 1) {


      int VAR_20 = VAR_19 & 0x7;
      if(VAR_19 & 0x08)
       VAR_20 = -((0x7 & ~VAR_20) +1);
      FUNC_1(VAR_11, "^%d", VAR_20);
     }
    }
   }
   FUNC_1(VAR_11, ")\n");
  }
 }
 FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Report Size(%u)\n", VAR_9->report_size);
 FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Report Count(%u)\n", VAR_9->report_count);
 FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Report Offset(%u)\n", VAR_9->report_offset);

 FUNC_2(VAR_10, VAR_11); FUNC_1(VAR_11, "Flags( ");
 VAR_12 = VAR_9->flags;
 FUNC_1(VAR_11, "%s", VAR_1 & VAR_12 ? "Constant " : "");
 FUNC_1(VAR_11, "%s", VAR_6 & VAR_12 ? "Variable " : "Array ");
 FUNC_1(VAR_11, "%s", VAR_5 & VAR_12 ? "Relative " : "Absolute ");
 FUNC_1(VAR_11, "%s", VAR_8 & VAR_12 ? "Wrap " : "");
 FUNC_1(VAR_11, "%s", VAR_2 & VAR_12 ? "NonLinear " : "");
 FUNC_1(VAR_11, "%s", VAR_3 & VAR_12 ? "NoPreferredState " : "");
 FUNC_1(VAR_11, "%s", VAR_4 & VAR_12 ? "NullState " : "");
 FUNC_1(VAR_11, "%s", VAR_7 & VAR_12 ? "Volatile " : "");
 FUNC_1(VAR_11, "%s", VAR_0 & VAR_12 ? "BufferedByte " : "");
 FUNC_1(VAR_11, ")\n");
}
