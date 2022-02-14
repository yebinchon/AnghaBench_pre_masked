
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axi_dmac_sg {unsigned int x_len; unsigned int y_len; } ;
struct axi_dmac_chan {scalar_t__ hw_2d; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct axi_dmac_chan *VAR_0,
 struct axi_dmac_sg *VAR_1)
{
 if (VAR_0->hw_2d)
  return VAR_1->x_len * VAR_1->y_len;
 else
  return VAR_1->x_len;
}
