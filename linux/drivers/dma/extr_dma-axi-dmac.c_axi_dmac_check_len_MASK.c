
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_dmac_chan {unsigned int length_align_mask; } ;



__attribute__((used)) static bool FUNC_0(struct axi_dmac_chan *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 == 0)
  return 0;
 if ((VAR_1 & VAR_0->length_align_mask) != 0)
  return 0;
 return 1;
}
