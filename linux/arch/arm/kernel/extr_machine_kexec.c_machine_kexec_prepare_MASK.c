
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kernel_r2; } ;
struct kimage {int nr_segments; TYPE_1__ arch; struct kexec_segment* segment; scalar_t__ start; } ;
struct kexec_segment {scalar_t__ mem; scalar_t__ buf; int memsz; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

int FUNC_7(struct kimage *VAR_4)
{
 struct kexec_segment *VAR_5;
 __be32 VAR_6;
 int VAR_7, VAR_8;

 VAR_4->arch.kernel_r2 = VAR_4->start - VAR_2
         + VAR_1;






 if (FUNC_4() > 1 && FUNC_6() &&
     !FUNC_5())
  return -VAR_0;





 for (VAR_7 = 0; VAR_7 < VAR_4->nr_segments; VAR_7++) {
  VAR_5 = &VAR_4->segment[VAR_7];

  if (!FUNC_3(FUNC_2(VAR_5->mem),
            VAR_5->memsz))
   return -VAR_0;

  VAR_8 = FUNC_1(VAR_6, (__be32*)VAR_5->buf);
  if (VAR_8)
   return VAR_8;

  if (VAR_6 == FUNC_0(VAR_3))
   VAR_4->arch.kernel_r2 = VAR_5->mem;
 }
 return 0;
}
