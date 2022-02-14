
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct apm_clone_data {scalar_t__ notify_status; TYPE_1__ sel_read; struct acpi_softc* acpi_sc; } ;
struct acpi_softc {scalar_t__ acpi_next_sstate; int apm_cdevs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct apm_clone_data*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct apm_clone_data*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct apm_clone_data*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 struct apm_clone_data *VAR_6;
 struct acpi_softc *VAR_7;

 VAR_6 = VAR_5;
 VAR_7 = VAR_6->acpi_sc;


 if (VAR_7->acpi_next_sstate != 0 &&
     VAR_6->notify_status != VAR_0)
  FUNC_3(VAR_6, 0);


 FUNC_0(VAR_2);
 FUNC_2(&VAR_7->apm_cdevs, VAR_6, VAR_3, VAR_4);
 FUNC_6(&VAR_6->sel_read);
 FUNC_5(&VAR_6->sel_read.si_note);
 FUNC_1(VAR_2);
 FUNC_4(VAR_6, VAR_1);
}
