
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pt_cap_desc {size_t leaf; size_t reg; unsigned int mask; } ;
typedef enum pt_capabilities { ____Placeholder_pt_capabilities } pt_capabilities ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 struct pt_cap_desc* VAR_1 ;

u32 FUNC_1(u32 *VAR_2, enum pt_capabilities VAR_3)
{
 struct pt_cap_desc *VAR_4 = &VAR_1[VAR_3];
 u32 VAR_5 = VAR_2[VAR_4->leaf * VAR_0 + VAR_4->reg];
 unsigned int VAR_6 = FUNC_0(VAR_4->mask);

 return (VAR_5 & VAR_4->mask) >> VAR_6;
}
