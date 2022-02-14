
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modrm {int type; } ;
typedef enum vec_arg { ____Placeholder_vec_arg } vec_arg ;
typedef enum arg { ____Placeholder_arg } arg ;







 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline enum vec_arg FUNC_1(enum arg VAR_5, struct modrm *VAR_6) {
    switch (VAR_5) {
        case 131:
            return VAR_3;
        case 132:
            return VAR_1;
        case 129:
            return VAR_4;
        case 130:
            if (VAR_6->type == VAR_0)
                return VAR_3;
            return VAR_2;
        case 128:
            if (VAR_6->type == VAR_0)
                return VAR_4;
            return VAR_2;
        default:
            FUNC_0("unimplemented vecarg");
    }
}
