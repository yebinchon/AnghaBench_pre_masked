
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

int FUNC_0( unsigned char *VAR_3, size_t *VAR_4,
                   const unsigned char *VAR_5, size_t VAR_6 )
{
    size_t VAR_7, VAR_8;
    uint32_t VAR_9, VAR_10;
    unsigned char *VAR_11;

    for( VAR_7 = VAR_9 = VAR_8 = 0; VAR_7 < VAR_6; VAR_7++ )
    {
        if( ( VAR_6 - VAR_7 ) >= 2 &&
            VAR_5[VAR_7] == '\r' && VAR_5[VAR_7 + 1] == '\n' )
            continue;

        if( VAR_5[VAR_7] == '\n' )
            continue;

        if( VAR_5[VAR_7] == '=' && ++VAR_9 > 2 )
            return( VAR_1 );

        if( VAR_5[VAR_7] > 127 || VAR_2[VAR_5[VAR_7]] == 127 )
            return( VAR_1 );

        if( VAR_2[VAR_5[VAR_7]] < 64 && VAR_9 != 0 )
            return( VAR_1 );

        VAR_8++;
    }

    if( VAR_8 == 0 )
        return( 0 );

    VAR_8 = ((VAR_8 * 6) + 7) >> 3;

    if( *VAR_4 < VAR_8 )
    {
        *VAR_4 = VAR_8;
        return( VAR_0 );
    }

   for( VAR_9 = 3, VAR_8 = VAR_10 = 0, VAR_11 = VAR_3; VAR_7 > 0; VAR_7--, VAR_5++ )
   {
        if( *VAR_5 == '\r' || *VAR_5 == '\n' )
            continue;

        VAR_9 -= ( VAR_2[*VAR_5] == 64 );
        VAR_10 = (VAR_10 << 6) | ( VAR_2[*VAR_5] & 0x3F );

        if( ++VAR_8 == 4 )
        {
            VAR_8 = 0;
            if( VAR_9 > 0 ) *VAR_11++ = (unsigned char)( VAR_10 >> 16 );
            if( VAR_9 > 1 ) *VAR_11++ = (unsigned char)( VAR_10 >> 8 );
            if( VAR_9 > 2 ) *VAR_11++ = (unsigned char)( VAR_10 );
        }
    }

    *VAR_4 = VAR_11 - VAR_3;

    return( 0 );
}
