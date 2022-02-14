
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int flags; size_t state; int sym; } ;
typedef TYPE_1__ nghttp2_huff_decode ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;

__attribute__((used)) static char *FUNC_0(char *VAR_5, uint8_t VAR_6, uint8_t *VAR_7, int *VAR_8, uint8_t *VAR_9)
{
    const nghttp2_huff_decode *VAR_10 = VAR_4[*VAR_7] + VAR_6;

    if ((VAR_10->flags & VAR_1) != 0)
        return ((void*)0);
    if ((VAR_10->flags & VAR_3) != 0) {
        *VAR_5++ = VAR_10->sym;
        *VAR_9 |= (VAR_10->flags & VAR_2);
    }
    *VAR_7 = VAR_10->state;
    *VAR_8 = (VAR_10->flags & VAR_0) != 0;

    return VAR_5;
}
