
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_object* elements; } ;
union acpi_object {TYPE_1__ package; } ;
struct atk_data {int old_interface; } ;
typedef enum atk_pack_member { ____Placeholder_atk_pack_member } atk_pack_member ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static union acpi_object *FUNC_0(struct atk_data *VAR_10,
      union acpi_object *VAR_11,
      enum atk_pack_member VAR_12)
{
 bool VAR_13 = VAR_10->old_interface;
 int VAR_14;

 switch (VAR_12) {
 case 131:
  VAR_14 = VAR_13 ? VAR_6 : VAR_1;
  break;
 case 128:
  VAR_14 = VAR_13 ? VAR_9 : VAR_4;
  break;
 case 130:
  VAR_14 = VAR_13 ? VAR_7 :
      VAR_2;
  break;
 case 129:
  VAR_14 = VAR_13 ? VAR_8 :
      VAR_3;
  break;
 case 132:
  VAR_14 = VAR_13 ? VAR_5 :
      VAR_0;
  break;
 default:
  return ((void*)0);
 }

 return &VAR_11->package.elements[VAR_14];
}
