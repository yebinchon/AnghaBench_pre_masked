
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef unsigned char* sds ;
struct TYPE_2__ {int len; } ;


 TYPE_1__* FUNC_0 (int,unsigned char*) ;



 int FUNC_1 (unsigned char) ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;

__attribute__((used)) static inline void FUNC_2(sds VAR_2, size_t VAR_3) {
    unsigned char VAR_4 = VAR_2[-1];
    switch(VAR_4&VAR_1) {
        case 130:
            {
                unsigned char *VAR_5 = ((unsigned char*)VAR_2)-1;
                unsigned char VAR_6 = FUNC_1(VAR_4)+(unsigned char)VAR_3;
                *VAR_5 = 130 | (VAR_6 << VAR_0);
            }
            break;
        case 128:
            FUNC_0(8,VAR_2)->len += (uint8_t)VAR_3;
            break;
        case 132:
            FUNC_0(16,VAR_2)->len += (uint16_t)VAR_3;
            break;
        case 131:
            FUNC_0(32,VAR_2)->len += (uint32_t)VAR_3;
            break;
        case 129:
            FUNC_0(64,VAR_2)->len += (uint64_t)VAR_3;
            break;
    }
}
