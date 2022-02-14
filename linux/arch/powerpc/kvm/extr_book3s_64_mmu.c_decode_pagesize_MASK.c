
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_slb {int base_page_size; } ;





__attribute__((used)) static int FUNC_0(struct kvmppc_slb *VAR_0, u64 VAR_1)
{
 switch (VAR_0->base_page_size) {
 case 128:
  if ((VAR_1 & 0xf000) == 0x1000)
   return 128;
  break;
 case 129:
  if ((VAR_1 & 0xff000) == 0)
   return 129;
  break;
 }
 return -1;
}
