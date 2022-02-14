
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct poly1305_state {int* h; } ;


 int FUNC_0 (int,void*) ;

void FUNC_1(const struct poly1305_state *VAR_0, void *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;


 VAR_2 = VAR_0->h[0];
 VAR_3 = VAR_0->h[1];
 VAR_4 = VAR_0->h[2];
 VAR_5 = VAR_0->h[3];
 VAR_6 = VAR_0->h[4];

 VAR_4 += (VAR_3 >> 26); VAR_3 = VAR_3 & 0x3ffffff;
 VAR_5 += (VAR_4 >> 26); VAR_4 = VAR_4 & 0x3ffffff;
 VAR_6 += (VAR_5 >> 26); VAR_5 = VAR_5 & 0x3ffffff;
 VAR_2 += (VAR_6 >> 26) * 5; VAR_6 = VAR_6 & 0x3ffffff;
 VAR_3 += (VAR_2 >> 26); VAR_2 = VAR_2 & 0x3ffffff;


 VAR_7 = VAR_2 + 5;
 VAR_8 = VAR_3 + (VAR_7 >> 26); VAR_7 &= 0x3ffffff;
 VAR_9 = VAR_4 + (VAR_8 >> 26); VAR_8 &= 0x3ffffff;
 VAR_10 = VAR_5 + (VAR_9 >> 26); VAR_9 &= 0x3ffffff;
 VAR_11 = VAR_6 + (VAR_10 >> 26) - (1 << 26); VAR_10 &= 0x3ffffff;


 VAR_12 = (VAR_11 >> ((sizeof(u32) * 8) - 1)) - 1;
 VAR_7 &= VAR_12;
 VAR_8 &= VAR_12;
 VAR_9 &= VAR_12;
 VAR_10 &= VAR_12;
 VAR_11 &= VAR_12;
 VAR_12 = ~VAR_12;
 VAR_2 = (VAR_2 & VAR_12) | VAR_7;
 VAR_3 = (VAR_3 & VAR_12) | VAR_8;
 VAR_4 = (VAR_4 & VAR_12) | VAR_9;
 VAR_5 = (VAR_5 & VAR_12) | VAR_10;
 VAR_6 = (VAR_6 & VAR_12) | VAR_11;


 FUNC_0((VAR_2 >> 0) | (VAR_3 << 26), VAR_1 + 0);
 FUNC_0((VAR_3 >> 6) | (VAR_4 << 20), VAR_1 + 4);
 FUNC_0((VAR_4 >> 12) | (VAR_5 << 14), VAR_1 + 8);
 FUNC_0((VAR_5 >> 18) | (VAR_6 << 8), VAR_1 + 12);
}
