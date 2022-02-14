
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {int dummy; } ;
struct kexec_elf_info {void* buffer; TYPE_1__* proghdrs; } ;
struct kexec_buf {int top_down; void* mem; char* buffer; unsigned long bufsz; unsigned long memsz; void* buf_align; int buf_max; int buf_min; struct kimage* image; } ;
struct elfhdr {int dummy; } ;
struct TYPE_2__ {int p_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ,void*,unsigned int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct kexec_buf*) ;
 int FUNC_5 (char*,unsigned long,struct elfhdr*,struct kexec_elf_info*) ;
 int FUNC_6 (struct kimage*,struct elfhdr*,struct kexec_elf_info*,struct kexec_buf*,unsigned long*) ;
 int FUNC_7 (struct kexec_elf_info*) ;
 int FUNC_8 (struct kimage*,struct kexec_buf*) ;
 void* FUNC_9 (unsigned int,int ) ;
 int VAR_6 ;
 int FUNC_10 (char*,unsigned long) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct kimage*,void*,unsigned long,unsigned long,char*) ;
 int FUNC_13 (struct kimage*,void const*,void*,unsigned long,unsigned long) ;

__attribute__((used)) static void *FUNC_14(struct kimage *VAR_7, char *VAR_8,
   unsigned long VAR_9, char *VAR_10,
   unsigned long VAR_11, char *VAR_12,
   unsigned long VAR_13)
{
 int VAR_14;
 unsigned int VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17 = 0, VAR_18;
 void *VAR_19;
 const void *VAR_20;
 struct elfhdr VAR_21;
 struct kexec_elf_info VAR_22;
 struct kexec_buf VAR_23 = { .image = VAR_7, .buf_min = 0,
      .buf_max = VAR_6 };
 struct kexec_buf VAR_24 = { .image = VAR_7, .buf_min = 0,
      .buf_max = VAR_6, .top_down = 1,
      .mem = VAR_3 };

 VAR_14 = FUNC_5(VAR_8, VAR_9, &VAR_21, &VAR_22);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_6(VAR_7, &VAR_21, &VAR_22, &VAR_23, &VAR_16);
 if (VAR_14)
  goto out;

 FUNC_10("Loaded the kernel at 0x%lx\n", VAR_16);

 VAR_14 = FUNC_8(VAR_7, &VAR_24);
 if (VAR_14) {
  FUNC_11("Loading purgatory failed.\n");
  goto out;
 }

 FUNC_10("Loaded purgatory at 0x%lx\n", VAR_24.mem);

 if (VAR_10 != ((void*)0)) {
  VAR_23.buffer = VAR_10;
  VAR_23.bufsz = VAR_23.memsz = VAR_11;
  VAR_23.buf_align = VAR_4;
  VAR_23.top_down = 0;
  VAR_23.mem = VAR_3;
  VAR_14 = FUNC_4(&VAR_23);
  if (VAR_14)
   goto out;
  VAR_17 = VAR_23.mem;

  FUNC_10("Loaded initrd at 0x%lx\n", VAR_17);
 }

 VAR_15 = FUNC_3(VAR_5) * 2;
 VAR_19 = FUNC_9(VAR_15, VAR_2);
 if (!VAR_19) {
  FUNC_11("Not enough memory for the device tree.\n");
  VAR_14 = -VAR_1;
  goto out;
 }
 VAR_14 = FUNC_1(VAR_5, VAR_19, VAR_15);
 if (VAR_14 < 0) {
  FUNC_11("Error setting up the new device tree.\n");
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_12(VAR_7, VAR_19, VAR_17, VAR_11, VAR_12);
 if (VAR_14)
  goto out;

 FUNC_2(VAR_19);

 VAR_23.buffer = VAR_19;
 VAR_23.bufsz = VAR_23.memsz = VAR_15;
 VAR_23.buf_align = VAR_4;
 VAR_23.top_down = 1;
 VAR_23.mem = VAR_3;
 VAR_14 = FUNC_4(&VAR_23);
 if (VAR_14)
  goto out;
 VAR_18 = VAR_23.mem;

 FUNC_10("Loaded device tree at 0x%lx\n", VAR_18);

 VAR_20 = VAR_22.buffer + VAR_22.proghdrs[0].p_offset;
 VAR_14 = FUNC_13(VAR_7, VAR_20, VAR_19, VAR_16,
         VAR_18);
 if (VAR_14)
  FUNC_11("Error setting up the purgatory.\n");

out:
 FUNC_7(&VAR_22);


 return VAR_14 ? FUNC_0(VAR_14) : VAR_19;
}
