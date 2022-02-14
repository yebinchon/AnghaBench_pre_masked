
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ d_sdt; } ;
struct TYPE_6__ {TYPE_1__ d_un; scalar_t__ d_debug; } ;
struct TYPE_5__ {unsigned long sdt_rel; unsigned long sdt_hash; unsigned long sdt_nzlist; unsigned long sdt_strings; unsigned long sdt_got; unsigned long sdt_plt; unsigned long sdt_plt_sz; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 TYPE_3__* VAR_1 ;
 int * VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_3 (char*,unsigned long) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void
FUNC_4(void)
{
    FUNC_3("  Text segment starts at address %lx\n", VAR_3 + FUNC_2(*VAR_2));
    if (FUNC_1(*VAR_2) & VAR_0) {
 FUNC_3("    rel starts at %lx\n", VAR_4->sdt_rel);
 FUNC_3("    hash starts at %lx\n", VAR_4->sdt_hash);
 FUNC_3("    nzlist starts at %lx\n", VAR_4->sdt_nzlist);
 FUNC_3("    strings starts at %lx\n", VAR_4->sdt_strings);
    }

    FUNC_3("  Data segment starts at address %lx\n", VAR_3 + FUNC_0(*VAR_2));
    if (FUNC_1(*VAR_2) & VAR_0) {
 FUNC_3("    _dynamic starts at %lx\n", VAR_3 + FUNC_0(*VAR_2));
 FUNC_3("    so_debug starts at %lx\n", (unsigned long) VAR_1->d_debug);
 FUNC_3("    sdt starts at %lx\n", (unsigned long) VAR_1->d_un.d_sdt);
 FUNC_3("    got starts at %lx\n", VAR_4->sdt_got);
 FUNC_3("    plt starts at %lx\n", VAR_4->sdt_plt);
 FUNC_3("    rest of stuff starts at %lx\n",
     VAR_4->sdt_plt + VAR_4->sdt_plt_sz);
    }
}
