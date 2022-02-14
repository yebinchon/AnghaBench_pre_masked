
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int leftover; unsigned char* buffer; } ;
typedef TYPE_1__ poly1305_state_internal_t ;


 unsigned long long VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,unsigned long long) ;

__attribute__((used)) static void
FUNC_1(poly1305_state_internal_t *VAR_1, const unsigned char *VAR_2,
                unsigned long long VAR_3)
{
    unsigned long long VAR_4;


    if (VAR_1->leftover) {
        unsigned long long VAR_5 = (VAR_0 - VAR_1->leftover);

        if (VAR_5 > VAR_3) {
            VAR_5 = VAR_3;
        }
        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
            VAR_1->buffer[VAR_1->leftover + VAR_4] = VAR_2[VAR_4];
        }
        VAR_3 -= VAR_5;
        VAR_2 += VAR_5;
        VAR_1->leftover += VAR_5;
        if (VAR_1->leftover < VAR_0) {
            return;
        }
        FUNC_0(VAR_1, VAR_1->buffer, VAR_0);
        VAR_1->leftover = 0;
    }


    if (VAR_3 >= VAR_0) {
        unsigned long long VAR_6 = (VAR_3 & ~(VAR_0 - 1));

        FUNC_0(VAR_1, VAR_2, VAR_6);
        VAR_2 += VAR_6;
        VAR_3 -= VAR_6;
    }


    if (VAR_3) {
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
            VAR_1->buffer[VAR_1->leftover + VAR_4] = VAR_2[VAR_4];
        }
        VAR_1->leftover += VAR_3;
    }
}
