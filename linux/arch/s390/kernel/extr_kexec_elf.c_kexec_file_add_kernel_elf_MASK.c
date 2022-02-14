
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s390_load_data {scalar_t__ memsz; int report; void* parm; void* kernel_mem; void* kernel_buf; } ;
struct kimage {scalar_t__ type; void* kernel_buf; } ;
struct kexec_buf {scalar_t__ memsz; void* buffer; void* mem; int bufsz; struct kimage* image; } ;
struct TYPE_6__ {scalar_t__ start; } ;
struct TYPE_5__ {scalar_t__ e_entry; int e_phoff; int e_phnum; } ;
struct TYPE_4__ {scalar_t__ p_type; int p_offset; scalar_t__ p_paddr; scalar_t__ p_memsz; int p_align; int p_filesz; } ;
typedef TYPE_1__ Elf_Phdr ;
typedef TYPE_2__ Elf_Ehdr ;
typedef scalar_t__ Elf_Addr ;


 void* FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_1 (int ,struct kexec_buf*,int,int ) ;
 int FUNC_2 (struct kexec_buf*) ;

__attribute__((used)) static int FUNC_3(struct kimage *VAR_9,
         struct s390_load_data *VAR_10)
{
 struct kexec_buf VAR_11;
 const Elf_Ehdr *VAR_12;
 const Elf_Phdr *VAR_13;
 Elf_Addr VAR_14;
 void *VAR_15;
 int VAR_16, VAR_17;

 VAR_15 = VAR_9->kernel_buf;
 VAR_12 = (Elf_Ehdr *)VAR_15;
 VAR_11.image = VAR_9;
 if (VAR_9->type == VAR_4)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_12->e_entry;

 VAR_13 = (void *)VAR_12 + VAR_12->e_phoff;
 for (VAR_16 = 0; VAR_16 < VAR_12->e_phnum; VAR_16++, VAR_13++) {
  if (VAR_13->p_type != VAR_6)
   continue;

  VAR_11.buffer = VAR_15 + VAR_13->p_offset;
  VAR_11.bufsz = VAR_13->p_filesz;

  VAR_11.mem = FUNC_0(VAR_13->p_paddr, VAR_13->p_align);
  if (VAR_9->type == VAR_4)
   VAR_11.mem += VAR_8.start;
  VAR_11.memsz = VAR_13->p_memsz;
  VAR_10->memsz = FUNC_0(VAR_10->memsz, VAR_13->p_align) + VAR_11.memsz;

  if (VAR_14 - VAR_13->p_paddr < VAR_13->p_memsz) {
   VAR_10->kernel_buf = VAR_11.buffer;
   VAR_10->kernel_mem = VAR_11.mem;
   VAR_10->parm = VAR_11.buffer + VAR_5;
  }

  FUNC_1(VAR_10->report, &VAR_11,
      VAR_2 |
      VAR_3,
      VAR_1);
  VAR_17 = FUNC_2(&VAR_11);
  if (VAR_17)
   return VAR_17;
 }

 return VAR_10->memsz ? 0 : -VAR_0;
}
