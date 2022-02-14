
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 char* VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*,int ) ;
 char* VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 () ;
 int VAR_18 ;
 int FUNC_8 () ;
 scalar_t__ VAR_19 ;

int
FUNC_9(int VAR_20, char **VAR_21)
{
 int VAR_22, VAR_23, VAR_24 = 0;
 int VAR_25;

 while ((VAR_22 = FUNC_5(VAR_20, VAR_21, "F:c:f:i:o:ps:w")) != -1)
  switch (VAR_22) {
  case 'F':
   VAR_10 = VAR_14;
   break;

  case 'c':
   if ((VAR_6 = FUNC_4(VAR_14)) == -1)
    FUNC_3(VAR_1, "Invalid number: %s", VAR_14);
   if (VAR_6 < 0 || VAR_6 >= 256)
    FUNC_3(VAR_1,
         "CMD out of range: %d",
         VAR_6);
   break;

  case 'f':
   VAR_7 = VAR_14;
   break;

  case 'i':
   if ((VAR_11 = FUNC_4(VAR_14)) == -1)
    FUNC_3(VAR_1, "Invalid number: %s", VAR_14);
   if (VAR_11 < 0 || VAR_11 > VAR_5)
    FUNC_3(VAR_1,
         "# input bytes out of range: %d",
         VAR_11);
   break;

  case 'o':
   if ((VAR_13 = FUNC_4(VAR_14)) == -1)
    FUNC_3(VAR_1, "Invalid number: %s", VAR_14);
   if (VAR_13 < 0 || VAR_13 > VAR_5)
    FUNC_3(VAR_1,
         "# output bytes out of range: %d",
         VAR_13);
   break;

  case 'p':
   VAR_17 = 1;
   break;

  case 's':
   if ((VAR_18 = FUNC_4(VAR_14)) == -1)
    FUNC_3(VAR_1, "Invalid number: %s", VAR_14);

   if (VAR_18 < VAR_3 || VAR_18 >= VAR_2)
    FUNC_3(VAR_1,
         "Slave address out of range: %d",
         VAR_18);
   break;

  case 'w':
   VAR_19 = 1;
   break;

  default:
   VAR_24++;
  }
 VAR_20 -= VAR_15;
 VAR_21 += VAR_15;
 if (VAR_24 || (VAR_18 != -1 && VAR_17) || (VAR_18 == -1 && !VAR_17))
  FUNC_8();
 if (VAR_19 &&
     !((VAR_11 == 2 && VAR_13 == -1) ||
       (VAR_11 == -1 && VAR_13 == 2) ||
       (VAR_11 == 2 && VAR_13 == 2)))
  FUNC_3(VAR_1, "Illegal # IO bytes for word IO");
 if (!VAR_17 && VAR_11 == -1 && VAR_13 == -1)
  FUNC_3(VAR_1, "Nothing to do");
 if (VAR_17 && (VAR_6 != -1 || VAR_11 != -1 || VAR_13 != -1 || VAR_19 != 0))
  FUNC_8();
 if (VAR_13 > 0) {
  if (VAR_13 == 2 && VAR_19) {
   if (VAR_20 == 0)
    FUNC_3(VAR_1, "Too few arguments for -o count");
   if ((VAR_23 = FUNC_4(*VAR_21)) == -1)
    FUNC_3(VAR_1, "Invalid number: %s", *VAR_21);
   if (VAR_23 < 0 || VAR_23 >= 65535)
    FUNC_3(VAR_1, "Value out of range: %d", VAR_23);
   VAR_16 = VAR_23;
   VAR_20--;
   VAR_21++;
  } else for (VAR_22 = 0; VAR_22 < VAR_13; VAR_22++, VAR_21++, VAR_20--) {
   if (VAR_20 == 0)
    FUNC_3(VAR_1, "Too few arguments for -o count");
   if ((VAR_23 = FUNC_4(*VAR_21)) == -1)
    FUNC_3(VAR_1, "Invalid number: %s", *VAR_21);
   if (VAR_23 < 0 || VAR_23 >= 256)
    FUNC_3(VAR_1, "Value out of range: %d", VAR_23);
   VAR_12[VAR_22] = VAR_23;
  }
 }
 if (VAR_20 != 0)
  FUNC_8();

 if ((VAR_9 = FUNC_6(VAR_7, VAR_4)) == -1)
  FUNC_2(VAR_0, "Cannot open %s", VAR_7);

 VAR_22 = 0;
 if (VAR_17)
  FUNC_7();
 else
  VAR_22 = FUNC_1();

 VAR_25 = VAR_8;
 FUNC_0(VAR_9);
 VAR_8 = VAR_25;

 if (VAR_22 == -1)
  FUNC_2(VAR_0, "Error performing SMBus IO");
 else if (VAR_22 == -2)
  FUNC_3(VAR_1, "Invalid option combination");

 return (0);
}
