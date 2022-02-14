
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e7xxx_pvt {unsigned long tolm; unsigned long remapbase; scalar_t__ remaplimit; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static unsigned long FUNC_2(struct mem_ctl_info *VAR_1,
    unsigned long VAR_2)
{
 u32 VAR_3;
 struct e7xxx_pvt *VAR_4 = (struct e7xxx_pvt *)VAR_1->pvt_info;

 FUNC_1(3, "\n");

 if ((VAR_2 < VAR_4->tolm) ||
  ((VAR_2 >= 0x100000) && (VAR_2 < VAR_4->remapbase)))
  return VAR_2;

 VAR_3 = (VAR_2 - VAR_4->tolm) + VAR_4->remapbase;

 if (VAR_3 < VAR_4->remaplimit)
  return VAR_3;

 FUNC_0(VAR_0, "Invalid page %lx - out of range\n", VAR_2);
 return VAR_4->tolm - 1;
}
