
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; void* tv_nsec; } ;
struct stat {struct timespec st_mtim; struct timespec st_atim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int ,char*,struct stat*,int) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char*,int,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,struct timespec*) ;
 int FUNC_8 (int ,int,struct timespec*) ;
 int FUNC_9 (int ,struct timespec*) ;
 int FUNC_10 (int ,struct timespec*) ;
 int FUNC_11 (char*,char**,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,char*,struct timespec*,int) ;
 int FUNC_15 (char*,char*) ;

int
FUNC_16(int VAR_11, char *VAR_12[])
{
 struct stat VAR_13;
 struct timespec VAR_14[2];
 int VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 char *VAR_25;
 char *VAR_26;

 VAR_26 = FUNC_0(VAR_12[0]);
 VAR_16 = VAR_17 = VAR_18 = VAR_19 = VAR_24 = 0;
 VAR_15 = 0;
 VAR_14[0].tv_sec = VAR_14[1].tv_sec = 0;
 VAR_14[0].tv_nsec = VAR_14[1].tv_nsec = VAR_6;

 while ((VAR_20 = FUNC_5(VAR_11, VAR_12, "A:acd:fhmr:t:")) != -1)
  switch(VAR_20) {
  case 'A':
   VAR_16 = FUNC_12(VAR_9);
   break;
  case 'a':
   VAR_17 = 1;
   break;
  case 'c':
   VAR_18 = 1;
   break;
  case 'd':
   VAR_24 = 1;
   FUNC_9(VAR_9, VAR_14);
   break;
  case 'f':

   break;
  case 'h':
   VAR_18 = 1;
   VAR_15 = VAR_1;
   break;
  case 'm':
   VAR_19 = 1;
   break;
  case 'r':
   VAR_24 = 1;
   FUNC_10(VAR_9, VAR_14);
   break;
  case 't':
   VAR_24 = 1;
   FUNC_7(VAR_9, VAR_14);
   break;
  default:
   FUNC_13(VAR_26);
  }
 VAR_11 -= VAR_10;
 VAR_12 += VAR_10;

 if (VAR_17 == 0 && VAR_19 == 0)
  VAR_17 = VAR_19 = 1;

 if (VAR_24) {
  if (VAR_16) {





   if (VAR_17)
    VAR_14[0].tv_sec += VAR_16;
   if (VAR_19)
    VAR_14[1].tv_sec += VAR_16;
   VAR_16 = 0;
  }
 } else {





  if (VAR_11 > 1) {
   FUNC_11(VAR_12[0], &VAR_25, 10);
   VAR_22 = VAR_25 - VAR_12[0];
   if (*VAR_25 == '\0' && (VAR_22 == 8 || VAR_22 == 10)) {
    VAR_24 = 1;
    FUNC_8(*VAR_12++, VAR_22 == 10, VAR_14);
   }
  }

  VAR_14[1] = VAR_14[0];
 }

 if (!VAR_17)
  VAR_14[0].tv_nsec = VAR_7;
 if (!VAR_19)
  VAR_14[1].tv_nsec = VAR_7;

 if (*VAR_12 == ((void*)0))
  FUNC_13(VAR_26);

 if (VAR_16)
  VAR_18 = 1;

 for (VAR_23 = 0; *VAR_12; ++VAR_12) {

  if (FUNC_4(VAR_0, *VAR_12, &VAR_13, VAR_15) != 0) {
   if (VAR_8 != VAR_3) {
    VAR_23 = 1;
    FUNC_15("%s", *VAR_12);
    continue;
   }
   if (!VAR_18) {

    VAR_21 = FUNC_6(*VAR_12,
        VAR_5 | VAR_4, VAR_2);
    if (VAR_21 == -1 || FUNC_3(VAR_21, &VAR_13) || FUNC_1(VAR_21)) {
     VAR_23 = 1;
     FUNC_15("%s", *VAR_12);
     continue;
    }


    if (!VAR_24)
     continue;
   } else
    continue;
  }





  if (VAR_16) {
   if (VAR_17) {
    VAR_14[0] = VAR_13.st_atim;
    VAR_14[0].tv_sec += VAR_16;
   }
   if (VAR_19) {
    VAR_14[1] = VAR_13.st_mtim;
    VAR_14[1].tv_sec += VAR_16;
   }
  }

  if (!FUNC_14(VAR_0, *VAR_12, VAR_14, VAR_15))
   continue;

  VAR_23 = 1;
  FUNC_15("%s", *VAR_12);
 }
 FUNC_2(VAR_23);
}
