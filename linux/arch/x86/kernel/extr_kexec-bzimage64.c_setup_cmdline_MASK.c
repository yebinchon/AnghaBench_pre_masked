
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long uint32_t ;
struct TYPE_3__ {int elf_load_addr; } ;
struct kimage {scalar_t__ type; TYPE_1__ arch; } ;
struct TYPE_4__ {long cmd_line_ptr; } ;
struct boot_params {long ext_cmd_line_ptr; TYPE_2__ hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long) ;
 int FUNC_1 (char*,char*) ;
 unsigned long FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct kimage *VAR_1, struct boot_params *VAR_2,
    unsigned long VAR_3,
    unsigned long VAR_4, char *VAR_5,
    unsigned long VAR_6)
{
 char *VAR_7 = ((char *)VAR_2) + VAR_4;
 unsigned long VAR_8, VAR_9 = 0;
 uint32_t VAR_10, VAR_11;

 if (VAR_1->type == VAR_0) {
  VAR_9 = FUNC_2(VAR_7,
   "elfcorehdr=0x%lx ", VAR_1->arch.elf_load_addr);
 }
 FUNC_0(VAR_7 + VAR_9, VAR_5, VAR_6);
 VAR_6 += VAR_9;

 VAR_7[VAR_6 - 1] = '\0';

 FUNC_1("Final command line is: %s\n", VAR_7);
 VAR_8 = VAR_3 + VAR_4;
 VAR_10 = VAR_8 & 0xffffffffUL;
 VAR_11 = VAR_8 >> 32;

 VAR_2->hdr.cmd_line_ptr = VAR_10;
 if (VAR_11)
  VAR_2->ext_cmd_line_ptr = VAR_11;

 return 0;
}
