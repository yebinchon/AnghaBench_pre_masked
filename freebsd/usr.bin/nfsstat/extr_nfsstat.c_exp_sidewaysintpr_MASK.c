
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int u_int ;
struct timespec {long double tv_sec; scalar_t__ tv_nsec; } ;
struct nfsstatsv1 {void* vers; } ;
typedef int lasttotal ;
typedef int lastst ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (struct nfsstatsv1*,struct nfsstatsv1*,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 (struct nfsstatsv1*,struct nfsstatsv1*,int ,long double,long double*,long double*,long double*,long double*,int *,long double*) ;
 int FUNC_5 (struct nfsstatsv1*,struct nfsstatsv1*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ) ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_8 (int,struct nfsstatsv1*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,int,int) ;
 int VAR_33 ;
 int VAR_34 ;
 int * VAR_35 ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (scalar_t__,scalar_t__) ;
 char* FUNC_13 (scalar_t__,scalar_t__) ;
 int * VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;

__attribute__((used)) static void
FUNC_14(u_int VAR_40, int VAR_41, int VAR_42,
    int VAR_43)
{
 struct nfsstatsv1 VAR_44, VAR_45, *VAR_46;
 struct nfsstatsv1 VAR_47, VAR_48;
 struct timespec VAR_49, VAR_50;
 int VAR_51 = 1;

 VAR_46 = &VAR_45;
 VAR_46->vers = VAR_10;
 if (FUNC_8(VAR_11 | VAR_12, VAR_46) < 0)
  FUNC_6(1, "Can't get stats");
 FUNC_3(VAR_0, &VAR_50);
 FUNC_5(&VAR_48, VAR_46);
 FUNC_11(VAR_40);

 for (;;) {
  VAR_46 = &VAR_44;
  VAR_46->vers = VAR_10;
  if (FUNC_8(VAR_11 | VAR_12, VAR_46)
      < 0)
   FUNC_6(1, "Can't get stats");
  FUNC_3(VAR_0, &VAR_49);

  if (--VAR_51 == 0) {
   FUNC_10(VAR_41, VAR_42, VAR_43);
   if (VAR_43)
    VAR_51 = 20;
   else if (VAR_41 && VAR_42)
    VAR_51 = 10;
   else
    VAR_51 = 20;
  }
  if (VAR_41 && VAR_43 == 0) {
      FUNC_9("%s %6ju %6ju %6ju %6ju %6ju %6ju %6ju %6ju",
   ((VAR_41 && VAR_42) ? "Client:" : ""),
   (uintmax_t)FUNC_0(VAR_35[VAR_2]),
   (uintmax_t)FUNC_0(VAR_35[VAR_3]),
   (uintmax_t)FUNC_0(VAR_35[VAR_7]),
   (uintmax_t)FUNC_0(VAR_35[VAR_4]),
   (uintmax_t)FUNC_0(VAR_35[VAR_9]),
   (uintmax_t)FUNC_0(VAR_35[VAR_8]),
   (uintmax_t)FUNC_0(VAR_35[VAR_1]),
   (uintmax_t)(FUNC_0(VAR_35[VAR_5]) +
   FUNC_0(VAR_35[VAR_6]))
      );
      if (VAR_38) {
       FUNC_9(" %s %s %s %s %s %s",
    FUNC_12(FUNC_0(VAR_26),
        FUNC_0(VAR_27)),
    FUNC_12(FUNC_0(VAR_31),
        FUNC_0(VAR_32)),
    FUNC_13(FUNC_0(VAR_29),
        FUNC_0(VAR_33)),
    FUNC_13(FUNC_0(VAR_30),
        FUNC_0(VAR_39)),
    FUNC_12(FUNC_0(VAR_24),
        FUNC_0(VAR_25)),
    FUNC_13(FUNC_0(VAR_28),
        FUNC_0(VAR_34))
       );
      }
      FUNC_9("\n");
  }

  if (VAR_42 && VAR_43) {
   long double VAR_52, VAR_53, VAR_54;
   long double VAR_55;
   long double VAR_56;
   long double VAR_57;
   long double VAR_58;
   uint64_t VAR_59;
   long double VAR_60;
   int VAR_61;

   VAR_52 = VAR_49.tv_sec +
       ((long double)VAR_49.tv_nsec / 1000000000);
   VAR_53 = VAR_50.tv_sec +
       ((long double)VAR_50.tv_nsec / 1000000000);
   VAR_54 = VAR_52 - VAR_53;

   FUNC_5(&VAR_47, &VAR_44);

   for (VAR_61 = 0; VAR_61 < VAR_22; VAR_61++) {
    FUNC_4(&VAR_44, &VAR_45,
        FUNC_1(VAR_61), VAR_54, &VAR_55,
        &VAR_56,
        &VAR_57,
        &VAR_58, &VAR_59,
        &VAR_60);

    if (VAR_61 == VAR_23) {
     if (VAR_38 == 0)
      continue;

     FUNC_9("%2.0Lf %7.2Lf ",
         VAR_57,
         VAR_58);
    } else {
     FUNC_9("%5.2Lf %5.0Lf %7.2Lf ",
         VAR_56,
         VAR_57, VAR_55);
     if (VAR_38)
      FUNC_9("%5.2Lf ",
          VAR_58);
    }
   }

   FUNC_4(&VAR_47, &VAR_48, 0, VAR_54,
       &VAR_55, &VAR_56, &VAR_57,
       &VAR_58, &VAR_59, &VAR_60);

   FUNC_9("%5.2Lf %5.0Lf %7.2Lf %5.2Lf %3ju %3.0Lf\n",
       VAR_56, VAR_57, VAR_55,
       VAR_58, VAR_59, VAR_60);
  } else if (VAR_42) {
      FUNC_9("%s %6ju %6ju %6ju %6ju %6ju %6ju %6ju %6ju",
   ((VAR_41 && VAR_42) ? "Server:" : ""),
   (uintmax_t)FUNC_0(VAR_36[VAR_14]),
   (uintmax_t)FUNC_0(VAR_36[VAR_15]),
   (uintmax_t)FUNC_0(VAR_36[VAR_19]),
   (uintmax_t)FUNC_0(VAR_36[VAR_16]),
   (uintmax_t)FUNC_0(VAR_36[VAR_21]),
   (uintmax_t)FUNC_0(VAR_36[VAR_20]),
   (uintmax_t)FUNC_0(VAR_36[VAR_13]),
   (uintmax_t)(FUNC_0(VAR_36[VAR_17]) +
   FUNC_0(VAR_36[VAR_18])));
      FUNC_9("\n");
  }
  FUNC_2(&VAR_44, &VAR_45, sizeof(VAR_45));
  FUNC_2(&VAR_47, &VAR_48, sizeof(VAR_48));
  VAR_50 = VAR_49;
  FUNC_7(VAR_37);
  FUNC_11(VAR_40);
 }

}
