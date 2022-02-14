
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_block_desc {int valid_dw; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct msc_block_desc *VAR_1)
{
 if (!VAR_1->valid_dw)
  return 0;

 return VAR_1->valid_dw * 4 - VAR_0;
}
