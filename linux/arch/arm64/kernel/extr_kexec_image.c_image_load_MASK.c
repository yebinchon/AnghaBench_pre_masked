
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct kimage {scalar_t__ type; int nr_segments; unsigned long start; struct kexec_segment* segment; } ;
struct kexec_segment {unsigned long mem; unsigned long memsz; } ;
struct kexec_buf {int top_down; char* buffer; unsigned long bufsz; unsigned long memsz; int buf_align; int mem; int buf_max; scalar_t__ buf_min; struct kimage* image; } ;
struct arm64_image_header {int text_offset; int image_size; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (void*,int ) ;
 int FUNC_3 (struct kexec_buf*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct kimage*,unsigned long,unsigned long,char*,unsigned long,char*) ;
 int FUNC_6 (char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void *FUNC_11(struct kimage *VAR_12,
    char *VAR_13, unsigned long VAR_14,
    char *VAR_15, unsigned long VAR_16,
    char *VAR_17, unsigned long VAR_18)
{
 struct arm64_image_header *VAR_19;
 u64 VAR_20, VAR_21;
 bool VAR_22, VAR_23;
 struct kexec_buf VAR_24;
 unsigned long VAR_25;
 struct kexec_segment *VAR_26;
 int VAR_27;


 if (VAR_12->type == VAR_9)
  return FUNC_0(-VAR_7);






 VAR_19 = (struct arm64_image_header *)VAR_13;
 if (!VAR_19->image_size)
  return FUNC_0(-VAR_6);


 VAR_20 = FUNC_4(VAR_19->flags);
 VAR_22 = FUNC_2(VAR_20, VAR_0);
 VAR_23 = FUNC_1(VAR_5);
 if ((VAR_22 != VAR_23) && !FUNC_10())
  return FUNC_0(-VAR_6);

 VAR_21 = FUNC_2(VAR_20, VAR_1);
 if (((VAR_21 == VAR_3) &&
   !FUNC_8()) ||
     ((VAR_21 == VAR_4) &&
   !FUNC_9()) ||
     ((VAR_21 == VAR_2) &&
   !FUNC_7()))
  return FUNC_0(-VAR_6);


 VAR_24.image = VAR_12;
 VAR_24.buf_min = 0;
 VAR_24.buf_max = VAR_11;
 VAR_24.top_down = 0;

 VAR_24.buffer = VAR_13;
 VAR_24.bufsz = VAR_14;
 VAR_24.mem = VAR_8;
 VAR_24.memsz = FUNC_4(VAR_19->image_size);
 VAR_25 = FUNC_4(VAR_19->text_offset);
 VAR_24.buf_align = VAR_10;


 VAR_24.memsz += VAR_25;

 VAR_27 = FUNC_3(&VAR_24);
 if (VAR_27)
  return FUNC_0(VAR_27);

 VAR_26 = &VAR_12->segment[VAR_12->nr_segments - 1];
 VAR_26->mem += VAR_25;
 VAR_26->memsz -= VAR_25;
 VAR_12->start = VAR_26->mem;

 FUNC_6("Loaded kernel at 0x%lx bufsz=0x%lx memsz=0x%lx\n",
    VAR_26->mem, VAR_24.bufsz,
    VAR_26->memsz);


 VAR_27 = FUNC_5(VAR_12,
    VAR_26->mem, VAR_26->memsz,
    VAR_15, VAR_16, VAR_17);

 return FUNC_0(VAR_27);
}
