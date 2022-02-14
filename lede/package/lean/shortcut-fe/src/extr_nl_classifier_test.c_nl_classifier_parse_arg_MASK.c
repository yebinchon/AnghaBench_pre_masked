
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned short FUNC_0 (unsigned short) ;
 int FUNC_1 (int,char*,unsigned long*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 unsigned short FUNC_4 (char*,int *,int ) ;

int FUNC_5(int VAR_4, char *VAR_5[], unsigned char *VAR_6, unsigned long *VAR_7,
       unsigned long *VAR_8, unsigned short *VAR_9, unsigned short *VAR_10, int *VAR_11)
{
 int VAR_12;
 unsigned short VAR_13;

 if (VAR_4 < 7) {
  FUNC_2("help: nl_classifier <v4|v6> <udp|tcp> <source ip> <destination ip> <source port> <destination port>\n");
  return -1;
 }

 if (0 == FUNC_3(VAR_5[1], "v4", 2)) {
  *VAR_11 = VAR_0;
 } else if (0 == FUNC_3(VAR_5[1], "v6", 2)) {
  *VAR_11 = VAR_1;
 } else {
  FUNC_2("Address family is not supported");
  return -1;
 }

 if (0 == FUNC_3(VAR_5[2], "udp", 3)) {
  *VAR_6 = VAR_3;
 } else if (0 == FUNC_3(VAR_5[2], "tcp", 3)) {
  *VAR_6 = VAR_2;
 } else {
  FUNC_2("Protocol is not supported");
  return -1;
 }

 VAR_12 = FUNC_1(*VAR_11, VAR_5[3], VAR_7);
 if (VAR_12 <= 0) {
  FUNC_2("source ip has wrong format\n");
  return -1;
 }

 VAR_12 = FUNC_1(*VAR_11, VAR_5[4], VAR_8);
 if (VAR_12 <= 0) {
  FUNC_2("destination ip has wrong format\n");
  return -1;
 }

 VAR_13 = FUNC_4(VAR_5[5], ((void*)0), 0);
 *VAR_9 = FUNC_0(VAR_13);
 VAR_13 = FUNC_4(VAR_5[6], ((void*)0), 0);
 *VAR_10 = FUNC_0(VAR_13);

 FUNC_2("nl classifier parse arguments successful\n");
 return 0;
}
