
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rb_info {int hw_options; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct rb_info *VAR_0, u32 VAR_1, u32 VAR_2)
{
 return (VAR_0->hw_options & (VAR_2 | VAR_1)) == VAR_2;
}
