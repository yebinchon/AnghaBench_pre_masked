
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long dtb_mem; void* dtb; } ;
struct kimage {TYPE_1__ arch; } ;
struct kexec_buf {unsigned long buf_min; char* buffer; unsigned long bufsz; unsigned long mem; unsigned long memsz; int top_down; scalar_t__ buf_max; scalar_t__ buf_align; struct kimage* image; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kimage*,unsigned long,unsigned long,char*,void**) ;
 unsigned long FUNC_1 (void*) ;
 int FUNC_2 (struct kexec_buf*) ;
 int FUNC_3 (char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned long,scalar_t__) ;
 int FUNC_6 (void*) ;

int FUNC_7(struct kimage *VAR_4,
   unsigned long VAR_5,
   unsigned long VAR_6,
   char *VAR_7, unsigned long VAR_8,
   char *VAR_9)
{
 struct kexec_buf VAR_10;
 void *VAR_11 = ((void*)0);
 unsigned long VAR_12 = 0, VAR_13;
 int VAR_14 = 0;

 VAR_10.image = VAR_4;

 VAR_10.buf_min = VAR_5 + VAR_6;


 if (VAR_7) {
  VAR_10.buffer = VAR_7;
  VAR_10.bufsz = VAR_8;
  VAR_10.mem = VAR_0;
  VAR_10.memsz = VAR_8;
  VAR_10.buf_align = 0;

  VAR_10.buf_max = FUNC_5(VAR_5, VAR_1)
      + (unsigned long)VAR_1 * 32;
  VAR_10.top_down = 0;

  VAR_14 = FUNC_2(&VAR_10);
  if (VAR_14)
   goto out_err;
  VAR_12 = VAR_10.mem;

  FUNC_3("Loaded initrd at 0x%lx bufsz=0x%lx memsz=0x%lx\n",
    VAR_12, VAR_8, VAR_8);
 }


 VAR_14 = FUNC_0(VAR_4, VAR_12, VAR_8, VAR_9, &VAR_11);
 if (VAR_14) {
  FUNC_4("Preparing for new dtb failed\n");
  goto out_err;
 }

 VAR_13 = FUNC_1(VAR_11);
 VAR_10.buffer = VAR_11;
 VAR_10.bufsz = VAR_13;
 VAR_10.mem = VAR_0;
 VAR_10.memsz = VAR_13;

 VAR_10.buf_align = VAR_2;
 VAR_10.buf_max = VAR_3;
 VAR_10.top_down = 1;

 VAR_14 = FUNC_2(&VAR_10);
 if (VAR_14)
  goto out_err;
 VAR_4->arch.dtb = VAR_11;
 VAR_4->arch.dtb_mem = VAR_10.mem;

 FUNC_3("Loaded dtb at 0x%lx bufsz=0x%lx memsz=0x%lx\n",
   VAR_10.mem, VAR_13, VAR_13);

 return 0;

out_err:
 FUNC_6(VAR_11);
 return VAR_14;
}
