
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resource_type; } ;
struct TYPE_4__ {TYPE_1__ address; } ;
struct acpi_resource {int type; TYPE_2__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;

int FUNC_0(struct acpi_resource *VAR_9,
      unsigned long VAR_10)
{
 unsigned long VAR_11 = 0;

 switch (VAR_9->type) {
 case 129:
 case 128:
 case 133:
  VAR_11 = VAR_7;
  break;
 case 131:
 case 134:
  VAR_11 = VAR_5;
  break;
 case 130:
 case 136:
  VAR_11 = VAR_6;
  break;
 case 138:
 case 135:
  VAR_11 = VAR_4;
  break;
 case 132:
  VAR_11 = VAR_8;
  break;
 case 141:
 case 140:
 case 139:
 case 137:
  if (VAR_9->data.address.resource_type == VAR_2)
   VAR_11 = VAR_7;
  else if (VAR_9->data.address.resource_type == VAR_1)
   VAR_11 = VAR_5;
  else if (VAR_9->data.address.resource_type ==
    VAR_0)
   VAR_11 = VAR_3;
  break;
 default:
  break;
 }

 return (VAR_11 & VAR_10) ? 0 : 1;
}
