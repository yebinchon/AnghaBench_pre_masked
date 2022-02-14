
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct coh901318_lli {int control; struct coh901318_lli* virt_link_addr; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct coh901318_lli *VAR_1)
{
 struct coh901318_lli *VAR_2 = VAR_1;
 u32 VAR_3 = 0;

 while (VAR_2) {
  VAR_3 += VAR_2->control & VAR_0;
  VAR_2 = VAR_2->virt_link_addr;
 }
 return VAR_3;
}
