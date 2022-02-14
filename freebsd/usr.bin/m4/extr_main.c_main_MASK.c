
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stae ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__,char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char**,char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int * VAR_18 ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 char* VAR_23 ;
 scalar_t__ VAR_24 ;
 int ** VAR_25 ;
 int FUNC_13 (int ) ;
 int VAR_26 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__,int ,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,int ) ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_20 (char*) ;
 int FUNC_21 () ;
 int VAR_32 ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *,int ,int,int *) ;

int
FUNC_24(int VAR_33, char *VAR_34[])
{
 int VAR_35;
 int VAR_36;
 char *VAR_37;

 if (FUNC_19(VAR_4, VAR_5) != VAR_5)
  FUNC_19(VAR_4, VAR_22);

 FUNC_7();
 FUNC_9();
 VAR_6 = VAR_2;

 VAR_21 = FUNC_23(((void*)0), VAR_6, sizeof(stae), ((void*)0));
 VAR_28 = FUNC_22(VAR_6, ((void*)0));

 VAR_19 = 0;
 VAR_25 = ((void*)0);
 FUNC_15(VAR_3);

 while ((VAR_35 = FUNC_6(VAR_33, VAR_34, "gst:d:D:EU:o:I:P")) != -1)
  switch(VAR_35) {

  case 'D':
   for (VAR_37 = VAR_23; *VAR_37; VAR_37++)
    if (*VAR_37 == '=')
     break;
   if (*VAR_37)
    *VAR_37++ = VAR_0;
   FUNC_1(VAR_23, VAR_37);
   break;
  case 'E':
   if (VAR_12 == 0)
    VAR_12 = 1;
   else
    VAR_14 = 1;
   break;
  case 'I':
   FUNC_0(VAR_23);
   break;
  case 'P':
   VAR_26 = 1;
   break;
  case 'U':
   FUNC_11(VAR_23);
   break;
  case 'g':
   VAR_20 = 1;
   break;
  case 'd':
   FUNC_17(VAR_23);
   break;
  case 's':
   VAR_31 = 1;
   break;
  case 't':
   FUNC_12(VAR_23, 1);
   break;
  case 'o':
   FUNC_20(VAR_23);
                        break;
  case '?':
   FUNC_21();
  }

        VAR_33 -= VAR_24;
        VAR_34 += VAR_24;

 FUNC_8();
 if (VAR_20)
  FUNC_18("format", VAR_1);

 VAR_7 = VAR_30;
 VAR_8[0] = VAR_11;
        if (!VAR_33) {
  VAR_27 = -1;
  VAR_15 = 0;
  FUNC_16(VAR_17+0, VAR_29, "stdin");

  FUNC_10();
 } else
  for (; VAR_33--; ++VAR_34) {
   VAR_37 = *VAR_34;
   if (VAR_37[0] == '-' && VAR_37[1] == VAR_0)
    FUNC_16(VAR_17, VAR_29, "stdin");
   else if (FUNC_4(VAR_17, VAR_37) == ((void*)0))
    FUNC_2(1, "%s", VAR_37);
   VAR_27 = -1;
   VAR_15 = 0;
   FUNC_10();
   FUNC_14(VAR_17);
  }

 if (VAR_32) {
  int VAR_38;

  VAR_16 = 0;
  VAR_11 = VAR_9 = VAR_10;
  if (VAR_20) {
   while (VAR_32 != 0) {
    for (VAR_38 = 0; VAR_38 < VAR_32; VAR_38++)
     FUNC_13(VAR_18[VAR_38]);
    VAR_32 =0;
    FUNC_10();
   }
  } else {
   for (VAR_38 = 0; VAR_38 < VAR_32; VAR_38++) {
    FUNC_13(VAR_18[VAR_38]);
    FUNC_10();
   }
  }
 }

 if (VAR_7 != VAR_30)
  VAR_7 = VAR_30;
 for (VAR_36 = 1; VAR_36 < VAR_19; VAR_36++)
  if (VAR_25[VAR_36] != ((void*)0))
   FUNC_5(VAR_36);

 if (VAR_25[0] != ((void*)0)) {
  (void) FUNC_3(VAR_25[0]);
 }

 return VAR_13;
}
