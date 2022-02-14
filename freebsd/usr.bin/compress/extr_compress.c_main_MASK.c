
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int newname ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,char*,size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int ,char**,int) ;
 int FUNC_11 (int) ;
 int VAR_5 ;

int
FUNC_12(int VAR_6, char *VAR_7[])
{
 enum {COMPRESS, DECOMPRESS} VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char *VAR_13, VAR_14[VAR_0];

 VAR_11 = 0;
 if ((VAR_13 = FUNC_9(VAR_7[0], '/')) == ((void*)0))
  VAR_13 = VAR_7[0];
 else
  ++VAR_13;
 if (!FUNC_7(VAR_13, "uncompress"))
  VAR_8 = DECOMPRESS;
 else if (!FUNC_7(VAR_13, "compress"))
  VAR_8 = COMPRESS;
 else if (!FUNC_7(VAR_13, "zcat")) {
  VAR_11 = 1;
  VAR_8 = DECOMPRESS;
 } else
  FUNC_3(1, "unknown program name");

 VAR_10 = 0;
 while ((VAR_12 = FUNC_5(VAR_6, VAR_7, "b:cdfv")) != -1)
  switch(VAR_12) {
  case 'b':
   VAR_10 = FUNC_10(VAR_3, &VAR_13, 10);
   if (*VAR_13)
    FUNC_3(1, "illegal bit count -- %s", VAR_3);
   break;
  case 'c':
   VAR_11 = 1;
   break;
  case 'd':
   VAR_8 = DECOMPRESS;
   break;
  case 'f':
   VAR_2 = 1;
   break;
  case 'v':
   VAR_5 = 1;
   break;
  case '?':
  default:
   FUNC_11(VAR_8 == COMPRESS);
  }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;

 if (VAR_6 == 0) {
  switch(VAR_8) {
  case COMPRESS:
   (void)FUNC_0("/dev/stdin", "/dev/stdout", VAR_10);
   break;
  case DECOMPRESS:
   (void)FUNC_2("/dev/stdin", "/dev/stdout", VAR_10);
   break;
  }
  FUNC_4 (VAR_1);
 }

 if (VAR_11 == 1 && VAR_8 == COMPRESS && VAR_6 > 1)
  FUNC_3(1, "the -c option permits only a single file argument");

 for (; *VAR_7; ++VAR_7)
  switch(VAR_8) {
  case COMPRESS:
   if (FUNC_7(*VAR_7, "-") == 0) {
    FUNC_0("/dev/stdin", "/dev/stdout", VAR_10);
    break;
   } else if (VAR_11) {
    FUNC_0(*VAR_7, "/dev/stdout", VAR_10);
    break;
   }
   if ((VAR_13 = FUNC_9(*VAR_7, '.')) != ((void*)0) &&
       !FUNC_7(VAR_13, ".Z")) {
    FUNC_1("%s: name already has trailing .Z",
        *VAR_7);
    break;
   }
   VAR_9 = FUNC_8(*VAR_7);
   if (VAR_9 > sizeof(VAR_14) - 3) {
    FUNC_1("%s: name too long", *VAR_7);
    break;
   }
   FUNC_6(VAR_14, *VAR_7, VAR_9);
   VAR_14[VAR_9] = '.';
   VAR_14[VAR_9 + 1] = 'Z';
   VAR_14[VAR_9 + 2] = '\0';
   FUNC_0(*VAR_7, VAR_14, VAR_10);
   break;
  case DECOMPRESS:
   if (FUNC_7(*VAR_7, "-") == 0) {
    FUNC_2("/dev/stdin", "/dev/stdout", VAR_10);
    break;
   }
   VAR_9 = FUNC_8(*VAR_7);
   if ((VAR_13 = FUNC_9(*VAR_7, '.')) == ((void*)0) ||
       FUNC_7(VAR_13, ".Z")) {
    if (VAR_9 > sizeof(VAR_14) - 3) {
     FUNC_1("%s: name too long", *VAR_7);
     break;
    }
    FUNC_6(VAR_14, *VAR_7, VAR_9);
    VAR_14[VAR_9] = '.';
    VAR_14[VAR_9 + 1] = 'Z';
    VAR_14[VAR_9 + 2] = '\0';
    FUNC_2(VAR_14,
        VAR_11 ? "/dev/stdout" : *VAR_7, VAR_10);
   } else {
    if (VAR_9 - 2 > sizeof(VAR_14) - 1) {
     FUNC_1("%s: name too long", *VAR_7);
     break;
    }
    FUNC_6(VAR_14, *VAR_7, VAR_9 - 2);
    VAR_14[VAR_9 - 2] = '\0';
    FUNC_2(*VAR_7,
        VAR_11 ? "/dev/stdout" : VAR_14, VAR_10);
   }
   break;
  }
 FUNC_4 (VAR_1);
}
