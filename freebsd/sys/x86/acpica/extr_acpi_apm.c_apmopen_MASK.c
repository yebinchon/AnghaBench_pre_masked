
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct apm_clone_data {int flags; } ;
struct acpi_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct apm_clone_data* FUNC_0 (struct cdev*,struct acpi_softc*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct acpi_softc* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct apm_clone_data*,int ) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_3, int VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct acpi_softc *VAR_7;
 struct apm_clone_data *VAR_8;

 VAR_7 = FUNC_2(FUNC_1("acpi"), 0);
 VAR_8 = FUNC_0(VAR_3, VAR_7);
 FUNC_3(VAR_8, VAR_2);


 if ((VAR_4 & VAR_1) != 0)
  VAR_8->flags |= VAR_0;

 return (0);
}
