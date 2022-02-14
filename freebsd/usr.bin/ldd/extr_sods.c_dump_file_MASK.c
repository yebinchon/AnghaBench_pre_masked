
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; int st_size; } ;
struct section_dispatch_table {int sdt_rel; int sdt_hash; int sdt_nzlist; int sdt_strings; } ;
struct relocation_info {int dummy; } ;
struct nzlist {int dummy; } ;
struct nlist {int dummy; } ;
struct exec {int a_syms; scalar_t__ a_entry; int a_trsize; int a_drsize; scalar_t__ a_bss; scalar_t__ a_data; scalar_t__ a_text; scalar_t__ a_midmag; } ;
struct TYPE_2__ {scalar_t__ d_sdt; } ;
struct _dynamic {long d_version; TYPE_1__ d_un; } ;
typedef scalar_t__ caddr_t ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct exec const) ;
 scalar_t__ FUNC_2 (struct exec const) ;
 int FUNC_3 (struct exec const) ;
 int FUNC_4 (struct exec const) ;
 scalar_t__ FUNC_5 (struct exec const) ;
 scalar_t__ FUNC_6 (struct exec const) ;
 int FUNC_7 (struct exec const) ;
 int FUNC_8 (struct exec const) ;
 int FUNC_9 (struct exec const) ;
 scalar_t__ FUNC_10 (struct exec const) ;
 int FUNC_11 (struct exec const) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int,int) ;
 int FUNC_15 (int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_16 (char*,struct relocation_info const*,int,int ,unsigned char*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 struct _dynamic const* VAR_9 ;
 int VAR_10 ;
 struct exec const* VAR_11 ;
 void* VAR_12 ;
 int FUNC_21 (unsigned char*) ;
 scalar_t__ FUNC_22 (int ,int ,int ,int ,int,int ) ;
 int FUNC_23 (scalar_t__,int ) ;
 int FUNC_24 (char const*,int ,int ) ;
 long VAR_13 ;
 int FUNC_25 (char*,...) ;
 struct relocation_info const* VAR_14 ;
 int VAR_15 ;
 struct relocation_info const* VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 struct nzlist const* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned char* VAR_22 ;
 struct section_dispatch_table const* VAR_23 ;
 int FUNC_26 (char const*,struct stat*) ;
 void* VAR_24 ;
 struct nlist const* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned char* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int FUNC_27 (char*,char const*) ;

void
FUNC_28(const char *VAR_31)
{
    int VAR_32;
    struct stat VAR_33;
    caddr_t VAR_34;

    if (FUNC_26(VAR_31, &VAR_33) == -1) {
 FUNC_27("cannot stat \"%s\"", VAR_31);
 ++VAR_10;
 return;
    }

    if ((VAR_33.st_mode & VAR_5) != VAR_6) {
 FUNC_27("\"%s\" is not a regular file", VAR_31);
 ++VAR_10;
 return;
    }

    if ((VAR_32 = FUNC_24(VAR_31, VAR_2, 0)) == -1) {
 FUNC_27("cannot open \"%s\"", VAR_31);
 ++VAR_10;
 return;
    }

    VAR_34 = FUNC_22(0, VAR_33.st_size, VAR_4, VAR_1, VAR_32, 0);
    if (VAR_34 == (caddr_t) -1) {
 FUNC_27("cannot mmap \"%s\"", VAR_31);
 ++VAR_10;
 FUNC_15(VAR_32);
 return;
    }

    FUNC_15(VAR_32);

    VAR_12 = (const char *) VAR_34;

    if (FUNC_0(*(const Elf32_Ehdr*) FUNC_12(VAR_12))) {
 FUNC_27("%s: this is an ELF program; use readelf to examine", VAR_31);
 ++VAR_10;
 FUNC_23(VAR_34, VAR_33.st_size);
 return;
    }

    VAR_11 = (const struct exec *) FUNC_12(VAR_12);

    FUNC_25("%s: a_midmag = 0x%lx\n", VAR_31, (long)VAR_11->a_midmag);
    FUNC_25("  magic = 0x%lx = 0%lo, netmagic = 0x%lx = 0%lo\n",
 (long)FUNC_5(*VAR_11), (long)FUNC_5(*VAR_11),
 (long)FUNC_6(*VAR_11), (long)FUNC_6(*VAR_11));

    if (FUNC_1(*VAR_11)) {
 FUNC_27("%s: bad magic number", VAR_31);
 ++VAR_10;
 FUNC_23(VAR_34, VAR_33.st_size);
 return;
    }

    FUNC_25("  a_text   = 0x%lx\n", (long)VAR_11->a_text);
    FUNC_25("  a_data   = 0x%lx\n", (long)VAR_11->a_data);
    FUNC_25("  a_bss    = 0x%lx\n", (long)VAR_11->a_bss);
    FUNC_25("  a_syms   = 0x%lx\n", (long)VAR_11->a_syms);
    FUNC_25("  a_entry  = 0x%lx\n", (long)VAR_11->a_entry);
    FUNC_25("  a_trsize = 0x%lx\n", (long)VAR_11->a_trsize);
    FUNC_25("  a_drsize = 0x%lx\n", (long)VAR_11->a_drsize);

    VAR_30 = VAR_12 + FUNC_11(*VAR_11);
    VAR_8 = VAR_12 + FUNC_3(*VAR_11);
    VAR_14 = (const struct relocation_info *)
 FUNC_12(VAR_12 + FUNC_7(*VAR_11));
    VAR_25 = (const struct nlist *) FUNC_12(VAR_12 + FUNC_9(*VAR_11));
    VAR_24 = VAR_12 + FUNC_8(*VAR_11);

    VAR_15 = (VAR_11->a_trsize + VAR_11->a_drsize) / sizeof VAR_14[0];
    FUNC_13(VAR_15 * sizeof VAR_14[0] == VAR_11->a_trsize + VAR_11->a_drsize);
    VAR_26 = VAR_11->a_syms / sizeof VAR_25[0];
    FUNC_13(VAR_26 * sizeof VAR_25[0] == VAR_11->a_syms);

    if (VAR_26 != 0) {
 VAR_28 = (unsigned char *) FUNC_14(VAR_26, sizeof(unsigned char));
 FUNC_13(VAR_28 != ((void*)0));
    }

    FUNC_25("  Entry = 0x%lx\n", (long)VAR_11->a_entry);
    FUNC_25("  Text offset = %x, address = %lx\n", FUNC_11(*VAR_11),
 (long)FUNC_10(*VAR_11));
    FUNC_25("  Data offset = %lx, address = %lx\n", (long)FUNC_3(*VAR_11),
 (long)FUNC_2(*VAR_11));
    VAR_29 = VAR_30;
    VAR_7 = VAR_8;
    VAR_13 = 0;

    if (VAR_11->a_entry >= VAR_3) {





 VAR_29 -= VAR_3;
 VAR_7 -= VAR_3;
 VAR_13 = VAR_3;
 FUNC_25("  Program, origin = %lx\n", VAR_13);
    } else if (FUNC_4(*VAR_11) & VAR_0)
 FUNC_25("  Shared library, origin = %lx\n", VAR_13);
    else
 FUNC_25("  Object file, origin = %lx\n", VAR_13);

    if (FUNC_4(*VAR_11) & VAR_0) {
 VAR_9 = (const struct _dynamic *) FUNC_12(VAR_8);
 FUNC_25("  Dynamic version = %d\n", VAR_9->d_version);

 VAR_23 = (const struct section_dispatch_table *)
     FUNC_12(VAR_29 + (unsigned long) VAR_9->d_un.d_sdt);

 VAR_16 = (const struct relocation_info *)
     FUNC_12(VAR_29 + VAR_23->sdt_rel);
 VAR_17 = (VAR_23->sdt_hash - VAR_23->sdt_rel) / sizeof VAR_16[0];
 FUNC_13(VAR_17 * sizeof VAR_16[0] ==
     (size_t)(VAR_23->sdt_hash - VAR_23->sdt_rel));

 VAR_19 = (const struct nzlist *)
     FUNC_12(VAR_29 + VAR_23->sdt_nzlist);
 VAR_20 = (VAR_23->sdt_strings - VAR_23->sdt_nzlist) /
     sizeof VAR_19[0];
 FUNC_13(VAR_20 * sizeof VAR_19[0] ==
     (size_t)(VAR_23->sdt_strings - VAR_23->sdt_nzlist));

 if (VAR_20 != 0) {
     VAR_22 = (unsigned char *) FUNC_14(VAR_20,
  sizeof(unsigned char));
     FUNC_13(VAR_22 != ((void*)0));
 }

 VAR_18 = VAR_29 + VAR_23->sdt_strings;
    }

    FUNC_18();
    FUNC_19();
    FUNC_16("Relocations", VAR_14, VAR_15, VAR_27, VAR_28);
    FUNC_20();

    FUNC_16("Run-time relocations", VAR_16, VAR_17, VAR_21,
 VAR_22);
    FUNC_17();

    if (VAR_22 != ((void*)0)) {
 FUNC_21(VAR_22);
 VAR_22 = ((void*)0);
    }
    if (VAR_28 != ((void*)0)) {
 FUNC_21(VAR_28);
 VAR_28 = ((void*)0);
    }
    FUNC_23(VAR_34, VAR_33.st_size);
}
