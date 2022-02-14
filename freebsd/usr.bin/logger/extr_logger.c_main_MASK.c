
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct socks {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,char*,void*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*,int,int ) ;
 int * FUNC_7 (void*,char*,int ) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 () ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (int,char*,char*,char*,struct socks*,scalar_t__,char*) ;
 int FUNC_12 (char*,int,int ) ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (void*) ;
 int VAR_11 ;
 int FUNC_14 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_15 (char const*,char*,char const*,struct socks**) ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_16 (char*,char) ;
 size_t FUNC_17 (char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int FUNC_20 () ;

int
FUNC_21(int VAR_14, char *VAR_15[])
{
 struct socks *VAR_16;
 ssize_t VAR_17;
 time_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 char *VAR_22, *VAR_23, VAR_24[1024], *VAR_25, VAR_26[26],
     *VAR_27, VAR_28[VAR_4];
 const char *VAR_29, *VAR_30;

 VAR_22 = ((void*)0);
 VAR_23 = ((void*)0);
 VAR_27 = ((void*)0);
 VAR_29 = "syslog";
 VAR_30 = ((void*)0);
 VAR_16 = ((void*)0);
 VAR_21 = VAR_3 | VAR_0;
 VAR_20 = 0;
 FUNC_19("TZ");
 while ((VAR_19 = FUNC_10(VAR_14, VAR_15, "46Af:H:h:iP:p:S:st:")) != -1)
  switch((char)VAR_19) {
  case '4':
   VAR_8 = VAR_5;
   break;





  case 'A':
   VAR_11++;
   break;
  case 'f':
   if (FUNC_7(VAR_9, "r", VAR_12) == ((void*)0))
    FUNC_2(1, "%s", VAR_9);
   FUNC_14(VAR_12, 0, VAR_7, 0);
   break;
  case 'H':
   VAR_27 = VAR_9;
   break;
  case 'h':
   VAR_23 = VAR_9;
   break;
  case 'i':
   VAR_20 |= VAR_2;
   break;
  case 'P':
   VAR_29 = VAR_9;
   break;
  case 'p':
   VAR_21 = FUNC_13(VAR_9);
   break;
  case 's':
   VAR_20 |= VAR_1;
   break;
  case 'S':
   VAR_30 = VAR_9;
   break;
  case 't':
   VAR_22 = VAR_9;
   break;
  case '?':
  default:
   FUNC_20();
  }
 VAR_14 -= VAR_10;
 VAR_15 += VAR_10;

 if (VAR_23) {
  VAR_17 = FUNC_15(VAR_30, VAR_23, VAR_29, &VAR_16);
  if (VAR_17 <= 0)
   FUNC_3(1, "socket");
 } else {
  if (VAR_30)
   FUNC_3(1, "-h option is missing.");
  VAR_17 = 0;
 }

 if (VAR_22 == ((void*)0))
  VAR_22 = FUNC_9();

 if (VAR_23 == ((void*)0))
  FUNC_12(VAR_22, VAR_20, 0);
 (void) FUNC_5(VAR_13);

 (void )FUNC_18(&VAR_18);
 (void )FUNC_1(&VAR_18, VAR_26);
 VAR_26[19] = '\0';
 VAR_25 = VAR_26 + 4;

 if (VAR_27 == ((void*)0)) {
  VAR_27 = VAR_28;
  (void )FUNC_8(VAR_28, VAR_4);
  *FUNC_16(VAR_27, '.') = '\0';
 }


 if (VAR_14 > 0) {
  char *VAR_31, *VAR_32;
  size_t VAR_33;

  for (VAR_31 = VAR_24, VAR_32 = VAR_24 + sizeof(VAR_24) - 2; *VAR_15;) {
   VAR_33 = FUNC_17(*VAR_15);
   if (VAR_31 + VAR_33 > VAR_32 && VAR_31 > VAR_24) {
    FUNC_11(VAR_21, VAR_25, VAR_27, VAR_22,
        VAR_16, VAR_17, VAR_24);
    VAR_31 = VAR_24;
   }
   if (VAR_33 > sizeof(VAR_24) - 1)
    FUNC_11(VAR_21, VAR_25, VAR_27, VAR_22,
        VAR_16, VAR_17, *VAR_15++);
   else {
    if (VAR_31 != VAR_24)
     *VAR_31++ = ' ';
    FUNC_0(*VAR_15++, VAR_31, VAR_33);
    *(VAR_31 += VAR_33) = '\0';
   }
  }
  if (VAR_31 != VAR_24)
   FUNC_11(VAR_21, VAR_25, VAR_27, VAR_22, VAR_16, VAR_17,
       VAR_24);
 } else
  while (FUNC_6(VAR_24, sizeof(VAR_24), VAR_12) != ((void*)0))
   FUNC_11(VAR_21, VAR_25, VAR_27, VAR_22, VAR_16, VAR_17,
       VAR_24);
 FUNC_4(0);
}
