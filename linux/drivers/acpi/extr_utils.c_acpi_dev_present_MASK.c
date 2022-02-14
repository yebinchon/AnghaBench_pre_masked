
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct acpi_dev_match_info {char const* uid; int hrv; TYPE_1__* hid; } ;
typedef int s64 ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int *,int *,struct acpi_dev_match_info*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,char const*,int) ;

bool FUNC_3(const char *VAR_2, const char *VAR_3, s64 VAR_4)
{
 struct acpi_dev_match_info VAR_5 = {};
 struct device *VAR_6;

 FUNC_2(VAR_5.hid[0].id, VAR_2, sizeof(VAR_5.hid[0].id));
 VAR_5.uid = VAR_3;
 VAR_5.hrv = VAR_4;

 VAR_6 = FUNC_0(&VAR_0, ((void*)0), &VAR_5, VAR_1);
 FUNC_1(VAR_6);
 return !!VAR_6;
}
