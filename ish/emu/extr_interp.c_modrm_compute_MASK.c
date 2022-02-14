
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb {int dummy; } ;
struct regptr {int dummy; } ;
struct modrm {scalar_t__ reg; scalar_t__ base; scalar_t__ type; scalar_t__ index; int shift; scalar_t__ offset; } ;
struct cpu_state {int eip; } ;
typedef int addr_t ;


 int FUNC_0 (struct regptr,int) ;
 int FUNC_1 (int *,struct tlb*,struct modrm*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct regptr FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct cpu_state *VAR_3, struct tlb *VAR_4, addr_t *VAR_5,
        struct modrm *VAR_6, struct regptr *VAR_7, struct regptr *VAR_8) {
    if (!FUNC_1(&VAR_3->eip, VAR_4, VAR_6))
        return 0;
    *VAR_7 = FUNC_2(VAR_6->reg);
    *VAR_8 = FUNC_2(VAR_6->base);
    if (VAR_6->type == VAR_1)
        return 1;

    if (VAR_6->base != VAR_2)
        *VAR_5 += FUNC_0(*VAR_8, 32);
    *VAR_5 += VAR_6->offset;
    if (VAR_6->type == VAR_0) {
        struct regptr VAR_9 = FUNC_2(VAR_6->index);
        *VAR_5 += FUNC_0(VAR_9, 32) << VAR_6->shift;
    }
    return 1;
}
