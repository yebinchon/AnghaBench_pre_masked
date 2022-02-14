
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpi_softc {int dummy; } ;
struct TYPE_5__ {TYPE_1__* mr_op; } ;
struct TYPE_4__ {int (* reinit ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct acpi_softc*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int
FUNC_13(struct acpi_softc *VAR_5, int VAR_6, int VAR_7,
    int VAR_8)
{

 if (VAR_7 == -1)
  return (VAR_7);

 if (!VAR_8) {

  if (VAR_7 == 1) {
   FUNC_11();
   FUNC_8();
   FUNC_4();
   FUNC_2(VAR_3, 0);
   FUNC_2(VAR_2, VAR_4);







  }





  FUNC_7();

  if (&FUNC_12 != ((void*)0))
   FUNC_12();

  FUNC_5( 0);

  FUNC_0(0, 0);
 } else {

  if (VAR_7 == 1 && VAR_0.mr_op != ((void*)0) &&
      VAR_0.mr_op->reinit != ((void*)0))
   VAR_0.mr_op->reinit(&VAR_0);
 }

 return (VAR_7);
}
