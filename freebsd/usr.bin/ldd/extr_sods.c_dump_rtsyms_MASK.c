
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long nz_size; int nlist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_0 ;
 unsigned long VAR_1 ;
 char FUNC_2 (unsigned long) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
    unsigned long VAR_3;

    FUNC_1("  Run-time symbols:\n");
    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
 FUNC_1("    %6lu%c ", VAR_3, VAR_2[VAR_3] ? '*' : ' ');
 FUNC_0(&VAR_0[VAR_3].nlist);
 FUNC_1("/%-5ld %s\n", VAR_0[VAR_3].nz_size, FUNC_2(VAR_3));
    }
}
