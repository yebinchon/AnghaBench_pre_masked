
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_map_entry_t ;
typedef int uintmax_t ;
struct sseg_closure {int count; scalar_t__ size; } ;
struct sbuf {int dummy; } ;
struct ptrace_io_desc {char* piod_addr; int piod_len; int * piod_offs; int piod_op; } ;
typedef int ssize_t ;
typedef int pid_t ;
typedef int * caddr_t ;
typedef int buf ;
struct TYPE_2__ {int p_filesz; scalar_t__ p_vaddr; } ;
typedef int Elf_Shdr ;
typedef TYPE_1__ Elf_Phdr ;
typedef int Elf_Ehdr ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct sseg_closure*) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,int ,void*,size_t,size_t,size_t,int) ;
 int FUNC_3 (int ,struct sbuf*,size_t*) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (struct sbuf*) ;
 int FUNC_10 (struct sbuf*) ;
 int FUNC_11 (struct sbuf*,int,size_t,int ) ;
 scalar_t__ FUNC_12 (struct sbuf*) ;
 size_t FUNC_13 (struct sbuf*) ;
 struct sbuf* FUNC_14 () ;
 int FUNC_15 (struct sbuf*,int ) ;
 int FUNC_16 (struct sbuf*,int*) ;
 int FUNC_17 (int ,int *,int ) ;
 int FUNC_18 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_19(int VAR_10, int VAR_11, pid_t VAR_12)
{
 vm_map_entry_t VAR_13;
 struct sseg_closure VAR_14;
 struct sbuf *VAR_15;
 void *VAR_16;
 size_t VAR_17, VAR_18, VAR_19;
 ssize_t VAR_20, VAR_21;
 Elf_Phdr *VAR_22;
 int VAR_23;


 VAR_8 = VAR_12;
 if (FUNC_0(VAR_6) != 0)
  FUNC_4(1, "atexit");
 VAR_7 = 0;
 FUNC_7(VAR_3, VAR_12, ((void*)0), 0);
 if (VAR_7)
  FUNC_4(1, "PT_ATTACH");
 if (FUNC_17(VAR_12, &VAR_9, 0) == -1)
  FUNC_4(1, "waitpid");


 VAR_13 = FUNC_8(VAR_12);


 VAR_14.count = 0;
 VAR_14.size = 0;
 FUNC_1(VAR_13, VAR_5, &VAR_14);




 VAR_15 = FUNC_14();
 VAR_17 = sizeof(Elf_Ehdr) + sizeof(Elf_Phdr) * (1 + VAR_14.count);
 if (VAR_14.count + 1 >= VAR_2)
  VAR_17 += sizeof(Elf_Shdr);

 FUNC_16(VAR_15, ((void*)0));

 FUNC_16(VAR_15, &VAR_21);
 FUNC_15(VAR_15, 0);
 FUNC_11(VAR_15, VAR_21, VAR_17, 0);

 FUNC_3(VAR_12, VAR_15, &VAR_18);

 FUNC_11(VAR_15, -1, VAR_0, 0);
 if (FUNC_12(VAR_15) != 0)
  FUNC_4(1, "sbuf_finish");
 VAR_16 = FUNC_9(VAR_15);
 VAR_19 = FUNC_13(VAR_15);

 FUNC_2(VAR_10, VAR_12, VAR_13, VAR_16, VAR_17, VAR_18, VAR_19, VAR_14.count);

 VAR_20 = FUNC_18(VAR_11, VAR_16, VAR_19);
 if (VAR_20 == -1)
  FUNC_4(1, "write");
 if (VAR_20 < VAR_19)
              FUNC_5(1, "short write");


 VAR_22 = (Elf_Phdr *)((char *)VAR_16 + sizeof(Elf_Ehdr)) + 1;
 for (VAR_23 = 0; VAR_23 < VAR_14.count; VAR_23++) {
  struct ptrace_io_desc VAR_24;
  uintmax_t VAR_25 = VAR_22->p_filesz;

  VAR_24.piod_op = VAR_1;
  VAR_24.piod_offs = (caddr_t)(uintptr_t)VAR_22->p_vaddr;
  while (VAR_25 > 0) {
   char VAR_26[8*1024];
   size_t VAR_27;
   ssize_t VAR_28;

   if (VAR_25 > sizeof(VAR_26))
    VAR_27 = sizeof VAR_26;
   else
    VAR_27 = VAR_25;
   VAR_24.piod_addr = VAR_26;
   VAR_24.piod_len = VAR_27;
   FUNC_7(VAR_4, VAR_12, (caddr_t)&VAR_24, 0);
   VAR_28 = VAR_24.piod_len;
   if ((size_t)VAR_28 < VAR_27)
    FUNC_5(1, "short read wanted %zu, got %zd",
        VAR_27, VAR_28);
   VAR_28 = FUNC_18(VAR_11, VAR_26, VAR_27);
   if (VAR_28 == -1)
    FUNC_4(1, "write of segment %d failed", VAR_23);
   if ((size_t)VAR_28 != VAR_27)
    FUNC_5(1, "short write");
   VAR_25 -= VAR_27;
   VAR_24.piod_offs += VAR_28;
  }
  VAR_22++;
 }
 FUNC_10(VAR_15);
 FUNC_6(VAR_13);
}
