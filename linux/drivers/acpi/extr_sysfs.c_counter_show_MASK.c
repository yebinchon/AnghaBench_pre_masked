
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int acpi_handle ;
typedef int acpi_event_status ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 struct kobj_attribute* VAR_14 ;
 int FUNC_0 (int,int*,int *) ;
 size_t VAR_15 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_16,
       struct kobj_attribute *VAR_17, char *VAR_18)
{
 int VAR_19 = VAR_17 - VAR_14;
 int VAR_20;
 acpi_handle VAR_21;
 acpi_event_status VAR_22;
 int VAR_23 = 0;

 VAR_13[VAR_15 + VAR_6 + VAR_8].count =
     VAR_11;
 VAR_13[VAR_15 + VAR_6 + VAR_9].count =
     VAR_12;
 VAR_13[VAR_15 + VAR_6 + VAR_7].count =
     VAR_10;
 VAR_20 = FUNC_1(VAR_18, "%8u", VAR_13[VAR_19].count);


 if (VAR_19 >= VAR_15 + VAR_6)
  goto end;

 VAR_23 = FUNC_0(VAR_19, &VAR_22, &VAR_21);
 if (VAR_23)
  goto end;

 if (VAR_22 & VAR_1)
  VAR_20 += FUNC_1(VAR_18 + VAR_20, "  EN");
 else
  VAR_20 += FUNC_1(VAR_18 + VAR_20, "    ");
 if (VAR_22 & VAR_4)
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " STS");
 else
  VAR_20 += FUNC_1(VAR_18 + VAR_20, "    ");

 if (!(VAR_22 & VAR_2))
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " invalid     ");
 else if (VAR_22 & VAR_0)
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " enabled     ");
 else if (VAR_22 & VAR_5)
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " wake_enabled");
 else
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " disabled    ");
 if (VAR_22 & VAR_3)
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " masked  ");
 else
  VAR_20 += FUNC_1(VAR_18 + VAR_20, " unmasked");

end:
 VAR_20 += FUNC_1(VAR_18 + VAR_20, "\n");
 return VAR_23 ? VAR_23 : VAR_20;
}
