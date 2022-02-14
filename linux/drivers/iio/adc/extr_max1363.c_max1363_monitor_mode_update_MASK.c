
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max1363_state {int setupbyte; int configbyte; int monitor_on; int mask_low; int mask_high; int monitor_speed; int* thresh_low; int* thresh_high; int (* send ) (int ,int*,int) ;int client; } ;
struct TYPE_2__ {int conf; long* modemask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_0 (long const*,int ) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 TYPE_1__* VAR_12 ;
 int FUNC_3 (struct max1363_state*) ;
 size_t VAR_13 ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ,int*,int) ;
 scalar_t__ FUNC_6 (int,long const*) ;

__attribute__((used)) static int FUNC_7(struct max1363_state *VAR_14, int VAR_15)
{
 u8 *VAR_16;
 int VAR_17, VAR_18 = 3, VAR_19;
 unsigned long VAR_20;
 int VAR_21;
 const long *VAR_22;

 if (!VAR_15) {

  VAR_14->setupbyte &= ~VAR_8;
  VAR_14->configbyte &= ~VAR_7;
  VAR_14->monitor_on = 0;
  return FUNC_3(VAR_14);
 }


 VAR_14->setupbyte |= VAR_8;
 VAR_14->configbyte &= ~(VAR_3
       | VAR_7
   | VAR_9);
 VAR_14->configbyte |= VAR_4;
 if ((VAR_14->mask_low | VAR_14->mask_high) & 0x0F) {
  VAR_14->configbyte |= VAR_12[VAR_13].conf;
  VAR_22 = VAR_12[VAR_13].modemask;
 } else if ((VAR_14->mask_low | VAR_14->mask_high) & 0x30) {
  VAR_14->configbyte |= VAR_12[VAR_10].conf;
  VAR_22 = VAR_12[VAR_10].modemask;
 } else {
  VAR_14->configbyte |= VAR_12[VAR_11].conf;
  VAR_22 = VAR_12[VAR_11].modemask;
 }
 VAR_20 = FUNC_0(VAR_22, VAR_5);
 VAR_21 = 3 * VAR_20 + 3;
 VAR_16 = FUNC_2(VAR_21, VAR_2);
 if (!VAR_16) {
  VAR_17 = -VAR_1;
  goto error_ret;
 }
 VAR_16[0] = VAR_14->configbyte;
 VAR_16[1] = VAR_14->setupbyte;
 VAR_16[2] = (VAR_14->monitor_speed << 1);





 for (VAR_19 = 0; VAR_19 < 8; VAR_19++)
  if (FUNC_6(VAR_19, VAR_22)) {

   if (VAR_14->mask_low & (1 << VAR_19)) {
    VAR_16[VAR_18] = (VAR_14->thresh_low[VAR_19] >> 4) & 0xFF;
    VAR_16[VAR_18 + 1] = (VAR_14->thresh_low[VAR_19] << 4) & 0xF0;
   } else if (VAR_19 < 4) {
    VAR_16[VAR_18] = 0;
    VAR_16[VAR_18 + 1] = 0;
   } else {
    VAR_16[VAR_18] = 0x80;
    VAR_16[VAR_18 + 1] = 0;
   }
   if (VAR_14->mask_high & (1 << VAR_19)) {
    VAR_16[VAR_18 + 1] |=
     (VAR_14->thresh_high[VAR_19] >> 8) & 0x0F;
    VAR_16[VAR_18 + 2] = VAR_14->thresh_high[VAR_19] & 0xFF;
   } else if (VAR_19 < 4) {
    VAR_16[VAR_18 + 1] |= 0x0F;
    VAR_16[VAR_18 + 2] = 0xFF;
   } else {
    VAR_16[VAR_18 + 1] |= 0x07;
    VAR_16[VAR_18 + 2] = 0xFF;
   }
   VAR_18 += 3;
  }


 VAR_17 = VAR_14->send(VAR_14->client, VAR_16, VAR_21);
 if (VAR_17 < 0)
  goto error_ret;
 if (VAR_17 != VAR_21) {
  VAR_17 = -VAR_0;
  goto error_ret;
 }
 VAR_16[0] = VAR_14->setupbyte;
 VAR_16[1] = VAR_6 | (VAR_14->monitor_speed << 1) | 0xF0;
 VAR_17 = VAR_14->send(VAR_14->client, VAR_16, 2);
 if (VAR_17 < 0)
  goto error_ret;
 if (VAR_17 != 2) {
  VAR_17 = -VAR_0;
  goto error_ret;
 }
 VAR_17 = 0;
 VAR_14->monitor_on = 1;
error_ret:

 FUNC_1(VAR_16);

 return VAR_17;
}
