
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; int pf; int sig; } ;
struct ucode_cpu_info {TYPE_1__ cpu_sig; } ;
struct microcode_header_intel {int rev; int pf; int sig; } ;
struct microcode_intel {struct microcode_header_intel hdr; } ;


 unsigned int FUNC_0 (struct microcode_header_intel*) ;
 int FUNC_1 (void*,int ,int ,int ) ;
 int FUNC_2 (struct microcode_header_intel*,int ) ;
 scalar_t__ FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,unsigned int) ;

__attribute__((used)) static struct microcode_intel *
FUNC_5(void *VAR_0, size_t VAR_1, struct ucode_cpu_info *VAR_2, bool VAR_3)
{
 struct microcode_header_intel *VAR_4;
 struct microcode_intel *VAR_5 = ((void*)0);
 unsigned int VAR_6;

 while (VAR_1) {
  if (VAR_1 < sizeof(struct microcode_header_intel))
   break;

  VAR_4 = (struct microcode_header_intel *)VAR_0;

  VAR_6 = FUNC_0(VAR_4);
  if (!VAR_6 ||
      VAR_6 > VAR_1 ||
      FUNC_3(VAR_0, 0) < 0)
   break;

  VAR_1 -= VAR_6;

  if (!FUNC_2(VAR_4, VAR_2->cpu_sig.sig)) {
   VAR_0 += VAR_6;
   continue;
  }

  if (VAR_3) {
   FUNC_4(VAR_0, VAR_6);
   goto next;
  }


  if (!VAR_5) {
   if (!FUNC_1(VAR_0,
       VAR_2->cpu_sig.sig,
       VAR_2->cpu_sig.pf,
       VAR_2->cpu_sig.rev))
    goto next;

  } else {
   struct microcode_header_intel *VAR_7 = &VAR_5->hdr;

   if (!FUNC_1(VAR_0,
       VAR_7->sig,
       VAR_7->pf,
       VAR_7->rev))
    goto next;
  }


  VAR_5 = VAR_0;

next:
  VAR_0 += VAR_6;
 }

 if (VAR_1)
  return ((void*)0);

 return VAR_5;
}
