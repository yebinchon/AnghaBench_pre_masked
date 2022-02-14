
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sod {int sod_major; int sod_minor; long sod_next; scalar_t__ sod_library; scalar_t__ sod_name; } ;
struct TYPE_2__ {long sdt_sods; long sdt_paths; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
    long VAR_3;
    long VAR_4;

    if (VAR_0 == ((void*)0))
 return;

    VAR_3 = VAR_1->sdt_sods;
    FUNC_1("  Shared object dependencies:\n");
    while (VAR_3 != 0) {
      const struct sod *VAR_5 = (const struct sod *) FUNC_0((VAR_2 + VAR_3));
 const char *VAR_6 = (const char *) (VAR_2 + VAR_5->sod_name);

 if (VAR_5->sod_library)
     FUNC_1("    -l%-16s version %d.%d\n", VAR_6, VAR_5->sod_major,
  VAR_5->sod_minor);
 else
     FUNC_1("    %s\n", VAR_6);
 VAR_3 = VAR_5->sod_next;
    }
    VAR_4 = VAR_1->sdt_paths;
    FUNC_1("  Shared object additional paths:\n");
    if (VAR_4 != 0) {
 FUNC_1("    %s\n", (const char *)(VAR_2 + VAR_4));
    } else {
 FUNC_1("    (none)\n");
    }
}
