
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_lpi_state {scalar_t__ entry_method; char* desc; int index; int arch_flags; int flags; int enable_parent_state; scalar_t__ wake_latency; int min_residency; scalar_t__ address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static bool FUNC_3(struct acpi_lpi_state *VAR_2,
          struct acpi_lpi_state *VAR_3,
          struct acpi_lpi_state *VAR_4)
{
 if (VAR_3->entry_method == VAR_0) {
  if (!VAR_3->address)
   return 0;
  VAR_4->address = VAR_2->address + VAR_3->address;
 } else {
  VAR_4->address = VAR_3->address;
 }

 VAR_4->min_residency = FUNC_0(VAR_2->min_residency, VAR_3->min_residency);
 VAR_4->wake_latency = VAR_2->wake_latency + VAR_3->wake_latency;
 VAR_4->enable_parent_state = VAR_3->enable_parent_state;
 VAR_4->entry_method = VAR_2->entry_method;

 VAR_4->flags = VAR_3->flags;
 VAR_4->arch_flags = VAR_3->arch_flags;
 VAR_4->index = VAR_3->index;

 FUNC_2(VAR_4->desc, VAR_2->desc, VAR_1);
 FUNC_1(VAR_4->desc, "+", VAR_1);
 FUNC_1(VAR_4->desc, VAR_3->desc, VAR_1);
 return 1;
}
