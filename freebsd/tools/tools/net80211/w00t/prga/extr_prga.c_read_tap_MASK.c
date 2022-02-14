
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uLong ;
struct params {char* packet; char* ap; char* mac; char* iv; int prga_len; char* prga; int packet_len; int state; scalar_t__ data_try; int seq; int tap; } ;
struct ieee80211_frame {int* i_dur; char* i_addr1; char* i_addr2; char* i_addr3; scalar_t__ i_seq; int * i_fc; } ;
typedef int dst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int) ;
 long FUNC_1 (long,char*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct params*) ;
 short FUNC_7 (int ,int ) ;

void FUNC_8(struct params *VAR_6)
{
 int VAR_7;
 char *VAR_8;
 struct ieee80211_frame *VAR_9;
 int VAR_10;
 char VAR_11[6];
 short *VAR_12;
 uLong *VAR_13;
 uLong VAR_14 = FUNC_1(0L, VAR_5, 0);

 FUNC_4(VAR_6->packet, 0, sizeof(VAR_6->packet));
 VAR_7 = sizeof(*VAR_9) + 4 + 8 - 14;
 VAR_10 = sizeof(VAR_6->packet) - VAR_7;
 VAR_8 = &VAR_6->packet[VAR_7];

 VAR_10 = FUNC_5(VAR_6->tap, VAR_8, VAR_10);
 if (VAR_10 == -1)
  FUNC_2(1, "read()");

 FUNC_3(VAR_11, VAR_8, sizeof(VAR_11));
 VAR_9 = (struct ieee80211_frame*) VAR_6->packet;
 VAR_9->i_fc[0] |= VAR_1;
 VAR_9->i_fc[0] |= VAR_0;
 VAR_9->i_fc[1] |= VAR_3;
 VAR_9->i_fc[1] |= VAR_2;

 VAR_9->i_dur[0] = 0x69;

 FUNC_3(VAR_9->i_addr1, VAR_6->ap, 6);
 FUNC_3(VAR_9->i_addr2, VAR_6->mac, 6);
 FUNC_3(VAR_9->i_addr3, VAR_11, 6);

 VAR_12 = (short*) VAR_9->i_seq;
 *VAR_12 = FUNC_7(VAR_6->seq++, 0);


 VAR_8 = (char*) (VAR_9+1);
 FUNC_3(VAR_8, VAR_6->iv, 3);
 VAR_8 += 3;
 *VAR_8++ = 0;
 FUNC_3(VAR_8, "\xAA\xAA\x03\x00\x00\x00", 6);
 VAR_10 -= 14;
 VAR_10 += 8;

 VAR_14 = FUNC_1(VAR_14, VAR_8, VAR_10);
 VAR_13 = (uLong*) (VAR_8+VAR_10);
 *VAR_13 = VAR_14;

 VAR_10 += 4;

 FUNC_0(VAR_6->prga_len >= VAR_10);


 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++)
  VAR_8[VAR_7] ^= VAR_6->prga[VAR_7];

 VAR_6->packet_len = sizeof(*VAR_9) + 4 + VAR_10;
 VAR_6->data_try = 0;
 FUNC_6(VAR_6);
 VAR_6->state = VAR_4;
}
