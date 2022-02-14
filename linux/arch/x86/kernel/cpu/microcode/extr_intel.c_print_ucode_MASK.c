
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucode_cpu_info {struct microcode_intel* mc; } ;
struct TYPE_2__ {int date; } ;
struct microcode_intel {TYPE_1__ hdr; } ;


 int FUNC_0 (struct ucode_cpu_info*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ucode_cpu_info *VAR_0)
{
 struct microcode_intel *VAR_1;

 VAR_1 = VAR_0->mc;
 if (!VAR_1)
  return;

 FUNC_0(VAR_0, VAR_1->hdr.date);
}
