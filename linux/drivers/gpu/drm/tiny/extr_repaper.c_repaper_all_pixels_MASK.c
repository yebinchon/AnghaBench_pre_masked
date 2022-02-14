
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct repaper_epd {int width; } ;
typedef enum repaper_stage { ____Placeholder_repaper_stage } repaper_stage ;






 int FUNC_0 (void* const) ;

__attribute__((used)) static void FUNC_1(struct repaper_epd *VAR_0, u8 **VAR_1,
          const u8 *VAR_2, u8 VAR_3, const u8 *VAR_4,
          enum repaper_stage VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = VAR_0->width / 8; VAR_6 > 0; VAR_6--) {
  if (VAR_2) {
   u16 VAR_7 = FUNC_0(VAR_2[VAR_6 - 1]);
   u16 VAR_8 = 0xffff;

   if (VAR_4) {
    VAR_8 = FUNC_0(VAR_4[VAR_6 - 1]);

    VAR_8 = (VAR_8 ^ VAR_7) & 0x5555;
    VAR_8 |= VAR_8 << 1;
   }

   switch (VAR_5) {
   case 131:
    VAR_7 = 0xaaaa | (VAR_7 ^ 0x5555);
    break;
   case 128:
    VAR_7 = 0x5555 + (VAR_7 ^ 0x5555);
    break;
   case 130:
    VAR_7 = 0x5555 | ((VAR_7 ^ 0x5555) << 1);
    break;
   case 129:
    VAR_7 = 0xaaaa | VAR_7;
    break;
   }

   VAR_7 = (VAR_7 & VAR_8) | (~VAR_8 & 0x5555);
   *(*VAR_1)++ = VAR_7 >> 8;
   *(*VAR_1)++ = VAR_7;
  } else {
   *(*VAR_1)++ = VAR_3;
   *(*VAR_1)++ = VAR_3;
  }
 }
}
