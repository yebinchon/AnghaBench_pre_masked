
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int,char**) ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char*,scalar_t__) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int,char**) ;
 int FUNC_19 (int ) ;

int
FUNC_20(int VAR_10, char *VAR_11[])
{
 int VAR_12, VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;

 VAR_10 = FUNC_18(VAR_10, VAR_11);
 if (VAR_10 < 0)
  FUNC_2(1);

 while ((VAR_12 = FUNC_5(VAR_10, VAR_11, "andfsSi:")) != -1)
  switch(VAR_12) {
  case 'a':
   VAR_15 = 1;
   break;
  case 'd':
   FUNC_0(132);
   break;
  case 'n':
   VAR_4 = 1;
   break;
  case 'S':
   FUNC_0(129);
   break;
  case 's':
   FUNC_0(128);
   break;
  case 'f' :
   FUNC_0(131);
   break;
  case 'i':
   VAR_9 = VAR_6;
   break;
  case '?':
  default:
   FUNC_10();
  }
 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;

 if (!VAR_13)
  VAR_13 = 130;
 if (VAR_9) {
  if (VAR_13 != 130 && !(VAR_13 == 132 && VAR_15))
   FUNC_14(1, "-i not applicable to this operation");
  if (FUNC_7(VAR_9) == 0) {
   if (VAR_2 == VAR_1)
    FUNC_14(1, "interface %s does not exist",
        VAR_9);
   else
    FUNC_13(1, "if_nametoindex(%s)", VAR_9);
  }
 }
 switch (VAR_13) {
 case 130:
  if (VAR_15) {
   if (VAR_10 != 0)
    FUNC_10();

   FUNC_19(VAR_0);
   FUNC_16("arp");
   FUNC_17("arp-cache");

   FUNC_8(0, VAR_8);

   FUNC_12("arp-cache");
   FUNC_11("arp");
   FUNC_15();
  } else {
   if (VAR_10 != 1)
    FUNC_10();
   VAR_14 = FUNC_4(VAR_11[0]);
  }
  break;
 case 128:
 case 129:
  if (VAR_10 < 2 || VAR_10 > 6)
   FUNC_10();
  if (VAR_13 == 129)
   (void)FUNC_1(VAR_11[0]);
  VAR_14 = FUNC_9(VAR_10, VAR_11) ? 1 : 0;
  break;
 case 132:
  if (VAR_15) {
   if (VAR_10 != 0)
    FUNC_10();
   FUNC_8(0, VAR_5);
  } else {
   if (VAR_10 != 1)
    FUNC_10();
   VAR_14 = FUNC_1(VAR_11[0]);
  }
  break;
 case 131:
  if (VAR_10 != 1)
   FUNC_10();
  VAR_14 = FUNC_3(VAR_11[0]);
  break;
 }

 if (VAR_3 != ((void*)0))
  FUNC_6(VAR_3);

 return (VAR_14);
}
