
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expected_btypes; } ;
union acpi_predefined_info {TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;

const union acpi_predefined_info *FUNC_0(const union
             acpi_predefined_info
             *VAR_2)
{





 if ((VAR_2->info.expected_btypes & VAR_1) &&
     (VAR_2->info.expected_btypes != VAR_0)) {
  VAR_2++;
 }

 VAR_2++;
 return (VAR_2);
}
