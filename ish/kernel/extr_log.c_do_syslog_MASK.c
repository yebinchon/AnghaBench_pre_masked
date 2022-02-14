
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_5, addr_t VAR_6, int_t VAR_7) {
    int VAR_8;
    switch (VAR_5) {
        case 132:
            return FUNC_2(VAR_6, VAR_7, 0);
        case 131:
            return FUNC_2(VAR_6, VAR_7, VAR_0 | VAR_1);

        case 130:
            VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_0 | VAR_1);
            if (VAR_8 < 0)
                return VAR_8;

        case 138:
            VAR_4 = 0;
            return 0;

        case 128:
            return FUNC_1(&VAR_3);
        case 129:
            return FUNC_0(&VAR_3);

        case 137:
        case 133:
        case 135:
        case 134:
        case 136:
            return 0;
        default:
            return VAR_2;
    }
}
