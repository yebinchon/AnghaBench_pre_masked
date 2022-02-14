
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vop_reg {int offset; int shift; int mask; } ;
struct vop {int dummy; } ;


 int FUNC_0 (struct vop*,int) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct vop *VAR_0, uint32_t VAR_1,
        const struct vop_reg *VAR_2)
{
 return (FUNC_0(VAR_0, VAR_1 + VAR_2->offset) >> VAR_2->shift) & VAR_2->mask;
}
