
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = 10;
 while ((VAR_5 = FUNC_2(VAR_3, VAR_4, "n:sx")) != -1) {
  switch (VAR_5) {
  case 'n':
   VAR_8 = FUNC_5(VAR_1, ((void*)0), 10);
   break;
  case 's':
   VAR_9 = 1;
   break;
  case 'x':
   VAR_10 = 16;
   break;
  case '?':
  default:
   FUNC_6();
  }
 }
 VAR_3 -= VAR_2;
 VAR_4 += VAR_2;

 if (VAR_3 > 0)
  FUNC_3("%s\n", VAR_4[0]);
 VAR_6 = VAR_7 = 0;
 while((VAR_5 = FUNC_1()) != VAR_0) {
  if (VAR_6) {
   FUNC_4(',');
   VAR_7++;
  }
  if ((VAR_8 == 0 && VAR_7 > 70) ||
      (VAR_8 > 0 && VAR_6 >= VAR_8)) {
   FUNC_4('\n');
   VAR_6 = VAR_7 = 0;
  }
  if (VAR_9) {
   if (VAR_6) {
    FUNC_4(' ');
    VAR_7++;
   } else {
    FUNC_4('\t');
    VAR_7 += 8;
   }
  }
  switch (VAR_10) {
  case 10:
   VAR_7 += FUNC_3("%d", VAR_5);
   break;
  case 16:
   VAR_7 += FUNC_3("0x%02x", VAR_5);
   break;
  default:
   FUNC_0();
  }
  VAR_6++;
 }
 FUNC_4('\n');
 if (VAR_3 > 1)
  FUNC_3("%s\n", VAR_4[1]);
 return (0);
}
