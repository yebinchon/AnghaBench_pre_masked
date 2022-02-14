
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct PROCENTRY {int dummy; } ;
struct IOAPICENTRY {int dummy; } ;
struct INTENTRY {int dummy; } ;
struct BUSENTRY {int dummy; } ;
typedef TYPE_1__* proc_entry_ptr ;
typedef TYPE_2__* mpfps_t ;
typedef TYPE_2__* mpcth_t ;
struct TYPE_8__ {scalar_t__ config_type; int entry_count; int pap; } ;
struct TYPE_7__ {int cpu_flags; int apic_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char,...) ;

int
FUNC_7(void)
{
    mpfps_t VAR_1;
    mpcth_t VAR_2;
    char *VAR_3;
    proc_entry_ptr VAR_4;
    int VAR_5, VAR_6;

    if (!FUNC_5())
 return -1;

    VAR_1 = FUNC_2();
    VAR_2 = ((void*)0);
    if (VAR_1 == ((void*)0)) {
 VAR_5 = 0;
    } else if (VAR_1->config_type != 0) {




     VAR_5 = 2;
    } else {
 VAR_5 = 0;
 VAR_2 = FUNC_1(FUNC_0(VAR_1->pap));
 if (VAR_2 != ((void*)0)) {
     VAR_3 = (char *)(VAR_2 + 1);
     for (VAR_6 = 0; VAR_6 < VAR_2->entry_count; VAR_6++) {
  switch (*VAR_3) {
  case 0:
      VAR_3 += sizeof(struct PROCENTRY);
      VAR_4 = (proc_entry_ptr) VAR_3;
      FUNC_6("MPTable: Found CPU APIC ID %d %s",
   VAR_4->apic_id,
   VAR_4->cpu_flags & VAR_0 ?
    "enabled" : "disabled");
      if (VAR_4->cpu_flags & VAR_0)
   VAR_5++;
      break;
  case 1:
      VAR_3 += sizeof(struct BUSENTRY);
      break;
  case 2:
      VAR_3 += sizeof(struct IOAPICENTRY);
      break;
  case 3:
  case 4:
      VAR_3 += sizeof(struct INTENTRY);
      break;
  default:
      FUNC_6("unknown mptable entry type (%d)", *VAR_3);
      goto done;
  }
     }
 done:
     ;
 }
    }
    FUNC_4();
    if (VAR_2 != ((void*)0))
 FUNC_3(VAR_2);
    if (VAR_1 != ((void*)0))
 FUNC_3(VAR_1);

    return VAR_5;
}
