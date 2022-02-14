
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* state; } ;
typedef TYPE_1__ sha1_context ;


 int FUNC_0 (unsigned long,unsigned char*,int) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( sha1_context *VAR_0, unsigned char VAR_1[64] )
{
    unsigned long VAR_2, VAR_3[16], VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    FUNC_0( VAR_3[ 0], VAR_1, 0 );
    FUNC_0( VAR_3[ 1], VAR_1, 4 );
    FUNC_0( VAR_3[ 2], VAR_1, 8 );
    FUNC_0( VAR_3[ 3], VAR_1, 12 );
    FUNC_0( VAR_3[ 4], VAR_1, 16 );
    FUNC_0( VAR_3[ 5], VAR_1, 20 );
    FUNC_0( VAR_3[ 6], VAR_1, 24 );
    FUNC_0( VAR_3[ 7], VAR_1, 28 );
    FUNC_0( VAR_3[ 8], VAR_1, 32 );
    FUNC_0( VAR_3[ 9], VAR_1, 36 );
    FUNC_0( VAR_3[10], VAR_1, 40 );
    FUNC_0( VAR_3[11], VAR_1, 44 );
    FUNC_0( VAR_3[12], VAR_1, 48 );
    FUNC_0( VAR_3[13], VAR_1, 52 );
    FUNC_0( VAR_3[14], VAR_1, 56 );
    FUNC_0( VAR_3[15], VAR_1, 60 );
    VAR_4 = VAR_0->state[0];
    VAR_5 = VAR_0->state[1];
    VAR_6 = VAR_0->state[2];
    VAR_7 = VAR_0->state[3];
    VAR_8 = VAR_0->state[4];




    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ (VAR_5 & (VAR_6 ^ VAR_7))) + 0x5A827999 + VAR_3[0]; VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + 0x5A827999 + VAR_3[1]; VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ (VAR_8 & (VAR_4 ^ VAR_5))) + 0x5A827999 + VAR_3[2]; VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ (VAR_7 & (VAR_8 ^ VAR_4))) + 0x5A827999 + VAR_3[3]; VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ (VAR_6 & (VAR_7 ^ VAR_8))) + 0x5A827999 + VAR_3[4]; VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ (VAR_5 & (VAR_6 ^ VAR_7))) + 0x5A827999 + VAR_3[5]; VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + 0x5A827999 + VAR_3[6]; VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ (VAR_8 & (VAR_4 ^ VAR_5))) + 0x5A827999 + VAR_3[7]; VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ (VAR_7 & (VAR_8 ^ VAR_4))) + 0x5A827999 + VAR_3[8]; VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ (VAR_6 & (VAR_7 ^ VAR_8))) + 0x5A827999 + VAR_3[9]; VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ (VAR_5 & (VAR_6 ^ VAR_7))) + 0x5A827999 + VAR_3[10]; VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + 0x5A827999 + VAR_3[11]; VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ (VAR_8 & (VAR_4 ^ VAR_5))) + 0x5A827999 + VAR_3[12]; VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ (VAR_7 & (VAR_8 ^ VAR_4))) + 0x5A827999 + VAR_3[13]; VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ (VAR_6 & (VAR_7 ^ VAR_8))) + 0x5A827999 + VAR_3[14]; VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ (VAR_5 & (VAR_6 ^ VAR_7))) + 0x5A827999 + VAR_3[15]; VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + 0x5A827999 + ( VAR_2 = VAR_3[(16 - 3) & 0x0F] ^ VAR_3[(16 - 8) & 0x0F] ^ VAR_3[(16 - 14) & 0x0F] ^ VAR_3[ 16 & 0x0F], ( VAR_3[16 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ (VAR_8 & (VAR_4 ^ VAR_5))) + 0x5A827999 + ( VAR_2 = VAR_3[(17 - 3) & 0x0F] ^ VAR_3[(17 - 8) & 0x0F] ^ VAR_3[(17 - 14) & 0x0F] ^ VAR_3[ 17 & 0x0F], ( VAR_3[17 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ (VAR_7 & (VAR_8 ^ VAR_4))) + 0x5A827999 + ( VAR_2 = VAR_3[(18 - 3) & 0x0F] ^ VAR_3[(18 - 8) & 0x0F] ^ VAR_3[(18 - 14) & 0x0F] ^ VAR_3[ 18 & 0x0F], ( VAR_3[18 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ (VAR_6 & (VAR_7 ^ VAR_8))) + 0x5A827999 + ( VAR_2 = VAR_3[(19 - 3) & 0x0F] ^ VAR_3[(19 - 8) & 0x0F] ^ VAR_3[(19 - 14) & 0x0F] ^ VAR_3[ 19 & 0x0F], ( VAR_3[19 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };







    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(20 - 3) & 0x0F] ^ VAR_3[(20 - 8) & 0x0F] ^ VAR_3[(20 - 14) & 0x0F] ^ VAR_3[ 20 & 0x0F], ( VAR_3[20 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(21 - 3) & 0x0F] ^ VAR_3[(21 - 8) & 0x0F] ^ VAR_3[(21 - 14) & 0x0F] ^ VAR_3[ 21 & 0x0F], ( VAR_3[21 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(22 - 3) & 0x0F] ^ VAR_3[(22 - 8) & 0x0F] ^ VAR_3[(22 - 14) & 0x0F] ^ VAR_3[ 22 & 0x0F], ( VAR_3[22 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(23 - 3) & 0x0F] ^ VAR_3[(23 - 8) & 0x0F] ^ VAR_3[(23 - 14) & 0x0F] ^ VAR_3[ 23 & 0x0F], ( VAR_3[23 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(24 - 3) & 0x0F] ^ VAR_3[(24 - 8) & 0x0F] ^ VAR_3[(24 - 14) & 0x0F] ^ VAR_3[ 24 & 0x0F], ( VAR_3[24 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(25 - 3) & 0x0F] ^ VAR_3[(25 - 8) & 0x0F] ^ VAR_3[(25 - 14) & 0x0F] ^ VAR_3[ 25 & 0x0F], ( VAR_3[25 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(26 - 3) & 0x0F] ^ VAR_3[(26 - 8) & 0x0F] ^ VAR_3[(26 - 14) & 0x0F] ^ VAR_3[ 26 & 0x0F], ( VAR_3[26 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(27 - 3) & 0x0F] ^ VAR_3[(27 - 8) & 0x0F] ^ VAR_3[(27 - 14) & 0x0F] ^ VAR_3[ 27 & 0x0F], ( VAR_3[27 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(28 - 3) & 0x0F] ^ VAR_3[(28 - 8) & 0x0F] ^ VAR_3[(28 - 14) & 0x0F] ^ VAR_3[ 28 & 0x0F], ( VAR_3[28 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(29 - 3) & 0x0F] ^ VAR_3[(29 - 8) & 0x0F] ^ VAR_3[(29 - 14) & 0x0F] ^ VAR_3[ 29 & 0x0F], ( VAR_3[29 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(30 - 3) & 0x0F] ^ VAR_3[(30 - 8) & 0x0F] ^ VAR_3[(30 - 14) & 0x0F] ^ VAR_3[ 30 & 0x0F], ( VAR_3[30 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(31 - 3) & 0x0F] ^ VAR_3[(31 - 8) & 0x0F] ^ VAR_3[(31 - 14) & 0x0F] ^ VAR_3[ 31 & 0x0F], ( VAR_3[31 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(32 - 3) & 0x0F] ^ VAR_3[(32 - 8) & 0x0F] ^ VAR_3[(32 - 14) & 0x0F] ^ VAR_3[ 32 & 0x0F], ( VAR_3[32 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(33 - 3) & 0x0F] ^ VAR_3[(33 - 8) & 0x0F] ^ VAR_3[(33 - 14) & 0x0F] ^ VAR_3[ 33 & 0x0F], ( VAR_3[33 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(34 - 3) & 0x0F] ^ VAR_3[(34 - 8) & 0x0F] ^ VAR_3[(34 - 14) & 0x0F] ^ VAR_3[ 34 & 0x0F], ( VAR_3[34 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(35 - 3) & 0x0F] ^ VAR_3[(35 - 8) & 0x0F] ^ VAR_3[(35 - 14) & 0x0F] ^ VAR_3[ 35 & 0x0F], ( VAR_3[35 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(36 - 3) & 0x0F] ^ VAR_3[(36 - 8) & 0x0F] ^ VAR_3[(36 - 14) & 0x0F] ^ VAR_3[ 36 & 0x0F], ( VAR_3[36 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(37 - 3) & 0x0F] ^ VAR_3[(37 - 8) & 0x0F] ^ VAR_3[(37 - 14) & 0x0F] ^ VAR_3[ 37 & 0x0F], ( VAR_3[37 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(38 - 3) & 0x0F] ^ VAR_3[(38 - 8) & 0x0F] ^ VAR_3[(38 - 14) & 0x0F] ^ VAR_3[ 38 & 0x0F], ( VAR_3[38 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0x6ED9EBA1 + ( VAR_2 = VAR_3[(39 - 3) & 0x0F] ^ VAR_3[(39 - 8) & 0x0F] ^ VAR_3[(39 - 14) & 0x0F] ^ VAR_3[ 39 & 0x0F], ( VAR_3[39 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };







    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_5 & VAR_6) | (VAR_7 & (VAR_5 | VAR_6))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(40 - 3) & 0x0F] ^ VAR_3[(40 - 8) & 0x0F] ^ VAR_3[(40 - 14) & 0x0F] ^ VAR_3[ 40 & 0x0F], ( VAR_3[40 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_4 & VAR_5) | (VAR_6 & (VAR_4 | VAR_5))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(41 - 3) & 0x0F] ^ VAR_3[(41 - 8) & 0x0F] ^ VAR_3[(41 - 14) & 0x0F] ^ VAR_3[ 41 & 0x0F], ( VAR_3[41 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_8 & VAR_4) | (VAR_5 & (VAR_8 | VAR_4))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(42 - 3) & 0x0F] ^ VAR_3[(42 - 8) & 0x0F] ^ VAR_3[(42 - 14) & 0x0F] ^ VAR_3[ 42 & 0x0F], ( VAR_3[42 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_7 & VAR_8) | (VAR_4 & (VAR_7 | VAR_8))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(43 - 3) & 0x0F] ^ VAR_3[(43 - 8) & 0x0F] ^ VAR_3[(43 - 14) & 0x0F] ^ VAR_3[ 43 & 0x0F], ( VAR_3[43 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_6 & VAR_7) | (VAR_8 & (VAR_6 | VAR_7))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(44 - 3) & 0x0F] ^ VAR_3[(44 - 8) & 0x0F] ^ VAR_3[(44 - 14) & 0x0F] ^ VAR_3[ 44 & 0x0F], ( VAR_3[44 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_5 & VAR_6) | (VAR_7 & (VAR_5 | VAR_6))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(45 - 3) & 0x0F] ^ VAR_3[(45 - 8) & 0x0F] ^ VAR_3[(45 - 14) & 0x0F] ^ VAR_3[ 45 & 0x0F], ( VAR_3[45 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_4 & VAR_5) | (VAR_6 & (VAR_4 | VAR_5))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(46 - 3) & 0x0F] ^ VAR_3[(46 - 8) & 0x0F] ^ VAR_3[(46 - 14) & 0x0F] ^ VAR_3[ 46 & 0x0F], ( VAR_3[46 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_8 & VAR_4) | (VAR_5 & (VAR_8 | VAR_4))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(47 - 3) & 0x0F] ^ VAR_3[(47 - 8) & 0x0F] ^ VAR_3[(47 - 14) & 0x0F] ^ VAR_3[ 47 & 0x0F], ( VAR_3[47 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_7 & VAR_8) | (VAR_4 & (VAR_7 | VAR_8))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(48 - 3) & 0x0F] ^ VAR_3[(48 - 8) & 0x0F] ^ VAR_3[(48 - 14) & 0x0F] ^ VAR_3[ 48 & 0x0F], ( VAR_3[48 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_6 & VAR_7) | (VAR_8 & (VAR_6 | VAR_7))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(49 - 3) & 0x0F] ^ VAR_3[(49 - 8) & 0x0F] ^ VAR_3[(49 - 14) & 0x0F] ^ VAR_3[ 49 & 0x0F], ( VAR_3[49 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_5 & VAR_6) | (VAR_7 & (VAR_5 | VAR_6))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(50 - 3) & 0x0F] ^ VAR_3[(50 - 8) & 0x0F] ^ VAR_3[(50 - 14) & 0x0F] ^ VAR_3[ 50 & 0x0F], ( VAR_3[50 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_4 & VAR_5) | (VAR_6 & (VAR_4 | VAR_5))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(51 - 3) & 0x0F] ^ VAR_3[(51 - 8) & 0x0F] ^ VAR_3[(51 - 14) & 0x0F] ^ VAR_3[ 51 & 0x0F], ( VAR_3[51 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_8 & VAR_4) | (VAR_5 & (VAR_8 | VAR_4))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(52 - 3) & 0x0F] ^ VAR_3[(52 - 8) & 0x0F] ^ VAR_3[(52 - 14) & 0x0F] ^ VAR_3[ 52 & 0x0F], ( VAR_3[52 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_7 & VAR_8) | (VAR_4 & (VAR_7 | VAR_8))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(53 - 3) & 0x0F] ^ VAR_3[(53 - 8) & 0x0F] ^ VAR_3[(53 - 14) & 0x0F] ^ VAR_3[ 53 & 0x0F], ( VAR_3[53 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_6 & VAR_7) | (VAR_8 & (VAR_6 | VAR_7))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(54 - 3) & 0x0F] ^ VAR_3[(54 - 8) & 0x0F] ^ VAR_3[(54 - 14) & 0x0F] ^ VAR_3[ 54 & 0x0F], ( VAR_3[54 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_5 & VAR_6) | (VAR_7 & (VAR_5 | VAR_6))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(55 - 3) & 0x0F] ^ VAR_3[(55 - 8) & 0x0F] ^ VAR_3[(55 - 14) & 0x0F] ^ VAR_3[ 55 & 0x0F], ( VAR_3[55 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_4 & VAR_5) | (VAR_6 & (VAR_4 | VAR_5))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(56 - 3) & 0x0F] ^ VAR_3[(56 - 8) & 0x0F] ^ VAR_3[(56 - 14) & 0x0F] ^ VAR_3[ 56 & 0x0F], ( VAR_3[56 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_8 & VAR_4) | (VAR_5 & (VAR_8 | VAR_4))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(57 - 3) & 0x0F] ^ VAR_3[(57 - 8) & 0x0F] ^ VAR_3[(57 - 14) & 0x0F] ^ VAR_3[ 57 & 0x0F], ( VAR_3[57 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_7 & VAR_8) | (VAR_4 & (VAR_7 | VAR_8))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(58 - 3) & 0x0F] ^ VAR_3[(58 - 8) & 0x0F] ^ VAR_3[(58 - 14) & 0x0F] ^ VAR_3[ 58 & 0x0F], ( VAR_3[58 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + ((VAR_6 & VAR_7) | (VAR_8 & (VAR_6 | VAR_7))) + 0x8F1BBCDC + ( VAR_2 = VAR_3[(59 - 3) & 0x0F] ^ VAR_3[(59 - 8) & 0x0F] ^ VAR_3[(59 - 14) & 0x0F] ^ VAR_3[ 59 & 0x0F], ( VAR_3[59 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };







    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(60 - 3) & 0x0F] ^ VAR_3[(60 - 8) & 0x0F] ^ VAR_3[(60 - 14) & 0x0F] ^ VAR_3[ 60 & 0x0F], ( VAR_3[60 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(61 - 3) & 0x0F] ^ VAR_3[(61 - 8) & 0x0F] ^ VAR_3[(61 - 14) & 0x0F] ^ VAR_3[ 61 & 0x0F], ( VAR_3[61 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(62 - 3) & 0x0F] ^ VAR_3[(62 - 8) & 0x0F] ^ VAR_3[(62 - 14) & 0x0F] ^ VAR_3[ 62 & 0x0F], ( VAR_3[62 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(63 - 3) & 0x0F] ^ VAR_3[(63 - 8) & 0x0F] ^ VAR_3[(63 - 14) & 0x0F] ^ VAR_3[ 63 & 0x0F], ( VAR_3[63 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(64 - 3) & 0x0F] ^ VAR_3[(64 - 8) & 0x0F] ^ VAR_3[(64 - 14) & 0x0F] ^ VAR_3[ 64 & 0x0F], ( VAR_3[64 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(65 - 3) & 0x0F] ^ VAR_3[(65 - 8) & 0x0F] ^ VAR_3[(65 - 14) & 0x0F] ^ VAR_3[ 65 & 0x0F], ( VAR_3[65 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(66 - 3) & 0x0F] ^ VAR_3[(66 - 8) & 0x0F] ^ VAR_3[(66 - 14) & 0x0F] ^ VAR_3[ 66 & 0x0F], ( VAR_3[66 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(67 - 3) & 0x0F] ^ VAR_3[(67 - 8) & 0x0F] ^ VAR_3[(67 - 14) & 0x0F] ^ VAR_3[ 67 & 0x0F], ( VAR_3[67 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(68 - 3) & 0x0F] ^ VAR_3[(68 - 8) & 0x0F] ^ VAR_3[(68 - 14) & 0x0F] ^ VAR_3[ 68 & 0x0F], ( VAR_3[68 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(69 - 3) & 0x0F] ^ VAR_3[(69 - 8) & 0x0F] ^ VAR_3[(69 - 14) & 0x0F] ^ VAR_3[ 69 & 0x0F], ( VAR_3[69 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(70 - 3) & 0x0F] ^ VAR_3[(70 - 8) & 0x0F] ^ VAR_3[(70 - 14) & 0x0F] ^ VAR_3[ 70 & 0x0F], ( VAR_3[70 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(71 - 3) & 0x0F] ^ VAR_3[(71 - 8) & 0x0F] ^ VAR_3[(71 - 14) & 0x0F] ^ VAR_3[ 71 & 0x0F], ( VAR_3[71 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(72 - 3) & 0x0F] ^ VAR_3[(72 - 8) & 0x0F] ^ VAR_3[(72 - 14) & 0x0F] ^ VAR_3[ 72 & 0x0F], ( VAR_3[72 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(73 - 3) & 0x0F] ^ VAR_3[(73 - 8) & 0x0F] ^ VAR_3[(73 - 14) & 0x0F] ^ VAR_3[ 73 & 0x0F], ( VAR_3[73 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(74 - 3) & 0x0F] ^ VAR_3[(74 - 8) & 0x0F] ^ VAR_3[(74 - 14) & 0x0F] ^ VAR_3[ 74 & 0x0F], ( VAR_3[74 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_8 += ((VAR_4 << 5) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_5 ^ VAR_6 ^ VAR_7) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(75 - 3) & 0x0F] ^ VAR_3[(75 - 8) & 0x0F] ^ VAR_3[(75 - 14) & 0x0F] ^ VAR_3[ 75 & 0x0F], ( VAR_3[75 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_5 = ((VAR_5 << 30) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_7 += ((VAR_8 << 5) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_4 ^ VAR_5 ^ VAR_6) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(76 - 3) & 0x0F] ^ VAR_3[(76 - 8) & 0x0F] ^ VAR_3[(76 - 14) & 0x0F] ^ VAR_3[ 76 & 0x0F], ( VAR_3[76 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_4 = ((VAR_4 << 30) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_6 += ((VAR_7 << 5) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_8 ^ VAR_4 ^ VAR_5) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(77 - 3) & 0x0F] ^ VAR_3[(77 - 8) & 0x0F] ^ VAR_3[(77 - 14) & 0x0F] ^ VAR_3[ 77 & 0x0F], ( VAR_3[77 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_8 = ((VAR_8 << 30) | ((VAR_8 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_5 += ((VAR_6 << 5) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_7 ^ VAR_8 ^ VAR_4) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(78 - 3) & 0x0F] ^ VAR_3[(78 - 8) & 0x0F] ^ VAR_3[(78 - 14) & 0x0F] ^ VAR_3[ 78 & 0x0F], ( VAR_3[78 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_7 = ((VAR_7 << 30) | ((VAR_7 & 0xFFFFFFFF) >> (32 - 30))); };
    { VAR_4 += ((VAR_5 << 5) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 5))) + (VAR_6 ^ VAR_7 ^ VAR_8) + 0xCA62C1D6 + ( VAR_2 = VAR_3[(79 - 3) & 0x0F] ^ VAR_3[(79 - 8) & 0x0F] ^ VAR_3[(79 - 14) & 0x0F] ^ VAR_3[ 79 & 0x0F], ( VAR_3[79 & 0x0F] = ((VAR_2 << 1) | ((VAR_2 & 0xFFFFFFFF) >> (32 - 1))) ) ); VAR_6 = ((VAR_6 << 30) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 30))); };




    VAR_0->state[0] += VAR_4;
    VAR_0->state[1] += VAR_5;
    VAR_0->state[2] += VAR_6;
    VAR_0->state[3] += VAR_7;
    VAR_0->state[4] += VAR_8;
}
