
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int ) ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (char*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 char* FUNC_8 (size_t) ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (char*,char*,size_t) ;
 int FUNC_13 (char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

int
FUNC_16(int VAR_25, char *VAR_26[])
{
 int VAR_27;

 while ((VAR_27 = FUNC_7(VAR_25, VAR_26, "w:td")) != -1)
  switch (VAR_27) {
  case 'd':
   VAR_6 = 1;
   break;
  case 't':
   VAR_21 = 1;
   break;
  case 'w':
   VAR_22 = FUNC_0(VAR_14);
   if (VAR_22 <= 0 || VAR_22 > VAR_0)
    FUNC_2(1, "illegal argument for -w option");
   break;
  case '?':
  default:
   FUNC_14();
  }
 VAR_25 -= VAR_15;
 VAR_26 += VAR_15;

 for (VAR_7 = 0; VAR_7 < VAR_22; VAR_7++) {
  VAR_8 = VAR_7 * VAR_0 / VAR_22;
  VAR_17[VAR_8] = 1;
 }


 if (*VAR_26) {
  for(VAR_7=0, VAR_8=0; VAR_7 < VAR_25; VAR_7++)
   VAR_8 += FUNC_13(VAR_26[VAR_7]) + 1;
  if ((VAR_12 = FUNC_8((size_t)VAR_8)) == ((void*)0))
   FUNC_1(1, "malloc");
  FUNC_12(VAR_12, *VAR_26, VAR_8);
  while (*++VAR_26) {
   FUNC_11(VAR_12, " ", VAR_8);
   FUNC_11(VAR_12, *VAR_26, VAR_8);
  }
  VAR_13 = FUNC_13(VAR_12);
 } else {
  if ((VAR_12 = FUNC_8((size_t)VAR_1)) == ((void*)0))
   FUNC_1(1, "malloc");
  FUNC_5(VAR_18,"Message: ");
  if (FUNC_4(VAR_12, VAR_1, VAR_19) == ((void*)0)) {
   VAR_13 = 0;
   VAR_12[0] = '\0';
  } else {
   VAR_13 = FUNC_13(VAR_12);


   if (VAR_12[VAR_13 - 1] == '\n')
    VAR_12[--VAR_13] = '\0';
  }
 }


 if (VAR_6) {
  FUNC_9("const int asc_ptr[NCHARS] = {\n");
  for (VAR_7 = 0; VAR_7 < 128; VAR_7++) {
   FUNC_9("%4d,   ",VAR_4[VAR_7]);
   if ((VAR_7+1) % 8 == 0)
    FUNC_9("\n");
  }
  FUNC_9("};\nconst unsigned char data_table[NBYTES] = {\n");
  FUNC_9("/*          ");
  for (VAR_7 = 0; VAR_7 < 10; VAR_7++) FUNC_9(" %3d  ",VAR_7);
  FUNC_9("*/\n");
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += 10) {
   FUNC_9("/* %4d */  ",VAR_7);
   for (VAR_8 = VAR_7; VAR_8 < VAR_7+10; VAR_8++) {
    VAR_23 = VAR_5[VAR_8] & 0377;
    FUNC_9(" %3d, ",VAR_23);
   }
   FUNC_10('\n');
  }
  FUNC_9("};\n");
 }


 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_13; VAR_7++)
  if ((u_char) VAR_12[VAR_7] >= VAR_3 ||
      VAR_4[(u_char) VAR_12[VAR_7]] == 0) {
   FUNC_15("the character '%c' is not in my character set",
    VAR_12[VAR_7]);
   VAR_8++;
  }
 if (VAR_8)
  FUNC_3(1);

 if (VAR_21)
  FUNC_9("Message '%s' is OK\n",VAR_12);


 for (VAR_7 = 0; VAR_7 < VAR_13; VAR_7++) {
  if (VAR_21)
   FUNC_9("Char #%d: %c\n", VAR_7, VAR_12[VAR_7]);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) VAR_9[VAR_8] = ' ';
  VAR_16 = VAR_4[(u_char) VAR_12[VAR_7]];
  VAR_20 = 0;
  VAR_11 = 0;
  VAR_10 = 0;
  while (!VAR_20) {
   if (VAR_16 < 0 || VAR_16 > VAR_2) {
    FUNC_9("bad pc: %d\n",VAR_16);
    FUNC_3(1);
   }
   VAR_23 = VAR_5[VAR_16] & 0377;
   if (VAR_21)
    FUNC_9("pc=%d, term=%d, max=%d, linen=%d, x=%d\n",VAR_16,VAR_20,VAR_11,VAR_10,VAR_23);
   if (VAR_23 >= 128) {
    if (VAR_23>192) VAR_20++;
    VAR_23 = VAR_23 & 63;
    while (VAR_23--) {
     if (VAR_17[VAR_10++]) {
      for (VAR_8=0; VAR_8 <= VAR_11; VAR_8++)
       if (VAR_17[VAR_8])
        FUNC_10(VAR_9[VAR_8]);
      FUNC_10('\n');
     }
    }
    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) VAR_9[VAR_8] = ' ';
    VAR_16++;
   }
   else {
    VAR_24 = VAR_5[VAR_16+1];





    VAR_11 = VAR_23+VAR_24;
    while (VAR_23 < VAR_11) VAR_9[VAR_23++] = '#';
    VAR_16 += 2;
    if (VAR_21)
     FUNC_9("x=%d, y=%d, max=%d\n",VAR_23,VAR_24,VAR_11);
   }
  }
 }

 FUNC_6(VAR_12);
 FUNC_3(0);
}
