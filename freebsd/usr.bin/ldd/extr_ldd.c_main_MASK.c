
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (char*,char*,char*) ;
 int FUNC_13 (char*,char*,char*,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,char*,char*,int) ;
 int FUNC_18 (int,char**,char*) ;
 int FUNC_19 (char*,int,int*,int*) ;
 int FUNC_20 (char*,int ,int ) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_21 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_22 () ;
 int FUNC_23 (int*) ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (char*,char*,int ) ;

int
FUNC_26(int VAR_10, char *VAR_11[])
{
 char *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_16 = VAR_17 = 0;
 VAR_12 = VAR_13 = ((void*)0);

 while ((VAR_15 = FUNC_18(VAR_10, VAR_11, "af:v")) != -1) {
  switch (VAR_15) {
  case 'a':
   VAR_16++;
   break;
  case 'f':
   if (VAR_12 != ((void*)0)) {
    if (VAR_13 != ((void*)0))
     FUNC_11(1, "too many formats");
    VAR_13 = VAR_6;
   } else
    VAR_12 = VAR_6;
   break;
  case 'v':
   VAR_17++;
   break;
  default:
   FUNC_22();

  }
 }
 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;

 if (VAR_17 && VAR_12 != ((void*)0))
  FUNC_11(1, "-v may not be used with -f");

 if (VAR_10 <= 0) {
  FUNC_22();

 }
 VAR_14 = 0;
 for (; VAR_10 > 0; VAR_10--, VAR_11++) {
  int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

  if ((VAR_18 = FUNC_20(*VAR_11, VAR_3, 0)) < 0) {
   FUNC_24("%s", *VAR_11);
   VAR_14 |= 1;
   continue;
  }
  VAR_21 = FUNC_19(*VAR_11, VAR_18, &VAR_20, &VAR_22);
  FUNC_6(VAR_18);
  if (VAR_21 == 0) {
   VAR_14 |= 1;
   continue;
  }

  switch (VAR_22) {
  case 130:
  case 131:
   break;





  case 128:
  default:




   FUNC_11(VAR_0, "unknown executable type");
  }


  FUNC_0("TRACE_LOADED_OBJECTS", "yes", 1);
  if (VAR_12 != ((void*)0))
   FUNC_0("TRACE_LOADED_OBJECTS_FMT1", VAR_12, 1);
  if (VAR_13 != ((void*)0))
   FUNC_0("TRACE_LOADED_OBJECTS_FMT2", VAR_13, 1);

  FUNC_0("TRACE_LOADED_OBJECTS_PROGNAME", *VAR_11, 1);
  if (VAR_16)
   FUNC_0("TRACE_LOADED_OBJECTS_ALL", "1", 1);
  else if (VAR_12 == ((void*)0) && VAR_13 == ((void*)0))

   FUNC_21("%s:\n", *VAR_11);
  FUNC_15(VAR_9);

  switch (FUNC_16()) {
  case -1:
   FUNC_10(1, "fork");
   break;
  default:
   if (FUNC_23(&VAR_19) < 0) {
    FUNC_24("wait");
    VAR_14 |= 1;
   } else if (FUNC_3(VAR_19)) {
    FUNC_17(VAR_8, "%s: signal %d\n", *VAR_11,
        FUNC_4(VAR_19));
    VAR_14 |= 1;
   } else if (FUNC_2(VAR_19) &&
       FUNC_1(VAR_19) != 0) {
    FUNC_17(VAR_8, "%s: exit status %d\n", *VAR_11,
        FUNC_1(VAR_19));
    VAR_14 |= 1;
   }
   break;
  case 0:
   if (VAR_20 == 0) {
    FUNC_12(*VAR_11, *VAR_11, (char *)((void*)0));
    FUNC_24("%s", *VAR_11);
   } else {
    FUNC_8(*VAR_11, VAR_4);
    FUNC_25("%s: %s", *VAR_11, FUNC_7());
   }
   FUNC_5(1);
  }
 }

 return VAR_14;
}
