
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_paddr_t ;
struct sparc64_dump_reg {int dr_offs; scalar_t__ dr_size; int dr_pa; } ;
struct dumperinfo {int dummy; } ;
typedef int r ;


 int FUNC_0 (struct dumperinfo*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct dumperinfo *VAR_1, vm_paddr_t VAR_2, vm_size_t VAR_3)
{
 struct sparc64_dump_reg VAR_4;

 VAR_4.dr_pa = VAR_2;
 VAR_4.dr_size = VAR_3;
 VAR_4.dr_offs = VAR_0;
 VAR_0 += VAR_3;
 return (FUNC_0(VAR_1, (char *)&VAR_4, sizeof(VAR_4)));
}
