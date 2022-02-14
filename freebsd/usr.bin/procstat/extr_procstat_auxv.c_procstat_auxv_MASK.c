
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef size_t u_int ;
struct procstat {int dummy; } ;
struct kinfo_proc {int ki_pid; char* ki_comm; } ;
typedef int prefix ;
struct TYPE_5__ {int a_val; int a_ptr; } ;
struct TYPE_6__ {int a_type; TYPE_1__ a_un; } ;
typedef TYPE_2__ Elf_Auxinfo ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct procstat*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (struct procstat*,struct kinfo_proc*,size_t*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*,int,char*) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(struct procstat *VAR_3, struct kinfo_proc *VAR_4)
{
 Elf_Auxinfo *VAR_5;
 u_int VAR_6, VAR_7;
 static char VAR_8[256];

 if ((VAR_2 & VAR_0) == 0)
  FUNC_3("{T:/%5s %-16s %-16s %-16s}\n", "PID", "COMM", "AUXV",
      "VALUE");

 VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_6);
 if (VAR_5 == ((void*)0))
  return;
        FUNC_2(VAR_8, sizeof(VAR_8), "%5d %-16s", VAR_4->ki_pid,
            VAR_4->ki_comm);

 FUNC_3("{e:process_id/%5d/%d}{e:command/%-16s/%s}", VAR_4->ki_pid,
     VAR_4->ki_comm);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  switch(VAR_5[VAR_7].a_type) {
  case 138:
   return;
  case 141:
   break;
  case 147:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_EXECFD/%ld}\n",
       VAR_8, "AT_EXECFD", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 133:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_PHDR/%p}\n",
       VAR_8, "AT_PHDR", VAR_5[VAR_7].a_un.a_ptr);
   break;
  case 132:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_PHENT/%ld}\n",
       VAR_8, "AT_PHENT", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 131:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_PHNUM/%ld}\n",
       VAR_8, "AT_PHNUM", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 134:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_PAGESZ/%ld}\n",
       VAR_8, "AT_PAGESZ", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 154:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_BASE/%p}\n",
       VAR_8, "AT_BASE", VAR_5[VAR_7].a_un.a_ptr);
   break;
  case 145:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_FLAGS/%#lx}\n",
       VAR_8, "AT_FLAGS", (u_long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 149:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_ENTRY/%p}\n",
       VAR_8, "AT_ENTRY", VAR_5[VAR_7].a_un.a_ptr);
   break;

  case 139:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_NOTELF/%ld}\n",
       VAR_8, "AT_NOTELF", (long)VAR_5[VAR_7].a_un.a_val);
   break;


  case 128:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_UID/%ld}\n",
       VAR_8, "AT_UID", (long)VAR_5[VAR_7].a_un.a_val);
   break;


  case 148:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_EUID/%ld}\n",
       VAR_8, "AT_EUID", (long)VAR_5[VAR_7].a_un.a_val);
   break;


  case 144:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_GID/%ld}\n",
       VAR_8, "AT_GID", (long)VAR_5[VAR_7].a_un.a_val);
   break;


  case 151:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_EGID/%ld}\n",
       VAR_8, "AT_EGID", (long)VAR_5[VAR_7].a_un.a_val);
   break;

  case 146:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_EXECPATH/%p}\n",
       VAR_8, "AT_EXECPATH", VAR_5[VAR_7].a_un.a_ptr);
   break;
  case 153:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_CANARY/%p}\n",
       VAR_8, "AT_CANARY", VAR_5[VAR_7].a_un.a_ptr);
   break;
  case 152:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_CANARYLEN/%ld}\n",
       VAR_8, "AT_CANARYLEN", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 137:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_OSRELDATE/%ld}\n",
       VAR_8, "AT_OSRELDATE", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 140:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_NCPUS/%ld}\n",
       VAR_8, "AT_NCPUS", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 136:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_PAGESIZES/%p}\n",
       VAR_8, "AT_PAGESIZES", VAR_5[VAR_7].a_un.a_ptr);
   break;
  case 135:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}"
       "{:AT_PAGESIZESLEN/%ld}\n", VAR_8,
       "AT_PAGESIZESLEN", (long)VAR_5[VAR_7].a_un.a_val);
   break;
  case 130:
   if ((VAR_5[VAR_7].a_un.a_val & VAR_1) != 0)
    FUNC_3("{dw:/%s}{Lw:/%-16s/%s}"
        "{:AT_STACKPROT/%s}\n", VAR_8,
        "AT_STACKPROT", "EXECUTABLE");
   else
    FUNC_3("{dw:/%s}{Lw:/%-16s/%s}"
        "{:AT_STACKPROT/%s}\n", VAR_8,
        "AT_STACKPROT", "NONEXECUTABLE");
   break;

  case 129:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_TIMEKEEP/%p}\n",
       VAR_8, "AT_TIMEKEEP", VAR_5[VAR_7].a_un.a_ptr);
   break;


  case 150:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_EHDRFLAGS/%#lx}\n",
       VAR_8, "AT_EHDRFLAGS", (u_long)VAR_5[VAR_7].a_un.a_val);
   break;


  case 143:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_HWCAP/%#lx}\n",
       VAR_8, "AT_HWCAP", (u_long)VAR_5[VAR_7].a_un.a_val);
   break;


  case 142:
   FUNC_3("{dw:/%s}{Lw:/%-16s/%s}{:AT_HWCAP2/%#lx}\n",
       VAR_8, "AT_HWCAP2", (u_long)VAR_5[VAR_7].a_un.a_val);
   break;

  default:
   FUNC_3("{dw:/%s}{Lw:/%16ld/%ld}{:UNKNOWN/%#lx}\n",
       VAR_8, VAR_5[VAR_7].a_type, VAR_5[VAR_7].a_un.a_val);
   break;
  }
 }
 FUNC_3("\n");
 FUNC_0(VAR_3, VAR_5);
}
