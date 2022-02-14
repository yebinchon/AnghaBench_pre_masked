
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tuple {int* data; int length; scalar_t__ code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int* FUNC_6 (int*,int*) ;
 int* FUNC_7 (int*,int*) ;
 int* FUNC_8 (int,int*,int*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char) ;

__attribute__((used)) static void
FUNC_12(struct tuple *VAR_5)
{
 u_char *VAR_6, *VAR_7, VAR_8;
 int VAR_9, VAR_10;
 char VAR_11;

 VAR_6 = VAR_5->data;
 VAR_7 = VAR_6 + VAR_5->length;
 FUNC_10("\tConfig index = 0x%x%s\n", *VAR_6 & 0x3F,
        *VAR_6 & 0x40 ? "(default)" : "");


 if (VAR_5->code == VAR_0 && (*VAR_6 & 0x80)) {
  VAR_6++;
  FUNC_10("\tInterface byte = 0x%x ", *VAR_6);
  switch (*VAR_6 & 0xF) {
  default:
   FUNC_10("(reserved)");
   break;
  case 0:
   FUNC_10("(memory)");
   break;
  case 1:
   FUNC_10("(I/O)");
   break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
   FUNC_10("(custom)");
   break;
  }
  VAR_11 = ' ';
  if (*VAR_6 & 0x10) {
   FUNC_10(" BVD1/2 active");
   VAR_11 = ',';
  }
  if (*VAR_6 & 0x20) {
   FUNC_10("%c card WP active", VAR_11);
   VAR_11 = ',';
  }
  if (*VAR_6 & 0x40) {
   FUNC_10("%c +RDY/-BSY active", VAR_11);
   VAR_11 = ',';
  }
  if (*VAR_6 & 0x80)
   FUNC_10("%c wait signal supported", VAR_11);
  FUNC_10("\n");
 }


 VAR_6++;
 VAR_8 = *VAR_6++;


 switch (FUNC_1(VAR_8)) {
 case 0:
  break;
 case 1:
  FUNC_10("\tVcc pwr:\n");
  VAR_6 += FUNC_9(VAR_6);
  break;
 case 2:
  FUNC_10("\tVcc pwr:\n");
  VAR_6 += FUNC_9(VAR_6);
  FUNC_10("\tVpp pwr:\n");
  VAR_6 += FUNC_9(VAR_6);
  break;
 case 3:
  FUNC_10("\tVcc pwr:\n");
  VAR_6 += FUNC_9(VAR_6);
  FUNC_10("\tVpp1 pwr:\n");
  VAR_6 += FUNC_9(VAR_6);
  FUNC_10("\tVpp2 pwr:\n");
  VAR_6 += FUNC_9(VAR_6);
  break;
 }


 if (VAR_5->code == VAR_0 &&
     (VAR_8 & VAR_4)) {
  VAR_9 = *VAR_6++;
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 != 3) {
   FUNC_10("\tWait scale ");
   FUNC_5(*VAR_6++, VAR_10);
   FUNC_10("\n");
  }
  VAR_10 = FUNC_2(VAR_9);
  if (VAR_10 != 7) {
   FUNC_10("\tRDY/BSY scale ");
   FUNC_5(*VAR_6++, VAR_10);
   FUNC_10("\n");
  }
  VAR_10 = FUNC_3(VAR_9);
  if (VAR_10 != 7) {
   FUNC_10("\tExternal scale ");
   FUNC_5(*VAR_6++, VAR_10);
   FUNC_10("\n");
  }
 }


 if (VAR_8 & VAR_2) {
  if (VAR_5->code == VAR_0)
   VAR_6 = FUNC_6(VAR_6, VAR_7);
  else {
   FUNC_10("\tI/O base:");
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
    if (*VAR_6 & (1 << VAR_9))
     FUNC_10(" %d", VAR_9);
   FUNC_11('\n');
   VAR_6++;
  }
 }


 if (VAR_8 & VAR_1)
  VAR_6 = FUNC_7(VAR_6, VAR_7);


 if (FUNC_0(VAR_8)) {
  if (VAR_5->code == VAR_0)
   VAR_6 = FUNC_8(VAR_8, VAR_6, VAR_7);
  else {
   FUNC_10("\tMemory base:");
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
    if (*VAR_6 & (1 << VAR_9))
     FUNC_10(" %d", VAR_9);
   FUNC_11('\n');
   VAR_6++;
  }
 }


 if (VAR_8 & VAR_3) {
  if (VAR_5->code == VAR_0) {
   FUNC_10("\tMax twin cards = %d\n", *VAR_6 & 7);
   FUNC_10("\tMisc attr:%s%s%s",
          (*VAR_6 & 8) ? " (Audio-BVD2)" : "",
          (*VAR_6 & 0x10) ? " (Read-only)" : "",
          (*VAR_6 & 0x20) ? " (Power down supported)" : "");
   if (*VAR_6++ & 0x80) {
    FUNC_10(" (Ext byte = 0x%x)", *VAR_6);
    VAR_6++;
   }
   FUNC_11('\n');
  }
  else {
   FUNC_10("\tMisc attr:");
   FUNC_10("%s%s%s%s%s%s%s",
          (*VAR_6 & 1) ? " (Master)" : "",
          (*VAR_6 & 2) ? " (Invalidate)" : "",
          (*VAR_6 & 4) ? " (VGA palette)" : "",
          (*VAR_6 & 8) ? " (Parity)" : "",
          (*VAR_6 & 0x10) ? " (Wait)" : "",
          (*VAR_6 & 0x20) ? " (Serr)" : "",
          (*VAR_6 & 0x40) ? " (Fast back)" : "");
   if (*VAR_6++ & 0x80) {
    FUNC_10("%s%s",
           (*VAR_6 & 1) ? " (Binary audio)" : "",
           (*VAR_6 & 2) ? " (pwm audio)" : "");
    VAR_6++;
   }
   FUNC_11('\n');
  }
 }
}
