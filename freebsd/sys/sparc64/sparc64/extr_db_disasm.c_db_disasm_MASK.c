
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc_insn {unsigned int match; char* format; scalar_t__ name; } ;
typedef int int64_t ;
typedef scalar_t__ db_addr_t ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 unsigned int FUNC_5 (int) ;
 unsigned int FUNC_6 (int) ;
 unsigned int FUNC_7 (int,int) ;
 unsigned int FUNC_8 (int,int,int) ;
 int FUNC_9 (unsigned int,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int * VAR_2 ;
 unsigned int FUNC_12 (scalar_t__,int,int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (scalar_t__,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

db_addr_t
FUNC_15(db_addr_t VAR_8, bool VAR_9)
{
 const struct sparc_insn* VAR_10 = (struct sparc_insn *)&VAR_6;
 unsigned int VAR_11, VAR_12, VAR_13;
 int VAR_14;
 const char* VAR_15, *VAR_16;

 VAR_12 = 0;
 VAR_14 = 0;
 VAR_11 = FUNC_12(VAR_8, 4, 0);

 if (VAR_11 == 0x01000000) {
  FUNC_13("nop\n");
  return VAR_8 + 4;
 }

 while (VAR_10->name) {

  VAR_13= (VAR_10->match);
  VAR_12 = (~VAR_13);

  if (((VAR_13>>30) & 0x3) == 0x1) {

   VAR_12 = ((~0x1)<<30);
  } else if (((VAR_13>>30) & 0x3) == 0x0) {
   if (((VAR_13>>22) & 0x7) == 0x4) {

    VAR_12 &= (FUNC_7(0x3,0x7));
   } else {

    VAR_12 &= (FUNC_7(0x3,0x7) |
        FUNC_2(0xf));
   }
  } else if (((VAR_13>>30) & 0x3) == 0x2 &&
      ((VAR_13>>19) & 0x3f) == 0x34) {

   VAR_12 &= (FUNC_8(0x3,0x3f,0x1) |
       FUNC_4(0x1ff));
  } else if (((VAR_13>>30) & 0x3) == 0x2 &&
      ((VAR_13>>19) & 0x3f) == 0x3a) {

   VAR_12 &= (FUNC_8(0x3,0x3f,0x1) | FUNC_6(0xf));
  } else if (((VAR_13>>30) & 0x3) == 0x2 &&
      ((VAR_13>>21) & 0xf) == 0x9 &&
      ((VAR_13>>19) & 0x3) != 0) {

   VAR_12 &= (FUNC_8(0x3,0x3f,0x1)) | FUNC_5(1);
  } else if (((VAR_13>>30) & 0x3) == 0x2 &&
      ((VAR_13>>19) & 0x3f) == 0x2c) {

   VAR_12 &= (FUNC_8(0x3,0x3f,0x1) | FUNC_0(1,0xf));
  } else if (((VAR_13>>30) & 0x3) == 0x2 &&
      ((VAR_13>>19) & 0x3f) == 0x35) {

   VAR_12 &= (FUNC_8(0x3,0x3f,0x1) | FUNC_0(1,0xf));
  } else {
   VAR_12 &= (FUNC_8(0x3,0x3f,0x1));
  }

  if (((VAR_13 & VAR_11) == VAR_13) && ((VAR_12 & VAR_11) == 0)) {
   VAR_14 = 1;
   break;
  }
  VAR_10++;
 }

 if (!VAR_14) {
  FUNC_13("undefined\n");
  return VAR_8 + 4;
 }

 FUNC_13("%s", VAR_10->name);

 VAR_15 = VAR_10->format;

 for (VAR_16 = VAR_15; *VAR_16; VAR_16++) {
  if (*VAR_16 == ',') {
   for (;VAR_15 < VAR_16; VAR_15++)
    switch (*VAR_15) {
    case 'a':
     if (VAR_11 & FUNC_1(1))
      FUNC_13(",a");
     break;
    case 'p':
     if (VAR_11 & FUNC_3(1))
      FUNC_13(",pt");
     else
      FUNC_13(",pn");
     break;
    }
   VAR_15++;
   break;
  }
 }
 FUNC_13("      \t");

 while (*VAR_15) {
  switch (*VAR_15) {
   int64_t VAR_17;
  case '1':
   FUNC_13("%%%s", VAR_5[((VAR_11 >> 14) & 0x1f)]);
   break;
  case '2':
   FUNC_13("%%%s", VAR_5[(VAR_11 & 0x1f)]);
   break;
  case 'd':
   FUNC_13("%%%s", VAR_5[((VAR_11 >> 25) & 0x1f)]);
   break;
  case '3':
   FUNC_13("%%f%d", ((VAR_11 >> 14) & 0x1f));
   break;
  case '4':
   FUNC_13("%%f%d", (VAR_11 & 0x1f));
   break;
  case 'e':
   FUNC_13("%%f%d", ((VAR_11 >> 25) & 0x1f));
   break;
  case 'i':

   VAR_17 = FUNC_9(VAR_11, 13);
   FUNC_13("%s0x%x", FUNC_10(VAR_17), (int)FUNC_11(VAR_17));
   break;
  case 'j':

   VAR_17 = FUNC_9(VAR_11, 11);
   FUNC_13("%s0x%x", FUNC_10(VAR_17), (int)FUNC_11(VAR_17));
   break;
  case 'l':
   VAR_17 = (((VAR_11>>20)&0x3)<<13)|(VAR_11 & 0x1fff);
   VAR_17 = FUNC_9(VAR_17, 16);
   FUNC_14((db_addr_t)(VAR_8 + (4 * VAR_17)), VAR_0);
   break;
  case 'm':
   FUNC_14((db_addr_t)(VAR_8 + (4 * FUNC_9(VAR_11, 22))),
    VAR_0);
   break;
  case 'u':
   FUNC_14((db_addr_t)(VAR_8 + (4 * FUNC_9(VAR_11, 19))),
       VAR_0);
   break;
  case 'n':
   FUNC_14((db_addr_t)(VAR_8 + (4 * FUNC_9(VAR_11, 30))),
       VAR_1);
   break;
  case 's':
   FUNC_13("%%asi");
   break;
  case 't':
   FUNC_13("0x%-2.2x", ((VAR_11 >> 5) & 0xff));
   break;
  case 'o':
   FUNC_13("%%fcc%d", ((VAR_11 >> 25) & 0x3));
   break;
  case 'p':
  case '7':
   FUNC_13("[%%%s + %%%s]",
      VAR_5[((VAR_11 >> 14) & 0x1f)],
      VAR_5[(VAR_11 & 0x1f)]);
   if (*VAR_15 == '7')
    FUNC_13(" %d", ((VAR_11 >> 5) & 0xff));
   break;
  case 'q':
  case '8':
   VAR_17 = FUNC_9(VAR_11, 13);
   FUNC_13("[%%%s %c 0x%x]",
    VAR_5[((VAR_11 >> 14) & 0x1f)],
    (int)((VAR_17<0)?'-':'+'),
    (int)FUNC_11(VAR_17));
   if (*VAR_15 == '8')
    FUNC_13(" %%asi");
   break;
  case '5':
   FUNC_13("%%fsr");
   break;
  case '6':
   FUNC_13("%%fsr");
   break;
  case '9':
   FUNC_13("0x%xl",
      ((VAR_11 & 0xf) | ((VAR_11 >> 4) & 0x7)));
   break;
  case '0':
   FUNC_13("%%%s", VAR_2[((VAR_11 >> 11) & 0x3) + 4]);
   break;
  case '.':
   FUNC_13("%%%s", VAR_2[((VAR_11 >> 11) & 0x7)]);
   break;
  case 'r':
   FUNC_13("#%s", VAR_3[((VAR_11 >> 25) & 0x1f)]);
   break;
  case 'A':
   FUNC_13("%%%s", VAR_4[((VAR_11 >> 14) & 0x1f)]);
   break;
  case 'B':
   FUNC_13("%%%s", VAR_7[((VAR_11 >> 14) & 0x1f)]);
   break;
  case 'C':
   FUNC_13("%%hi(0x%x)", ((VAR_11 & 0x3fffff) << 10));
   break;
  case 'D':
   FUNC_13("0x%x", (VAR_11 & 0x1f));
   break;
  case 'E':
   FUNC_13("%d", (VAR_11 & 0x3f));
   break;
  case 'F':
   FUNC_13("%d", (VAR_11 & 0x3f));
   break;
  case 'G':
   FUNC_13("%%%s", VAR_4[((VAR_11 >> 25) & 0x1f)]);
   break;
  case 'H':
   FUNC_13("%%%s", VAR_7[((VAR_11 >> 25) & 0x1f)]);
   break;
  default:
   FUNC_13("(UNKNOWN)");
   break;
  }
  if (*(++VAR_15))
   FUNC_13(", ");
 }

 FUNC_13("\n");

 return (VAR_8 + 4);
}
