
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,char const*) ;
 int FUNC_1 (int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,char const*) ;
 unsigned long VAR_2 ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char const*,int ) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 unsigned long FUNC_7 (char*,char**,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,unsigned long) ;

int
FUNC_10(int VAR_9, char **VAR_10)
{
 int VAR_11, VAR_12 = 0;
 unsigned int VAR_13 = 0, VAR_14 = 0;
 const char *VAR_15 = 0, *VAR_16 = "/dev/fd0";
 char *VAR_17;
 FILE *VAR_18 = VAR_8;
 int VAR_19;
 unsigned long VAR_20;

 while ((VAR_11 = FUNC_5(VAR_9, VAR_10, "d:f:I:o:qrt:")) != -1)
  switch (VAR_11) {
  case 'd':
   VAR_16 = VAR_3;
   break;

  case 'f':
   VAR_20 = FUNC_7(VAR_3, &VAR_17, 0);
   if (*VAR_17 != '\0') {
    FUNC_4(VAR_7,
   "Bad argument %s to -f option; must be numeric\n",
     VAR_3);
    FUNC_8();
   }
   if (VAR_20 > 0xff)
    FUNC_9(
   "Warning: fillbyte %#lx too large, truncating\n",
          VAR_20);
   VAR_2 = VAR_20 & 0xff;
   break;

  case 'I':
   VAR_20 = FUNC_7(VAR_3, &VAR_17, 0);
   if (*VAR_17 != '\0') {
    FUNC_4(VAR_7,
   "Bad argument %s to -I option; must be numeric\n",
     VAR_3);
    FUNC_8();
   }
   VAR_13 = VAR_20;
   break;

  case 'o':
   VAR_15 = VAR_3;
   break;

  case 'q':
   VAR_5++;
   break;

  case 'r':
   VAR_6++;
   break;

  case 't':
   VAR_20 = FUNC_7(VAR_3, &VAR_17, 0);
   if (*VAR_17 != '\0') {
    FUNC_4(VAR_7,
   "Bad argument %s to -t option; must be numeric\n",
     VAR_3);
    FUNC_8();
   }
   VAR_14 = VAR_20;
   break;

  default:
   VAR_12++;
  }
 VAR_9 -= VAR_4;
 VAR_10 += VAR_4;

 if (VAR_9 != 0 || VAR_12)
  FUNC_8();

 if (VAR_13) {
  if (VAR_15 || VAR_5 || VAR_6)
   FUNC_8();
 } else {
  if (VAR_14)
   FUNC_8();
 }

 if (VAR_15) {
  if ((VAR_18 = FUNC_3(VAR_15, "w")) == ((void*)0))
   FUNC_2(VAR_0, "cannot create output file %s", VAR_15);
 }

 if ((VAR_19 = FUNC_6(VAR_16, VAR_1)) == -1)
  FUNC_2(VAR_0, "cannot open device %s", VAR_16);

 return (VAR_13? FUNC_1(VAR_19, VAR_13, VAR_14): FUNC_0(VAR_19, VAR_18, VAR_16));
}
