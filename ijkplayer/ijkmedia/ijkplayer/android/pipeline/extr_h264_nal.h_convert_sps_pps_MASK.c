
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_2( const uint8_t *VAR_0, size_t VAR_1,
                            uint8_t *VAR_2, size_t VAR_3,
                            size_t *VAR_4, size_t *VAR_5)
{

    uint32_t VAR_6 = VAR_1, VAR_7, VAR_8 = 0;
    unsigned int VAR_9;


    if( VAR_6 < 7 )
    {
        FUNC_0( "Input Metadata too small" );
        return -1;
    }



    if (VAR_5)
        *VAR_5 = (VAR_0[4] & 0x03) + 1;
    VAR_0 += 5;
    VAR_6 -= 5;

    for ( unsigned int VAR_10 = 0; VAR_10 < 2; VAR_10++ )
    {

        if( VAR_6 < 1 )
        {
            FUNC_0( "PPS too small after processing SPS/PPS %u",
                    VAR_6 );
            return -1;
        }
        VAR_9 = VAR_0[0] & (VAR_10 == 0 ? 0x1f : 0xff);
        VAR_0++; VAR_6--;

        for ( unsigned int VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
        {
            if( VAR_6 < 2 )
            {
                FUNC_0( "SPS is too small %u", VAR_6 );
                return -1;
            }

            VAR_7 = (VAR_0[0] << 8) | VAR_0[1];
            VAR_0 += 2;
            VAR_6 -= 2;

            if( VAR_6 < VAR_7 )
            {
                FUNC_0( "SPS size does not match NAL specified size %u",
                        VAR_6 );
                return -1;
            }
            if( VAR_8 + 4 + VAR_7 > VAR_3 )
            {
                FUNC_0( "Output SPS/PPS buffer too small" );
                return -1;
            }

            VAR_2[VAR_8++] = 0;
            VAR_2[VAR_8++] = 0;
            VAR_2[VAR_8++] = 0;
            VAR_2[VAR_8++] = 1;

            FUNC_1( VAR_2 + VAR_8, VAR_0, VAR_7 );
            VAR_8 += VAR_7;

            VAR_0 += VAR_7;
            VAR_6 -= VAR_7;
        }
    }

    *VAR_4 = VAR_8;

    return 0;
}
