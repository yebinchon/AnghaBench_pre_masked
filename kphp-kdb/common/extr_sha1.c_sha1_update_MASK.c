
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* total; unsigned char* buffer; } ;
typedef TYPE_1__ sha1_context ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;

void FUNC_2( sha1_context *VAR_0, unsigned char *VAR_1, int VAR_2 )
{
    int VAR_3;
    unsigned long VAR_4;

    if( VAR_2 <= 0 )
        return;

    VAR_4 = VAR_0->total[0] & 0x3F;
    VAR_3 = 64 - VAR_4;

    VAR_0->total[0] += VAR_2;
    VAR_0->total[0] &= 0xFFFFFFFF;

    if( VAR_0->total[0] < (unsigned long) VAR_2 )
        VAR_0->total[1]++;

    if( VAR_4 && VAR_2 >= VAR_3 )
    {
        FUNC_0( (void *) (VAR_0->buffer + VAR_4),
                (void *) VAR_1, VAR_3 );
        FUNC_1( VAR_0, VAR_0->buffer );
        VAR_1 += VAR_3;
        VAR_2 -= VAR_3;
        VAR_4 = 0;
    }

    while( VAR_2 >= 64 )
    {
        FUNC_1( VAR_0, VAR_1 );
        VAR_1 += 64;
        VAR_2 -= 64;
    }

    if( VAR_2 > 0 )
    {
        FUNC_0( (void *) (VAR_0->buffer + VAR_4),
                (void *) VAR_1, VAR_2 );
    }
}
