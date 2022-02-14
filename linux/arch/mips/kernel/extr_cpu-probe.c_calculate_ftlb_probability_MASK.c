
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {unsigned int tlbsize; unsigned int tlbsizevtlb; } ;



__attribute__((used)) static unsigned int FUNC_0(struct cpuinfo_mips *VAR_0)
{

 unsigned int VAR_1 = VAR_0->tlbsize / VAR_0->tlbsizevtlb;
 if (VAR_1 >= 12)
  return 1;
 else if (VAR_1 >= 6)
  return 2;
 else




  return 3;
}
