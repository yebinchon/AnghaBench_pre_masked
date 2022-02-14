
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct elf_file {int * ef_ops; TYPE_1__* ef_ef; } ;
typedef TYPE_1__* elf_file_t ;
struct TYPE_14__ {scalar_t__* e_ident; scalar_t__ e_version; scalar_t__ e_machine; int e_phentsize; int e_phnum; scalar_t__ e_type; int e_phoff; } ;
struct TYPE_13__ {int p_type; int p_filesz; int p_offset; } ;
struct TYPE_12__ {int ef_verbose; int ef_fd; int ef_nsegs; int ef_type; int ef_dyn; TYPE_2__** ef_segs; TYPE_2__* ef_ph; int ef_hdr; struct elf_file* ef_efile; int ef_name; } ;
typedef TYPE_2__ Elf_Phdr ;
typedef TYPE_3__ Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_13 ;
 int VAR_14 ;



 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_15 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int,void**) ;
 int VAR_16 ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (char const*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,TYPE_3__*,int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,char const*) ;

int
FUNC_13(const char *VAR_17, struct elf_file *VAR_18, int VAR_19)
{
 elf_file_t VAR_20;
 Elf_Ehdr *VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24, VAR_25;
 int VAR_26;
 Elf_Phdr *VAR_27, *VAR_28, *VAR_29;

 if (VAR_17 == ((void*)0))
  return (VAR_3);
 if ((VAR_22 = FUNC_8(VAR_17, VAR_14)) == -1)
  return (VAR_16);

 VAR_20 = FUNC_7(sizeof(*VAR_20));
 if (VAR_20 == ((void*)0)) {
  FUNC_2(VAR_22);
  return (VAR_16);
 }

 VAR_18->ef_ef = VAR_20;
 VAR_18->ef_ops = &VAR_15;

 FUNC_1(VAR_20, sizeof(*VAR_20));
 VAR_20->ef_verbose = VAR_19;
 VAR_20->ef_fd = VAR_22;
 VAR_20->ef_name = FUNC_11(VAR_17);
 VAR_20->ef_efile = VAR_18;
 VAR_21 = (Elf_Ehdr *)&VAR_20->ef_hdr;
 do {
  VAR_25 = FUNC_10(VAR_22, VAR_21, sizeof(*VAR_21));
  VAR_23 = VAR_0;
  if (VAR_25 != sizeof(*VAR_21))
   break;
  if (!FUNC_0(*VAR_21))
   break;
  if (VAR_21->e_ident[VAR_4] != VAR_7 ||
      VAR_21->e_ident[VAR_5] != VAR_8 ||
      VAR_21->e_ident[VAR_6] != VAR_12 ||
      VAR_21->e_version != VAR_12 ||
      VAR_21->e_machine != VAR_9 ||
      VAR_21->e_phentsize != sizeof(Elf_Phdr))
   break;
  VAR_24 = VAR_21->e_phnum * sizeof(Elf_Phdr);
  if (FUNC_6(VAR_20, VAR_21->e_phoff, VAR_24,
      (void **)&VAR_20->ef_ph) != 0)
   break;
  VAR_27 = VAR_20->ef_ph;
  VAR_29 = VAR_27 + VAR_21->e_phnum;
  VAR_26 = 0;
  VAR_28 = ((void*)0);
  while (VAR_27 < VAR_29) {
   if (VAR_19 > 1)
    FUNC_5(VAR_27);
   switch (VAR_27->p_type) {
   case 129:
    if (VAR_26 < VAR_13)
     VAR_20->ef_segs[VAR_26] = VAR_27;
    VAR_26++;
    break;
   case 128:
    break;
   case 130:
    VAR_28 = VAR_27;
    break;
   }
   VAR_27++;
  }
  if (VAR_19 > 1)
   FUNC_9("\n");
  if (VAR_28 == ((void*)0)) {
   FUNC_12("Skipping %s: not dynamically-linked",
       VAR_17);
   break;
  } else if (VAR_26 > VAR_13) {
   FUNC_12("%s: too many segments", VAR_17);
   break;
  }
  VAR_20->ef_nsegs = VAR_26;
  if (FUNC_6(VAR_20, VAR_28->p_offset,
   VAR_28->p_filesz, (void **)&VAR_20->ef_dyn) != 0) {
   FUNC_9("ef_read_entry failed\n");
   break;
  }
  VAR_23 = FUNC_4(VAR_20);
  if (VAR_23 != 0)
   break;
  if (VAR_21->e_type == VAR_10) {
   VAR_20->ef_type = VAR_2;
   VAR_23 = 0;
  } else if (VAR_21->e_type == VAR_11) {
   VAR_20->ef_type = VAR_1;
   VAR_23 = 0;
  } else
   break;
 } while(0);
 if (VAR_23 != 0)
  FUNC_3(VAR_20);
 return (VAR_23);
}
