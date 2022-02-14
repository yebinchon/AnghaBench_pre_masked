
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modrm {scalar_t__ base; scalar_t__ type; int index; scalar_t__ shift; int offset; } ;
struct gen_state {int dummy; } ;
typedef int dword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

bool FUNC_4(struct gen_state *VAR_5, struct modrm *VAR_6, bool VAR_7, dword_t VAR_8) {
    if (VAR_6->base == VAR_3)
        FUNC_3(VAR_1, VAR_6->offset);
    else
        FUNC_2(VAR_0, VAR_6->base, VAR_6->offset);
    if (VAR_6->type == VAR_2)
        FUNC_1(VAR_4, VAR_6->index * 4 + VAR_6->shift);
    if (VAR_7)
        FUNC_0(VAR_7);
    return 1;
}
