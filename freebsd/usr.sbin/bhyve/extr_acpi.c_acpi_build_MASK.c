
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_2__ {int offset; int * wsect; } ;


 int FUNC_0 (struct vmctx*,int *,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (struct vmctx*,int *) ;

int
FUNC_4(struct vmctx *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_2 = VAR_6;

 VAR_7 = FUNC_3(VAR_5, &VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);





 if (FUNC_2("BHYVE_ACPI_VERBOSE_IASL"))
  VAR_3 = 1;





 if (FUNC_2("BHYVE_ACPI_KEEPTMPS"))
  VAR_1 = 1;

 VAR_8 = 0;
 VAR_7 = FUNC_1();





 while (!VAR_7 && VAR_0[VAR_8].wsect != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_5, VAR_0[VAR_8].wsect,
       VAR_0[VAR_8].offset);
  VAR_8++;
 }

 return (VAR_7);
}
