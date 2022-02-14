
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uLong ;
struct ieee80211_frame {int* i_fc; unsigned char* i_addr3; unsigned char* i_addr2; unsigned char* i_addr1; } ;
struct ether_header {int ether_shost; int ether_dhost; } ;
typedef int paths ;
typedef int packet ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long,unsigned char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,unsigned char*,int) ;
 int FUNC_10 (char*,int,char*,unsigned char) ;
 int FUNC_11 (char*,char*,char*,char*,char*,char*) ;
 int VAR_5 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,unsigned char*,int) ;

void FUNC_14(struct ieee80211_frame* VAR_6, int VAR_7) {
 unsigned char *VAR_8;
 char VAR_9[52];
 char VAR_10[3][3];
 int VAR_11;
 int VAR_12, VAR_13;
 unsigned char VAR_14[4096];
 int VAR_15;
 struct ether_header* VAR_16;
 uLong VAR_17;
 unsigned long *VAR_18;
 unsigned char* VAR_19, *VAR_20;

 FUNC_0 (VAR_7 < sizeof(VAR_14) + sizeof(*VAR_16));

 VAR_8 = (unsigned char*) VAR_6 + sizeof(*VAR_6);

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
  FUNC_10(VAR_10[VAR_11], sizeof(VAR_10[VAR_11]), "%.2X", VAR_8[VAR_11]);

 FUNC_11(VAR_9, "%s/%s/%s/%s", VAR_0, VAR_10[0], VAR_10[1], VAR_10[2]);

 VAR_12 = FUNC_6(VAR_9, VAR_3);
 if (VAR_12 == -1)
  return;

 VAR_13 = FUNC_9(VAR_12, &VAR_14[6], sizeof(VAR_14)-6);
 if (VAR_13 == -1) {
  FUNC_7("read()");
  FUNC_3(1);
 }
 FUNC_1(VAR_12);


 VAR_15 = VAR_7 - sizeof(*VAR_6) - 4;
 if (VAR_15 > VAR_13) {
  FUNC_8("\n");
  FUNC_12("Had PRGA (%s) but too little (%d/%d)\n", VAR_9, VAR_13,
  VAR_15);
  return;
 }

 VAR_8 += 4;
 for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++)
  VAR_14[6+VAR_11] ^= VAR_8[VAR_11];

 VAR_15 -= 4;
 VAR_17 = FUNC_2(0L, VAR_4, 0);
 VAR_17 = FUNC_2(VAR_17, &VAR_14[6], VAR_15);
 VAR_18 = (unsigned long*) (&VAR_14[6+VAR_15]);

 if (*VAR_18 != VAR_17) {
  FUNC_8("\n");
  FUNC_12("HAD PRGA (%s) checksum mismatch! (%x %x)\n",
      VAR_9, *VAR_18, VAR_17);
  return;
 }


 VAR_16 = (struct ether_header*) VAR_14;
 if (VAR_6->i_fc[1] & VAR_1)
  VAR_20 = VAR_6->i_addr3;
 else
  VAR_20 = VAR_6->i_addr2;

 if (VAR_6->i_fc[1] & VAR_2)
  VAR_19 = VAR_6->i_addr3;
 else
  VAR_19 = VAR_6->i_addr1;

 FUNC_5(VAR_16->ether_dhost, VAR_19, 6);
 FUNC_5(VAR_16->ether_shost, VAR_20, 6);


 VAR_15 -= 8;
 VAR_15 += sizeof(*VAR_16);







 VAR_13 = FUNC_13(VAR_5, VAR_14, VAR_15);
 if (VAR_13 == -1) {
  FUNC_7("write()");
  FUNC_3(1);
 }
 if (VAR_13 != VAR_15) {
  FUNC_8("Wrote %d / %d\n", VAR_13, VAR_15);
  FUNC_3(1);
 }
}
