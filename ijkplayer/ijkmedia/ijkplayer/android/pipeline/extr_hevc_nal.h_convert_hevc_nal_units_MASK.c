
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int const*,int) ;

int FUNC_2(const uint8_t *VAR_0,size_t VAR_1,
                           uint8_t *VAR_2,size_t VAR_3,
                           size_t *VAR_4,size_t *VAR_5)
{
    int VAR_6, VAR_7;
    const uint8_t *VAR_8 = VAR_0 + VAR_1;
    uint32_t VAR_9 = 0;

    if( VAR_1 <= 3 || ( !VAR_0[0] && !VAR_0[1] && VAR_0[2] <= 1 ) )
        return -1;

    if( VAR_8 - VAR_0 < 23 )
    {
        FUNC_0( "Input Metadata too small" );
        return -1;
    }

    VAR_0 += 21;

    if( VAR_5 )
        *VAR_5 = (*VAR_0 & 0x03) + 1;
    VAR_0++;

    VAR_7 = *VAR_0++;

    for( VAR_6 = 0; VAR_6 < VAR_7; VAR_6++ )
    {
        int VAR_10, VAR_11, VAR_12;

        if( VAR_8 - VAR_0 < 3 )
        {
            FUNC_0( "Input Metadata too small" );
            return -1;
        }
        VAR_10 = *(VAR_0++) & 0x3f;
        (void)(VAR_10);

        VAR_11 = VAR_0[0] << 8 | VAR_0[1];
        VAR_0 += 2;

        for( VAR_12 = 0; VAR_12 < VAR_11; VAR_12++ )
        {
            int VAR_13;

            if( VAR_8 - VAR_0 < 2 )
            {
                FUNC_0( "Input Metadata too small" );
                return -1;
            }

            VAR_13 = VAR_0[0] << 8 | VAR_0[1];
            VAR_0 += 2;

            if( VAR_13 < 0 || VAR_8 - VAR_0 < VAR_13 )
            {
                FUNC_0( "NAL unit size does not match Input Metadata size" );
                return -1;
            }

            if( VAR_9 + 4 + VAR_13 > VAR_3 )
            {
                FUNC_0( "Output buffer too small" );
                return -1;
            }

            VAR_2[VAR_9++] = 0;
            VAR_2[VAR_9++] = 0;
            VAR_2[VAR_9++] = 0;
            VAR_2[VAR_9++] = 1;

            FUNC_1(VAR_2 + VAR_9, VAR_0, VAR_13);
            VAR_0 += VAR_13;

            VAR_9 += VAR_13;
        }
    }

    *VAR_4 = VAR_9;

    return 0;
}
