
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int ppi_nr; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int,int,int ) ;
 int * VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_8;

 if (!FUNC_2())
  return;

 if (FUNC_1() && !FUNC_0()) {
  FUNC_4("SCR_EL3.FIQ is cleared, cannot enable use of pseudo-NMIs\n");
  return;
 }

 VAR_5 = FUNC_3(VAR_3.ppi_nr, sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_3.ppi_nr; VAR_8++)
  FUNC_5(&VAR_5[VAR_8], 0);

 FUNC_6(&VAR_7);

 if (FUNC_7(&VAR_6))
  VAR_4.flags |= VAR_1;
 else
  VAR_2.flags |= VAR_1;
}
