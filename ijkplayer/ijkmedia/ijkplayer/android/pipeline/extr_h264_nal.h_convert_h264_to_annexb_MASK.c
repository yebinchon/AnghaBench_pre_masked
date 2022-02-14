
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t nal_pos; int nal_len; } ;
typedef TYPE_1__ H264ConvertState ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( uint8_t *VAR_1, size_t VAR_2,
                                    size_t VAR_3,
                                    H264ConvertState *VAR_4 )
{
    if( VAR_3 < 3 || VAR_3 > 4 )
        return;


    while( VAR_2 > 0 )
    {
        if( VAR_4->nal_pos < VAR_3 ) {
            unsigned int VAR_5;
            for( VAR_5 = 0; VAR_4->nal_pos < VAR_3 && VAR_5 < VAR_2; VAR_5++, VAR_4->nal_pos++ ) {
                VAR_4->nal_len = (VAR_4->nal_len << 8) | VAR_1[VAR_5];
                VAR_1[VAR_5] = 0;
            }
            if( VAR_4->nal_pos < VAR_3 )
                return;
            VAR_1[VAR_5 - 1] = 1;
            VAR_1 += VAR_5;
            VAR_2 -= VAR_5;
        }
        if( VAR_4->nal_len > VAR_0 )
            return;
        if( VAR_4->nal_len > VAR_2 )
        {
            VAR_4->nal_len -= VAR_2;
            return;
        }
        else
        {
            VAR_1 += VAR_4->nal_len;
            VAR_2 -= VAR_4->nal_len;
            VAR_4->nal_len = 0;
            VAR_4->nal_pos = 0;
        }
    }
}
