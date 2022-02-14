
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void** VAR_1 ;

int FUNC_0( unsigned char *VAR_2, size_t *VAR_3,
                   const unsigned char *VAR_4, size_t VAR_5 )
{
    size_t VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10;
    unsigned char *VAR_11;

    if( VAR_5 == 0 )
        return( 0 );

    VAR_7 = (VAR_5 << 3) / 6;

    switch( (VAR_5 << 3) - (VAR_7 * 6) )
    {
        case 2: VAR_7 += 3; break;
        case 4: VAR_7 += 2; break;
        default: break;
    }

    if( *VAR_3 < VAR_7 + 1 )
    {
        *VAR_3 = VAR_7 + 1;
        return( VAR_0 );
    }

    VAR_7 = (VAR_5 / 3) * 3;

    for( VAR_6 = 0, VAR_11 = VAR_2; VAR_6 < VAR_7; VAR_6 += 3 )
    {
        VAR_8 = *VAR_4++;
        VAR_9 = *VAR_4++;
        VAR_10 = *VAR_4++;

        *VAR_11++ = VAR_1[(VAR_8 >> 2) & 0x3F];
        *VAR_11++ = VAR_1[(((VAR_8 & 3) << 4) + (VAR_9 >> 4)) & 0x3F];
        *VAR_11++ = VAR_1[(((VAR_9 & 15) << 2) + (VAR_10 >> 6)) & 0x3F];
        *VAR_11++ = VAR_1[VAR_10 & 0x3F];
    }

    if( VAR_6 < VAR_5 )
    {
        VAR_8 = *VAR_4++;
        VAR_9 = ((VAR_6 + 1) < VAR_5) ? *VAR_4++ : 0;

        *VAR_11++ = VAR_1[(VAR_8 >> 2) & 0x3F];
        *VAR_11++ = VAR_1[(((VAR_8 & 3) << 4) + (VAR_9 >> 4)) & 0x3F];

        if( (VAR_6 + 1) < VAR_5 )
             *VAR_11++ = VAR_1[((VAR_9 & 15) << 2) & 0x3F];
        else *VAR_11++ = '=';

        *VAR_11++ = '=';
    }

    *VAR_3 = VAR_11 - VAR_2;
    *VAR_11 = 0;

    return( 0 );
}
