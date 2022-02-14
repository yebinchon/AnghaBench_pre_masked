
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SLmillibel ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (float) ;
 scalar_t__ FUNC_1 (float) ;

__attribute__((used)) static inline SLmillibel FUNC_2(float VAR_1) {

    if (VAR_1 < 0.00000001)
        return VAR_0;

    SLmillibel VAR_2 = FUNC_1(2000.f * FUNC_0(VAR_1));
    if (VAR_2 < VAR_0)
        VAR_2 = VAR_0;
    else if (VAR_2 > 0)
        VAR_2 = 0;
    return VAR_2;
}
