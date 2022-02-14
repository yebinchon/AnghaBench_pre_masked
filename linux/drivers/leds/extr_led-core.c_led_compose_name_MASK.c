
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_properties {char* label; size_t color; int func_enum; scalar_t__ function; scalar_t__ color_present; scalar_t__ func_enum_present; } ;
struct led_init_data {char* devicename; char* default_label; scalar_t__ devname_mandatory; struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct fwnode_handle*) ;
 char** VAR_2 ;
 int FUNC_2 (struct device*,struct fwnode_handle*,struct led_properties*) ;
 int FUNC_3 (char*,int,char*,char const*,char*,...) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_1__* FUNC_5 (struct fwnode_handle*) ;

int FUNC_6(struct device *VAR_3, struct led_init_data *VAR_4,
       char *VAR_5)
{
 struct led_properties VAR_6 = {};
 struct fwnode_handle *VAR_7 = VAR_4->fwnode;
 const char *VAR_8 = VAR_4->devicename;

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_7, &VAR_6);

 if (VAR_6.label) {






  if (!VAR_8) {
   FUNC_4(VAR_5, VAR_6.label,
    VAR_1);
  } else {
   FUNC_3(VAR_5, VAR_1, "%s:%s",
     VAR_8, VAR_6.label);
  }
 } else if (VAR_6.function || VAR_6.color_present) {
  char VAR_9[VAR_1];

  if (VAR_6.func_enum_present) {
   FUNC_3(VAR_9, VAR_1, "%s:%s-%d",
     VAR_6.color_present ? VAR_2[VAR_6.color] : "",
     VAR_6.function ?: "", VAR_6.func_enum);
  } else {
   FUNC_3(VAR_9, VAR_1, "%s:%s",
     VAR_6.color_present ? VAR_2[VAR_6.color] : "",
     VAR_6.function ?: "");
  }
  if (VAR_4->devname_mandatory) {
   FUNC_3(VAR_5, VAR_1, "%s:%s",
     VAR_8, VAR_9);
  } else {
   FUNC_4(VAR_5, VAR_9, VAR_1);

  }
 } else if (VAR_4->default_label) {
  if (!VAR_8) {
   FUNC_0(VAR_3, "Legacy LED naming requires devicename segment");
   return -VAR_0;
  }
  FUNC_3(VAR_5, VAR_1, "%s:%s",
    VAR_8, VAR_4->default_label);
 } else if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_5, FUNC_5(VAR_7)->name,
   VAR_1);
 } else
  return -VAR_0;

 return 0;
}
