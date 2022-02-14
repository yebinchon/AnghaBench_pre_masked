
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct apm_clone_data {int sel_read; TYPE_1__* acpi_sc; } ;
struct TYPE_2__ {scalar_t__ acpi_next_sstate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct apm_clone_data *VAR_6;
 int VAR_7;

 VAR_7 = 0;
 FUNC_2((void **)&VAR_6);
 FUNC_0(VAR_2);
 if (VAR_6->acpi_sc->acpi_next_sstate)
  VAR_7 |= VAR_4 & (VAR_0 | VAR_1);
 else
  FUNC_3(VAR_5, &VAR_6->sel_read);
 FUNC_1(VAR_2);
 return (VAR_7);
}
