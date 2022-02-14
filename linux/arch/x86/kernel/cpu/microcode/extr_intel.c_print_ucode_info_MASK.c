
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct ucode_cpu_info {TYPE_1__ cpu_sig; } ;


 int FUNC_0 (char*,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct ucode_cpu_info *VAR_0, unsigned int VAR_1)
{
 FUNC_0("microcode updated early to revision 0x%x, date = %04x-%02x-%02x\n",
       VAR_0->cpu_sig.rev,
       VAR_1 & 0xffff,
       VAR_1 >> 24,
       (VAR_1 >> 16) & 0xff);
}
