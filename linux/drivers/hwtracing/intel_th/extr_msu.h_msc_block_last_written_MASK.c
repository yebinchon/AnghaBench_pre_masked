
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_block_desc {int hw_tag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct msc_block_desc*) ;
 scalar_t__ FUNC_1 (struct msc_block_desc*) ;

__attribute__((used)) static inline bool FUNC_2(struct msc_block_desc *VAR_1)
{
 if ((VAR_1->hw_tag & VAR_0) ||
     (FUNC_1(VAR_1) != FUNC_0(VAR_1)))
  return 1;

 return 0;
}
