
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_0 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char const* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int FUNC_6 () ;
 int FUNC_7 (char**,char*,char const*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char const*,int) ;

int
FUNC_10(int VAR_19, char *VAR_20[])
{
 const char *VAR_21, *VAR_22;
 int VAR_23, VAR_24;





 VAR_21 = VAR_22 = ((void*)0);
 VAR_24 = 0;
 while ((VAR_23 = FUNC_5(VAR_19, VAR_20, "aAbc:fgh:iIklmp:PQrRS")) != -1) {
  switch (VAR_23) {
  case 'a':
   VAR_22 = VAR_1;
   break;
  case 'A':
   VAR_22 = VAR_10;
   break;
  case 'b':
   VAR_22 = VAR_0;
   break;
  case 'c':
   VAR_21 = VAR_16;
   break;
  case 'f':
   VAR_22 = VAR_2;
   break;
  case 'g':
   VAR_22 = VAR_3;
   break;
  case 'h':
   VAR_22 = VAR_16;
   break;
  case 'i':
   VAR_22 = VAR_5;
   break;
  case 'I':
   VAR_22 = VAR_4;
   break;
  case 'k':
   VAR_22 = VAR_6;
   break;
  case 'l':
   VAR_22 = VAR_7;
   break;
  case 'm':
   VAR_22 = VAR_8;
   break;
  case 'p':
   VAR_18 = VAR_16;
   break;
  case 'P':
   VAR_22 = VAR_9;
   break;
  case 'Q':
   VAR_24 |= VAR_13;
   break;
  case 'r':
   VAR_22 = VAR_12;
   break;
  case 'R':
   VAR_24 |= VAR_14;
   break;
  case 'S':
   VAR_24 |= VAR_15;
   break;
  case '?':
  default:
   FUNC_8();

  }
 }
 VAR_19 -= VAR_17;
 VAR_20 += VAR_17;

 if (!VAR_19 || (VAR_21 != ((void*)0) && VAR_22 != ((void*)0)))
  FUNC_8();




 if (VAR_22 == ((void*)0) && VAR_21 == ((void*)0)) {
  if ((VAR_22 = FUNC_4("WHOIS_SERVER")) == ((void*)0) &&
      (VAR_22 = FUNC_4("RA_SERVER")) == ((void*)0)) {
   if (!(VAR_24 & VAR_13))
    VAR_24 |= VAR_14;
  }
 }
 while (VAR_19-- > 0) {
  if (VAR_21 != ((void*)0)) {
   char *VAR_25;
   FUNC_7(&VAR_25, "%s%s", VAR_21, VAR_11);
   FUNC_9(*VAR_20, VAR_25, VAR_24);
   FUNC_3(VAR_25);
  } else
   FUNC_9(*VAR_20, VAR_22 != ((void*)0) ? VAR_22 :
         FUNC_1(*VAR_20), VAR_24);
  FUNC_6();
  VAR_20++;
 }
 FUNC_2(0);
}
