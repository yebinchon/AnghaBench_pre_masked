
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_5__ {int tm_sec; int tm_min; int tm_hour; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int,char**,char*) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 () ;
 TYPE_1__* FUNC_15 (scalar_t__*) ;
 long VAR_18 ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int,int,int ) ;
 int FUNC_19 (int,int,char*) ;
 int FUNC_20 (struct timespec*,int *) ;
 long* VAR_19 ;
 long* VAR_20 ;
 int FUNC_21 () ;
 TYPE_2__ VAR_21 ;
 long* VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_22 () ;
 int FUNC_23 (int,int) ;
 int VAR_24 ;
 int FUNC_24 (int ,int ) ;
 scalar_t__ VAR_25 ;
 int FUNC_25 () ;
 int FUNC_26 (int) ;
 int FUNC_27 () ;
 TYPE_1__* VAR_26 ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (char*) ;

int
FUNC_31(int VAR_27, char *VAR_28[])
{
 struct timespec VAR_29;
 time_t VAR_30;
 long VAR_31, VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;
 int VAR_37;
 int VAR_38;
 int VAR_39;
 int VAR_40;

 VAR_40 = VAR_39 = 0;

 while ((VAR_38 = FUNC_10(VAR_27, VAR_28, "ts")) != -1)
 switch (VAR_38) {
 case 's':
  VAR_39 = 1;
  break;
 case 't':
  VAR_40 = 1;
  break;
 case '?':
 default:
  FUNC_28();

 }
 VAR_27 -= VAR_23;
 VAR_28 += VAR_23;

 if (VAR_27 > 1) {
  FUNC_28();

 }

 if (VAR_27 > 0) {
  VAR_37 = FUNC_2(*VAR_28) + 1;
  if (VAR_37 < 1) {
   FUNC_30("number of seconds is out of range");
   FUNC_28();

  }
 } else
  VAR_37 = 0;

 FUNC_14();

 FUNC_24(VAR_11,VAR_24);
 FUNC_24(VAR_12,VAR_24);
 FUNC_24(VAR_10,VAR_24);

 FUNC_4();
 FUNC_21();
 FUNC_7(0);

 VAR_17 = FUNC_11();

 if(VAR_17) {
  FUNC_27();
  FUNC_13(1, VAR_7, VAR_8);
  FUNC_13(2, VAR_8, VAR_7);
  FUNC_13(3, VAR_9, VAR_7);
  FUNC_3(FUNC_0(2));
 }

 FUNC_5();
 FUNC_22();

 if(VAR_17) {
  FUNC_3(FUNC_0(3));

  FUNC_18(VAR_15 - 2, VAR_13 - 3, VAR_3);
  FUNC_12(VAR_0, VAR_14);
  FUNC_18(VAR_15 - 2, VAR_13 - 2 + VAR_14, VAR_4);

  FUNC_18(VAR_15 + VAR_16 - 1, VAR_13 - 3, VAR_1);
  FUNC_12(VAR_0, VAR_14);
  FUNC_18(VAR_15 + VAR_16 - 1, VAR_13 - 2 + VAR_14, VAR_2);

  FUNC_16(VAR_15 - 1, VAR_13 - 3);
  FUNC_29(VAR_5, VAR_16);

  FUNC_16(VAR_15 - 1, VAR_13 - 2 + VAR_14);
  FUNC_29(VAR_5, VAR_16);

  FUNC_3(FUNC_0(2));
 }
 FUNC_6(VAR_6, &VAR_21);
 VAR_30 = VAR_21.tv_sec;
 do {
  VAR_18 = 0;
  VAR_26 = FUNC_15(&VAR_21.tv_sec);
  FUNC_23(VAR_26->tm_sec%10, 0);
  FUNC_23(VAR_26->tm_sec/10, 4);
  FUNC_23(VAR_26->tm_min%10, 10);
  FUNC_23(VAR_26->tm_min/10, 14);

  if (VAR_40) {
   if (VAR_26->tm_hour < 12) {
    if (VAR_26->tm_hour == 0)
     VAR_26->tm_hour = 12;
    FUNC_19(VAR_15 + 5, VAR_13 + 52, "AM");
   } else {
    if (VAR_26->tm_hour > 12)
     VAR_26->tm_hour -= 12;
    FUNC_19(VAR_15 + 5, VAR_13 + 52, "PM");
   }
  }

  FUNC_23(VAR_26->tm_hour%10, 20);
  FUNC_23(VAR_26->tm_hour/10, 24);
  FUNC_23(10, 7);
  FUNC_23(10, 17);
  for(VAR_36=0; VAR_36<6; VAR_36++) {
   if(VAR_39) {
    for(VAR_33=0; VAR_33<5; VAR_33++)
     VAR_19[VAR_33] = (VAR_19[VAR_33]&~VAR_18) | (VAR_19[VAR_33+1]&VAR_18);
    VAR_19[5] = (VAR_19[5]&~VAR_18) | (VAR_20[VAR_36]&VAR_18);
   } else
    VAR_19[VAR_36] = (VAR_19[VAR_36]&~VAR_18) | (VAR_20[VAR_36]&VAR_18);
   VAR_20[VAR_36] = 0;
   for(VAR_35=1; VAR_35>=0; VAR_35--) {
    FUNC_26(VAR_35);
    for(VAR_33=0; VAR_33<6; VAR_33++) {
     if((VAR_32 = (VAR_19[VAR_33]^VAR_22[VAR_33])&(VAR_35 ? VAR_19 : VAR_22)[VAR_33]) != 0) {
      for(VAR_34=0,VAR_31=1<<26; VAR_31; VAR_31>>=1,VAR_34++) {
       if(VAR_32&VAR_31) {
        if(!(VAR_32&(VAR_31<<1))) {
         FUNC_17(VAR_15 + VAR_33, VAR_13 + 2*VAR_34);
        }
        FUNC_1("  ");
       }
      }
     }
     if(!VAR_35) {
      VAR_22[VAR_33] = VAR_19[VAR_33];
     }
    }
    if(!VAR_35) {
     FUNC_22();
    }
   }
  }
  FUNC_17(6, 0);
  FUNC_22();
  FUNC_6(VAR_6, &VAR_21);
  if (VAR_21.tv_sec == VAR_30) {
   if (VAR_29.tv_nsec > 0) {
    VAR_29.tv_sec = 0;
    VAR_29.tv_nsec = 1000000000 - VAR_21.tv_nsec;
   } else {
    VAR_29.tv_sec = 1;
    VAR_29.tv_nsec = 0;
   }
   FUNC_20(&VAR_29, ((void*)0));
   FUNC_6(VAR_6, &VAR_21);
  }
  VAR_37 -= VAR_21.tv_sec - VAR_30;
  VAR_30 = VAR_21.tv_sec;
  if (VAR_25) {
   FUNC_25();
   FUNC_5();
   FUNC_22();
   FUNC_8();
   FUNC_9(1, "terminated by signal %d", (int)VAR_25);
  }
 } while (VAR_37);
 FUNC_25();
 FUNC_5();
 FUNC_22();
 FUNC_8();
 return(0);
}
