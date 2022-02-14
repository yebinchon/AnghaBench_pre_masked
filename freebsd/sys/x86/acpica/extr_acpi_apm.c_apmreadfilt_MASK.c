
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {struct apm_clone_data* kn_hook; } ;
struct apm_clone_data {TYPE_1__* acpi_sc; } ;
struct TYPE_2__ {scalar_t__ acpi_next_sstate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_1, long VAR_2)
{
 struct apm_clone_data *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_3 = VAR_1->kn_hook;
 VAR_4 = VAR_3->acpi_sc->acpi_next_sstate ? 1 : 0;
 FUNC_1(VAR_0);
 return (VAR_4);
}
