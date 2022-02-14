
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ secp256k1_ge ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(secp256k1_ge *VAR_3, unsigned char *VAR_4, size_t *VAR_5, int VAR_6) {
    if (FUNC_3(VAR_3)) {
        return 0;
    }
    FUNC_2(&VAR_3->x);
    FUNC_2(&VAR_3->y);
    FUNC_0(&VAR_4[1], &VAR_3->x);
    if (VAR_6) {
        *VAR_5 = 33;
        VAR_4[0] = FUNC_1(&VAR_3->y) ? VAR_1 : VAR_0;
    } else {
        *VAR_5 = 65;
        VAR_4[0] = VAR_2;
        FUNC_0(&VAR_4[33], &VAR_3->y);
    }
    return 1;
}
