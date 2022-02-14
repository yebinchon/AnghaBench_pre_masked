
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node_info {int wep; int ap; int mac; scalar_t__* ssid; int chan; } ;
struct ieee80211_frame {int* i_fc; scalar_t__* i_addr2; } ;
struct TYPE_2__ {int chan; } ;


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
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,struct node_info*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int FUNC_4 (int,int,char*,...) ;

int FUNC_5(struct ieee80211_frame* VAR_12,
       unsigned char* VAR_13, int VAR_14,
       struct node_info* VAR_15) {

 int VAR_16, VAR_17;

 VAR_15->chan = VAR_11.chan;
 VAR_15->wep = -1;
 VAR_15->ssid[0] = 0;
 VAR_15->ap = -1;

 VAR_16 = VAR_12->i_fc[0] & VAR_7;

 if (VAR_16 == VAR_5)
  return 0;






 VAR_17 = VAR_12->i_fc[0] & VAR_4;

 if (VAR_16 == VAR_8 &&
     VAR_17 == VAR_2) {
  FUNC_1(VAR_13, VAR_14, VAR_15);
  VAR_15->ap = 1;
 }

 else if (VAR_16 == VAR_6 &&
     VAR_17 == VAR_3) {

  if (VAR_12->i_fc[1] & VAR_10) {
   unsigned char* VAR_18;

   VAR_15->wep = VAR_0;

   VAR_18 = VAR_13;
   VAR_18 += 3;


   if (*VAR_18 & (1 << 1)) {





   }
  }

  if (VAR_12->i_fc[1] & VAR_9)
   VAR_15->ap = 1;
  else
   VAR_15->ap = 0;
 }

 FUNC_3(VAR_15->mac, VAR_12->i_addr2, 6);
 return 1;
}
