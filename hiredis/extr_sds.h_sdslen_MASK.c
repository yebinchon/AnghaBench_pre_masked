
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char* sds ;
struct TYPE_2__ {size_t len; } ;


 TYPE_1__* FUNC_0 (int,unsigned char* const) ;



 size_t FUNC_1 (unsigned char) ;


 unsigned char VAR_0 ;

__attribute__((used)) static inline size_t FUNC_2(const sds VAR_1) {
    unsigned char VAR_2 = VAR_1[-1];
    switch(VAR_2&VAR_0) {
        case 130:
            return FUNC_1(VAR_2);
        case 128:
            return FUNC_0(8,VAR_1)->len;
        case 132:
            return FUNC_0(16,VAR_1)->len;
        case 131:
            return FUNC_0(32,VAR_1)->len;
        case 129:
            return FUNC_0(64,VAR_1)->len;
    }
    return 0;
}
