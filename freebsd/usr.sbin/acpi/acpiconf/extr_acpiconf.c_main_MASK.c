
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (char*) ;

int
FUNC_11(int VAR_4, char *VAR_5[])
{
 char *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;

 VAR_6 = VAR_5[0];
 if (VAR_4 < 2)
  FUNC_10(VAR_6);


 VAR_9 = -1;
 FUNC_1();
 while ((VAR_8 = FUNC_7(VAR_4, VAR_5, "hi:k:s:")) != -1) {
  switch (VAR_8) {
  case 'i':
   VAR_12 = 1;
   VAR_10 = FUNC_9(VAR_2, &VAR_7, 10);
   if ((size_t)(VAR_7 - VAR_2) != FUNC_8(VAR_2))
       FUNC_5(VAR_0, "invalid battery");
   break;
  case 'k':
   VAR_13 = 1;
   VAR_11 = FUNC_9(VAR_2, &VAR_7, 10);
   if ((size_t)(VAR_7 - VAR_2) != FUNC_8(VAR_2))
       FUNC_5(VAR_0, "invalid ack argument");
   break;
  case 's':
   VAR_14 = 1;
   if (VAR_2[0] == 'S')
    VAR_2++;
   VAR_9 = FUNC_9(VAR_2, &VAR_7, 10);
   if ((size_t)(VAR_7 - VAR_2) != FUNC_8(VAR_2))
       FUNC_5(VAR_0, "invalid sleep type");
   if (VAR_9 < 1 || VAR_9 > 4)
    FUNC_5(VAR_0, "invalid sleep type (%d)",
         VAR_9);
   break;
  case 'h':
  default:
   FUNC_10(VAR_6);

  }
 }
 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 if (VAR_12 != 0 && VAR_13 != 0 && VAR_14 != 0)
   FUNC_5(VAR_0, "-i, -k and -s are mutually exclusive");

 if (VAR_12 != 0) {
  if (VAR_13 != 0)
   FUNC_5(VAR_0, "-i and -k are mutually exclusive");
  if (VAR_14 != 0)
   FUNC_5(VAR_0, "-i and -s are mutually exclusive");
  FUNC_0(VAR_10);
 }

 if (VAR_13 != 0) {
  if (VAR_14 != 0)
   FUNC_5(VAR_0, "-k and -s are mutually exclusive");
  FUNC_3(VAR_11);
 }


 if (VAR_14 != 0)
  FUNC_2(VAR_9);

 FUNC_4(VAR_1);
 FUNC_6 (0);
}
