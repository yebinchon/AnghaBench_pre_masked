
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

 int VAR_4 ;


 int FUNC_1 (int) ;

__attribute__((used)) static inline uint8_t FUNC_2(uint8_t VAR_5)
{
    if (!FUNC_0(VAR_5))
        return VAR_1;

    switch (VAR_5 & VAR_4) {
    case 128:
        return VAR_3;
    case 129:
        return VAR_2;
    case 130:
        return VAR_0;
    default:
        FUNC_1(!"FIXME");
    }
}
