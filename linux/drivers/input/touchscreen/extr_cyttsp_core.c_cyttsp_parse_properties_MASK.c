
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cyttsp {int use_hndshk; int act_dist; int act_intrvl; int tch_tmout; int lp_intrvl; int bl_keys; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int*) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cyttsp *VAR_9)
{
 struct device *VAR_10 = VAR_9->dev;
 u32 VAR_11;
 int VAR_12;

 VAR_9->bl_keys = FUNC_4(VAR_10, VAR_4, VAR_8);
 if (!VAR_9->bl_keys)
  return -VAR_7;


 VAR_9->use_hndshk = 0;
 VAR_9->act_dist = VAR_0;
 VAR_9->act_intrvl = VAR_2;
 VAR_9->tch_tmout = VAR_5;
 VAR_9->lp_intrvl = VAR_3;

 VAR_12 = FUNC_3(VAR_10, "bootloader-key",
         VAR_9->bl_keys, VAR_4);
 if (VAR_12) {
  FUNC_0(VAR_10,
   "bootloader-key property could not be retrieved\n");
  return VAR_12;
 }

 VAR_9->use_hndshk = FUNC_1(VAR_10, "use-handshake");

 if (!FUNC_2(VAR_10, "active-distance", &VAR_11)) {
  if (VAR_11 > 15) {
   FUNC_0(VAR_10, "active-distance (%u) must be [0-15]\n",
    VAR_11);
   return -VAR_6;
  }
  VAR_9->act_dist &= ~VAR_1;
  VAR_9->act_dist |= VAR_11;
 }

 if (!FUNC_2(VAR_10, "active-interval-ms", &VAR_11)) {
  if (VAR_11 > 255) {
   FUNC_0(VAR_10, "active-interval-ms (%u) must be [0-255]\n",
    VAR_11);
   return -VAR_6;
  }
  VAR_9->act_intrvl = VAR_11;
 }

 if (!FUNC_2(VAR_10, "lowpower-interval-ms", &VAR_11)) {
  if (VAR_11 > 2550) {
   FUNC_0(VAR_10, "lowpower-interval-ms (%u) must be [0-2550]\n",
    VAR_11);
   return -VAR_6;
  }

  VAR_9->lp_intrvl = VAR_11 / 10;
 }

 if (!FUNC_2(VAR_10, "touch-timeout-ms", &VAR_11)) {
  if (VAR_11 > 2550) {
   FUNC_0(VAR_10, "touch-timeout-ms (%u) must be [0-2550]\n",
    VAR_11);
   return -VAR_6;
  }

  VAR_9->tch_tmout = VAR_11 / 10;
 }

 return 0;
}
