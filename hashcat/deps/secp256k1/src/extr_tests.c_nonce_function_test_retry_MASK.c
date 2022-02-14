
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned char const*,unsigned char const*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, const unsigned char *VAR_1, const unsigned char *VAR_2, const unsigned char *VAR_3, void *VAR_4, unsigned int VAR_5) {

   if (VAR_5 < 3) {
       FUNC_1(VAR_0, VAR_5==0 ? 0 : 255, 32);
       if (VAR_5 == 2) {
           VAR_0[31]--;
       }
       return 1;
   }
   if (VAR_5 < 5) {
       static const unsigned char VAR_6[] = {
           0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
           0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
           0xBA,0xAE,0xDC,0xE6,0xAF,0x48,0xA0,0x3B,
           0xBF,0xD2,0x5E,0x8C,0xD0,0x36,0x41,0x41
       };
       FUNC_0(VAR_0, VAR_6, 32);
       if (VAR_5 == 4) {
           VAR_0[31]++;
       }
       return 1;
   }


   if (VAR_5 > 5) {
       return 0;
   }
   return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5 - 5);
}
