
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_block_desc {int valid_dw; } ;


 int FUNC_0 (struct msc_block_desc*) ;

__attribute__((used)) static inline bool FUNC_1(struct msc_block_desc *VAR_0)
{

 if (!VAR_0->valid_dw)
  return 1;


 if (!FUNC_0(VAR_0))
  return 1;

 return 0;
}
