
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;

int FUNC_0(const uint8_t *VAR_1,
         uint8_t *VAR_2)
{
 uint8_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;


 VAR_4 = VAR_5 = VAR_6 = 0;


 for(VAR_9 = 0; VAR_9 < 256; VAR_9++) {

  VAR_3 = VAR_0[*VAR_1++];
  VAR_4 ^= (VAR_3 & 0x3f);


  if (VAR_3 & 0x40) {
   VAR_6 ^= (uint8_t) VAR_9;
   VAR_5 ^= ~((uint8_t) VAR_9);
  }
 }


 VAR_7 = (VAR_6 & 0x80) >> 0;
 VAR_7 |= (VAR_5 & 0x80) >> 1;
 VAR_7 |= (VAR_6 & 0x40) >> 1;
 VAR_7 |= (VAR_5 & 0x40) >> 2;
 VAR_7 |= (VAR_6 & 0x20) >> 2;
 VAR_7 |= (VAR_5 & 0x20) >> 3;
 VAR_7 |= (VAR_6 & 0x10) >> 3;
 VAR_7 |= (VAR_5 & 0x10) >> 4;

 VAR_8 = (VAR_6 & 0x08) << 4;
 VAR_8 |= (VAR_5 & 0x08) << 3;
 VAR_8 |= (VAR_6 & 0x04) << 3;
 VAR_8 |= (VAR_5 & 0x04) << 2;
 VAR_8 |= (VAR_6 & 0x02) << 2;
 VAR_8 |= (VAR_5 & 0x02) << 1;
 VAR_8 |= (VAR_6 & 0x01) << 1;
 VAR_8 |= (VAR_5 & 0x01) << 0;






 VAR_2[0] = ~VAR_7;
 VAR_2[1] = ~VAR_8;

 VAR_2[2] = ((~VAR_4) << 2) | 0x03;

 return 0;
}
