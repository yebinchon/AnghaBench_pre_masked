
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int uint ;
typedef int uchar ;
struct TYPE_4__ {int* total; int * buffer; } ;
typedef TYPE_1__ sha1_context ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2( sha1_context *VAR_0, uchar *VAR_1, uint VAR_2 )
{
    ulong VAR_3, VAR_4;

    if( ! VAR_2 ) return;

    VAR_3 = VAR_0->total[0] & 0x3F;
    VAR_4 = 64 - VAR_3;

    VAR_0->total[0] += VAR_2;
    VAR_0->total[0] &= 0xFFFFFFFF;

    if( VAR_0->total[0] < VAR_2 )
        VAR_0->total[1]++;

    if( VAR_3 && VAR_2 >= VAR_4 )
    {
        FUNC_0( (void *) (VAR_0->buffer + VAR_3),
                (void *) VAR_1, VAR_4 );
        FUNC_1( VAR_0, VAR_0->buffer );
        VAR_2 -= VAR_4;
        VAR_1 += VAR_4;
        VAR_3 = 0;
    }

    while( VAR_2 >= 64 )
    {
        FUNC_1( VAR_0, VAR_1 );
        VAR_2 -= 64;
        VAR_1 += 64;
    }

    if( VAR_2 )
    {
        FUNC_0( (void *) (VAR_0->buffer + VAR_3),
                (void *) VAR_1, VAR_2 );
    }
}
