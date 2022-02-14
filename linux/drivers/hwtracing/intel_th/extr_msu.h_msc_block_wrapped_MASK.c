
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_block_desc {int hw_tag; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct msc_block_desc *VAR_2)
{
 if (VAR_2->hw_tag & (VAR_0 | VAR_1))
  return 1;

 return 0;
}
