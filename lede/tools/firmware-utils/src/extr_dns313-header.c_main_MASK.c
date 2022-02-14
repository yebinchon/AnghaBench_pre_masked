
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (size_t) ;
 int FUNC_5 (unsigned char*,int,size_t) ;
 int FUNC_6 (char const*,int,...) ;
 int FUNC_7 (char*,...) ;
 size_t FUNC_8 (int,unsigned char*,int) ;
 int FUNC_9 (char const*,struct stat*) ;
 int FUNC_10 (unsigned char*,char*,int) ;
 size_t FUNC_11 (int,unsigned char*,size_t) ;

int FUNC_12(int VAR_26, char **VAR_27)
{
 int VAR_28;
 int VAR_29;
 struct stat VAR_30;
 uint32_t VAR_31;
 uint32_t VAR_32;
 int VAR_33 = 0;
 const char *VAR_34;
 const char *VAR_35;
 unsigned char *VAR_36;
 unsigned char *VAR_37;
 uint32_t VAR_38;
 size_t VAR_39;
 size_t VAR_40;
 int VAR_41;

 if (VAR_26 < 3) {
  FUNC_7("Too few arguments.\n");
  FUNC_7("%s <infile> <outfile>\n", VAR_27[0]);
 }

 VAR_34 = VAR_27[1];
 VAR_35 = VAR_27[2];

 VAR_33 = FUNC_9(VAR_34, &VAR_30);
 if (VAR_33 < 0)
  return VAR_33;

 VAR_31 = VAR_30.st_size;
 VAR_32 = VAR_31 % 4;
 FUNC_7("INFILE: %s, size: %08x bytes\n", VAR_34, VAR_31);

 VAR_39 = VAR_31 + VAR_0;

 FUNC_7("Allocate %08x bytes\n", VAR_39);
 VAR_36 = FUNC_4(VAR_39);
 if (!VAR_36) {
  FUNC_7("OOM: could not allocate buffer\n");
  return 0;
 }

 FUNC_5(VAR_36, 0x00, VAR_39);


 VAR_28 = FUNC_6(VAR_34, VAR_20);
 if (!VAR_28) {
  FUNC_7("ERROR: could not open input file\n");
  return 0;
 }
 VAR_40 = FUNC_8(VAR_28, VAR_36 + VAR_0, VAR_31);
 if (VAR_40 < VAR_31) {
  FUNC_7("ERROR: could not read entire file\n");
  return 0;
 }
 FUNC_1(VAR_28);


 VAR_37 = VAR_36;

 FUNC_0(VAR_36 + VAR_11, VAR_1);


 FUNC_0(VAR_36 + VAR_16, 0x4c06738c);
 FUNC_0(VAR_36 + VAR_15, VAR_31);


 FUNC_0(VAR_36 + VAR_9, 0x00008000);
 FUNC_0(VAR_36 + VAR_7, 0x00008000);

 VAR_36[VAR_14] = 0x05;
 VAR_36[VAR_4] = 0x02;
 VAR_36[VAR_17] = 0x02;
 VAR_36[VAR_5] = 0x01;


 FUNC_10(VAR_36 + VAR_13, "kernel.img", VAR_3);
 VAR_36[VAR_13 + VAR_3 - 1] = '\0';
 FUNC_10(VAR_36 + VAR_12, "dns-313v3", VAR_2);
 VAR_36[VAR_12 + VAR_2 - 1] = '\0';
 FUNC_10(VAR_36 + VAR_18, "2.01b04", VAR_25);
 VAR_36[VAR_18 + VAR_25 - 1] = '\0';

 VAR_36[VAR_10] = 0x00;
 VAR_36[VAR_10 + 1] = 0x80;
 VAR_36[VAR_10 + 2] = 0xc8;
 VAR_36[VAR_10 + 3] = 0x16;
 VAR_36[VAR_10 + 4] = 0x81;
 VAR_36[VAR_10 + 5] = 0x68;


 VAR_38 = FUNC_2(0, VAR_36 + VAR_0, VAR_31);
 FUNC_0(VAR_36 + VAR_6, VAR_38);
 FUNC_7("data checksum: 0x%08x\n", VAR_38);


 VAR_38 = FUNC_2(0, VAR_36, VAR_0);
 FUNC_0(VAR_36 + VAR_8, VAR_38);
 FUNC_7("header checksum: 0x%08x\n", VAR_38);

 FUNC_7("OUTFILE: %s, size: %08x bytes\n", VAR_35, VAR_39);
 VAR_29 = FUNC_6(VAR_35, VAR_21|VAR_19|VAR_22,VAR_24|VAR_23);
 if (!VAR_29) {
  FUNC_7("ERROR: could not open output file\n");
  return 0;
 }
 VAR_40 = FUNC_11(VAR_29, VAR_36, VAR_39);
 if (VAR_40 < VAR_39) {
  FUNC_7("ERROR: could not write complete output file\n");
  return 0;
 }
 FUNC_1(VAR_29);

 FUNC_3(VAR_36);

 return 0;
}
