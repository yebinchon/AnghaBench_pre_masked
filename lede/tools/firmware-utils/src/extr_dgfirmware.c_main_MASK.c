
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 unsigned short FUNC_0 (unsigned char*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned short FUNC_3 (unsigned char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 unsigned char* FUNC_6 (char*) ;
 int FUNC_7 (unsigned char*,char*) ;
 int FUNC_8 (unsigned char*,char*) ;
 int FUNC_9 (unsigned char*,unsigned short) ;
 int VAR_1 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (unsigned char*,char*) ;
 int FUNC_12 (unsigned char*,char*) ;
 int FUNC_13 (unsigned char*,char*) ;

int FUNC_14(int VAR_2, char* VAR_3[])
{
  char *VAR_4 = ((void*)0);
  char *VAR_5 = ((void*)0);
  char *VAR_6 = ((void*)0);
  char *VAR_7 = ((void*)0);

  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;

  int VAR_14;
  unsigned char *VAR_15;
  unsigned short VAR_16;
  unsigned short VAR_17;

  VAR_0 = VAR_3[0];

  for (VAR_14=1; VAR_14<VAR_2; VAR_14++) {
    if (!FUNC_10(VAR_3[VAR_14], "-h")) {
      FUNC_4();
      return 0;
    }
    else if (!FUNC_10(VAR_3[VAR_14], "-f")) {
      VAR_8 = 1;
    }
    else if (!FUNC_10(VAR_3[VAR_14], "-x")) {
      if (VAR_14+1 >= VAR_2) {
 FUNC_1(VAR_1, "%s: missing argument\n", VAR_0);
 return -1;
      }
      VAR_10 = 1;
      VAR_5 = VAR_3[VAR_14+1];
      VAR_14++;
    }
    else if (!FUNC_10(VAR_3[VAR_14], "-xk")) {
      if (VAR_14+1 >= VAR_2) {
 FUNC_1(VAR_1, "%s: missing argument\n", VAR_0);
 return -1;
      }
      VAR_12 = 1;
      VAR_6 = VAR_3[VAR_14+1];
      VAR_14++;
    }
    else if (!FUNC_10(VAR_3[VAR_14], "-m")) {
      if (VAR_14+1 >= VAR_2) {
 FUNC_1(VAR_1, "%s: missing argument\n", VAR_0);
 return -1;
      }
      VAR_11 = 1;
      VAR_5 = VAR_3[VAR_14+1];
      VAR_14++;
    }
    else if (!FUNC_10(VAR_3[VAR_14], "-k")) {
      if (VAR_14+1 >= VAR_2) {
 FUNC_1(VAR_1, "%s: missing argument\n", VAR_0);
 return -1;
      }
      VAR_13 = 1;
      VAR_6 = VAR_3[VAR_14+1];
      VAR_14++;
    }
    else if (!FUNC_10(VAR_3[VAR_14], "-w")) {
      if (VAR_14+1 >= VAR_2) {
 FUNC_1(VAR_1, "%s: missing argument\n", VAR_0);
 return -1;
      }
      VAR_9 = 1;
      VAR_7 = VAR_3[VAR_14+1];
      VAR_14++;
    }
    else if (VAR_4 != 0) {
      FUNC_1(VAR_1, "%s: too many arguments\n", VAR_0);
      return -1;
    }
    else {
      VAR_4 = VAR_3[VAR_14];
    }
  }

  if (VAR_4 == ((void*)0)) {
    FUNC_1(VAR_1, "%s: missing argument\n", VAR_0);
    return -1;
  }

  if ((VAR_11 && VAR_10) ||
      (VAR_13 && VAR_12)) {
    FUNC_1(VAR_1, "%s: conflictuous options\n", VAR_0);
    return -1;
  }

  FUNC_5 ("** Read firmware file\n");
  VAR_15 = FUNC_6(VAR_4);

  FUNC_5 ("Firmware product: %s\n", VAR_15+0x3dffbd);
  FUNC_5 ("Firmware version: 1.%02d.%02d\n", (VAR_15[0x3dffeb] & 0x7f), VAR_15[0x3dffec]);

  if (VAR_10) {
    FUNC_5 ("** Write rootfs file\n");
    FUNC_13(VAR_15, VAR_5);
  }

  if (VAR_12) {
    FUNC_5 ("** Write kernel file\n");
    FUNC_12(VAR_15, VAR_6);
  }

  if (VAR_11) {
    FUNC_5 ("** Read rootfs file\n");
    FUNC_8(VAR_15, VAR_5);
    VAR_8 = 1;
  }

  if (VAR_13) {
    FUNC_5 ("** Read kernel file\n");
    FUNC_7(VAR_15, VAR_6);
    VAR_8 = 1;
  }

  VAR_16 = FUNC_3(VAR_15);
  VAR_17 = FUNC_0(VAR_15);

  FUNC_5 ("image checksum = %04x\n", VAR_16);
  FUNC_5 ("real checksum  = %04x\n", VAR_17);

  if (VAR_8) {
    if (VAR_16 != VAR_17) {
      FUNC_5 ("** Bad Checksum, fix it\n");
      FUNC_9(VAR_15, VAR_17);
    }
    else {
      FUNC_5 ("** Checksum is correct, good\n");
    }
  }

  if (VAR_9) {
    FUNC_5 ("** Write image file\n");
    FUNC_11(VAR_15, VAR_7);
  }

  FUNC_2(VAR_15);
  return 0;
}
