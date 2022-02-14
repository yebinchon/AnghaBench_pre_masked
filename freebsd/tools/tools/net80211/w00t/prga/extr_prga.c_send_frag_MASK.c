
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uLong ;
struct params {int prga_len; int data_ptr; int data; int data_len; int ap; int mac; int seq; int frag; int iv; char* prga; int packet_len; int state; scalar_t__ packet; } ;
struct ieee80211_frame {int* i_dur; char* i_addr1; char* i_addr2; scalar_t__ i_seq; scalar_t__ i_addr3; int * i_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 long FUNC_0 (long,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 int FUNC_4 (struct params*) ;
 short FUNC_5 (int,int) ;

void FUNC_6(struct params *VAR_7)
{
 struct ieee80211_frame *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0;
 short *VAR_12;
 char *VAR_13;
 uLong *VAR_14;
 uLong VAR_15 = FUNC_0(0L, VAR_6, 0);
 int VAR_16;

 FUNC_2(VAR_7->packet, 0, sizeof(VAR_7->packet));
 VAR_8 = (struct ieee80211_frame*) VAR_7->packet;


 VAR_9 = VAR_7->prga_len - 4;
 VAR_10 = VAR_7->data_ptr - VAR_7->data;
 VAR_10 = VAR_7->data_len - VAR_10;

 if (VAR_10 <= VAR_9) {
  VAR_9 = VAR_10;
  VAR_11 = 1;
 }


 VAR_8->i_fc[0] |= VAR_1;
 VAR_8->i_fc[0] |= VAR_0;
 VAR_8->i_fc[1] |= VAR_4;
 VAR_8->i_fc[1] |= VAR_2;
 if (!VAR_11)
  VAR_8->i_fc[1] |= VAR_3;

 VAR_8->i_dur[0] = 0x69;
 VAR_8->i_dur[1] = 0x00;

 FUNC_1(VAR_8->i_addr1, VAR_7->ap, 6);
 FUNC_1(VAR_8->i_addr2, VAR_7->mac, 6);
 FUNC_2(VAR_8->i_addr3, 0xff, 6);

 VAR_12 = (short*) VAR_8->i_seq;
 *VAR_12 = FUNC_5(VAR_7->seq, VAR_7->frag);
 VAR_7->frag++;


 VAR_13 = (char*) (VAR_8+1);
 FUNC_1(VAR_13, VAR_7->iv, 3);
 VAR_13 += 4;
 FUNC_1(VAR_13, VAR_7->data_ptr, VAR_9);


 VAR_15 = FUNC_0(VAR_15, VAR_13, VAR_9);
 VAR_14 = (uLong*) (VAR_13+VAR_9);
 *VAR_14 = VAR_15;


 for (VAR_16 = 0; VAR_16 < VAR_9+4; VAR_16++)
  VAR_13[VAR_16] = VAR_13[VAR_16] ^ VAR_7->prga[VAR_16];


 VAR_7->packet_len = sizeof(*VAR_8) + 4 + VAR_9 + 4;
 VAR_7->data_ptr += VAR_9;




 if (VAR_11) {
  VAR_7->data_ptr = VAR_7->data;
  VAR_7->frag = 0;
  VAR_7->seq++;
 }


 FUNC_4(VAR_7);
 VAR_7->state = VAR_5;
}
