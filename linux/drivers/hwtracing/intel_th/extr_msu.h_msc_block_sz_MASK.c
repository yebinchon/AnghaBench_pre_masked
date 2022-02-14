
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_block_desc {int block_sz; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct msc_block_desc *VAR_1)
{
 return VAR_1->block_sz * 64 - VAR_0;
}
