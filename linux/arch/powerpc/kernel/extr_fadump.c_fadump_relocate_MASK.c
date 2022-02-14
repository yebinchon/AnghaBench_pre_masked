
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int boot_mem_regs_cnt; unsigned long* boot_mem_addr; unsigned long* boot_mem_sz; unsigned long boot_mem_dest_addr; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_5 = 0;
 VAR_2 = VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_0.boot_mem_regs_cnt; VAR_7++) {
  VAR_3 = VAR_0.boot_mem_addr[VAR_7];
  VAR_4 = VAR_3 + VAR_0.boot_mem_sz[VAR_7];
  VAR_6 += (VAR_3 - VAR_5);

  if (VAR_1 >= VAR_3 && VAR_1 < VAR_4) {
   VAR_2 += VAR_0.boot_mem_dest_addr - VAR_6;
   break;
  }

  VAR_5 = VAR_4;
 }

 FUNC_0("vmcoreinfo: paddr = 0x%lx, raddr = 0x%lx\n", VAR_1, VAR_2);
 return VAR_2;
}
