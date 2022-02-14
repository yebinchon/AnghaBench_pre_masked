
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uint64_t ;
struct modrm {int reg; int base; int * offset; int type; } ;
struct gen_state {int dummy; } ;
typedef int * gadget_t ;
typedef enum arg { ____Placeholder_arg } arg ;
typedef int * dword_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_1 (struct gen_state*,struct modrm*,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline bool FUNC_3(struct gen_state *VAR_9, gadget_t *VAR_10, enum arg VAR_11, struct modrm *VAR_12, uint64_t *VAR_13, int VAR_14, dword_t VAR_15, bool VAR_16, dword_t VAR_17) {
    VAR_14 = FUNC_2(VAR_14);
    VAR_10 = VAR_10 + VAR_14 * VAR_2;

    switch (VAR_11) {
        case 129:

            VAR_11 = VAR_12->reg + VAR_5; break;
        case 128:
            if (VAR_12->type == VAR_7)
                VAR_11 = VAR_12->base + VAR_5;
            else
                VAR_11 = VAR_4;
            break;
        case 130:
            VAR_11 = VAR_4;
            VAR_12->type = VAR_6;
            VAR_12->base = VAR_8;
            VAR_12->offset = VAR_17;
            break;
        case 131:
            VAR_11 = VAR_3;
            *VAR_13 = 1;
            break;
    }
    if (VAR_11 >= VAR_2 || VAR_10[VAR_11] == ((void*)0)) {
        VAR_0;
    }
    if (VAR_11 == VAR_4 || VAR_11 == VAR_1) {
        if (!FUNC_1(VAR_9, VAR_12, VAR_16, VAR_15))
            return 0;
    }
    FUNC_0(VAR_10[VAR_11]);
    if (VAR_11 == VAR_3)
        FUNC_0(*VAR_13);
    else if (VAR_11 == VAR_4)
        FUNC_0(VAR_15);
    return 1;
}
