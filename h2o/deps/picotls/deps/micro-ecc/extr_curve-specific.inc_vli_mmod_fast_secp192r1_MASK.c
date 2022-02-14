
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int p; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_4(uint64_t *VAR_2, uint64_t *VAR_3) {
    uint64_t VAR_4[VAR_1];
    int VAR_5;

    FUNC_2(VAR_2, VAR_3, VAR_1);

    FUNC_2(VAR_4, &VAR_3[3], VAR_1);
    VAR_5 = (int)FUNC_0(VAR_2, VAR_2, VAR_4, VAR_1);

    VAR_4[0] = 0;
    VAR_4[1] = VAR_3[3];
    VAR_4[2] = VAR_3[4];
    VAR_5 += FUNC_0(VAR_2, VAR_2, VAR_4, VAR_1);

    VAR_4[0] = VAR_4[1] = VAR_3[5];
    VAR_4[2] = 0;
    VAR_5 += FUNC_0(VAR_2, VAR_2, VAR_4, VAR_1);

    while (VAR_5 || FUNC_1(VAR_0, VAR_2, VAR_1) != 1) {
        VAR_5 -= FUNC_3(VAR_2, VAR_2, VAR_0, VAR_1);
    }
}
