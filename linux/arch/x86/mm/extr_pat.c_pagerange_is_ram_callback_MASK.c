
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagerange_state {int not_ram; unsigned long cur_pfn; int ram; } ;



__attribute__((used)) static int
FUNC_0(unsigned long VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct pagerange_state *VAR_3 = VAR_2;

 VAR_3->not_ram |= VAR_0 > VAR_3->cur_pfn;
 VAR_3->ram |= VAR_1 > 0;
 VAR_3->cur_pfn = VAR_0 + VAR_1;

 return VAR_3->ram && VAR_3->not_ram;
}
