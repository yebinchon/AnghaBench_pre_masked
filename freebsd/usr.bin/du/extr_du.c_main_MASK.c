
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int off_t ;
typedef char* intmax_t ;
struct TYPE_10__ {int fts_info; int fts_bignum; int fts_level; char* fts_path; TYPE_2__* fts_parent; TYPE_1__* fts_statp; int fts_errno; } ;
struct TYPE_9__ {int fts_bignum; } ;
struct TYPE_8__ {int st_size; int st_blocks; int st_nlink; } ;
typedef TYPE_3__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int FUNC_0 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*) ;
 int * FUNC_5 (char**,int,int *) ;
 TYPE_3__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_3__*,int ) ;
 int FUNC_8 (int*,int*) ;
 int FUNC_9 (int,char**,char*,int ,int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_3__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (TYPE_3__*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,char*) ;
 int VAR_23 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*,...) ;

int
FUNC_22(int VAR_24, char *VAR_25[])
{
 FTS *VAR_26;
 FTSENT *VAR_27;
 off_t VAR_28, VAR_29;
 off_t VAR_30, VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42, VAR_43;
 char **VAR_44;
 static char VAR_45[] = ".";

 FUNC_17(VAR_9, "");

 VAR_34 = VAR_35 = VAR_36 = VAR_37 = VAR_38 = VAR_39 = VAR_40 = VAR_0 = 0;

 VAR_44 = VAR_25;
 VAR_32 = VAR_5;
 VAR_28 = 0;
 VAR_30 = 0;
 VAR_31 = 1;
 VAR_14 = VAR_1;
 VAR_13 = 0;
 VAR_33 = VAR_8;
 FUNC_0(&VAR_17);

 while ((VAR_41 = FUNC_9(VAR_24, VAR_25, "+AB:HI:LPasd:cghklmnrt:x",
     VAR_19, ((void*)0))) != -1)
  switch (VAR_41) {
  case 'A':
   VAR_0 = 1;
   break;
  case 'B':
   VAR_15 = 0;
   VAR_14 = FUNC_1(VAR_21);
   if (VAR_15 == VAR_2 || VAR_14 <= 0) {
    FUNC_21("invalid argument to option B: %s",
        VAR_21);
    FUNC_20();
   }
   break;
  case 'H':
   VAR_34 = 1;
   VAR_35 = 0;
   break;
  case 'I':
   FUNC_11(VAR_21);
   break;
  case 'L':
   VAR_35 = 1;
   VAR_34 = 0;
   break;
  case 'P':
   VAR_34 = VAR_35 = 0;
   break;
  case 'a':
   VAR_36 = 1;
   break;
  case 's':
   VAR_37 = 1;
   break;
  case 'd':
   VAR_38 = 1;
   VAR_15 = 0;
   VAR_33 = FUNC_1(VAR_21);
   if (VAR_15 == VAR_2 || VAR_33 < 0) {
    FUNC_21("invalid argument to option d: %s",
        VAR_21);
    FUNC_20();
   }
   break;
  case 'c':
   VAR_39 = 1;
   break;
  case 'g':
   VAR_16 = 0;
   VAR_13 = 1073741824;
   break;
  case 'h':
   VAR_16 = VAR_11;
   break;
  case 'k':
   VAR_16 = 0;
   VAR_13 = 1024;
   break;
  case 'l':
   VAR_40 = 1;
   break;
  case 'm':
   VAR_16 = 0;
   VAR_13 = 1048576;
   break;
  case 'n':
   VAR_20 = 1;
   break;
  case 'r':
   break;
  case 't' :
   if (FUNC_4(VAR_21, &VAR_30) != 0 ||
       VAR_30 == 0) {
    FUNC_21("invalid threshold: %s", VAR_21);
    FUNC_20();
   } else if (VAR_30 < 0)
    VAR_31 = -1;
   break;
  case 'x':
   VAR_32 |= VAR_7;
   break;
  case 128:
   VAR_16 = VAR_12;
   break;
  case '?':
  default:
   FUNC_20();

  }

 VAR_24 -= VAR_22;
 VAR_25 += VAR_22;
 if (VAR_34)
  VAR_32 |= VAR_3;
 if (VAR_35) {
  VAR_32 &= ~VAR_5;
  VAR_32 |= VAR_4;
 }

 if (!VAR_0 && (VAR_14 % VAR_1) != 0)
  VAR_14 = FUNC_10(VAR_14, VAR_1) * VAR_1;

 if (VAR_36 + VAR_38 + VAR_37 > 1)
  FUNC_20();
 if (VAR_37)
  VAR_33 = 0;

 if (!*VAR_25) {
  VAR_25 = VAR_44;
  VAR_25[0] = VAR_45;
  VAR_25[1] = ((void*)0);
 }

 if (VAR_13 == 0)
  (void)FUNC_8(&VAR_42, &VAR_13);

 if (!VAR_0) {
  VAR_14 /= VAR_1;
  VAR_13 /= VAR_1;
 }

 if (VAR_30 != 0)
  VAR_30 = FUNC_10(VAR_30 / VAR_1 * VAR_14,
      VAR_13);

 VAR_43 = 0;

 (void)FUNC_18(VAR_10, VAR_23);

 if ((VAR_26 = FUNC_5(VAR_25, VAR_32, ((void*)0))) == ((void*)0))
  FUNC_2(1, "fts_open");

 while ((VAR_27 = FUNC_6(VAR_26)) != ((void*)0)) {
  switch (VAR_27->fts_info) {
  case 134:
   if (FUNC_13(VAR_27))
    FUNC_7(VAR_26, VAR_27, VAR_6);
   break;
  case 131:
   if (FUNC_13(VAR_27))
    break;

   VAR_29 = VAR_0 ?
       FUNC_10(VAR_27->fts_statp->st_size, VAR_14) :
       FUNC_10(VAR_27->fts_statp->st_blocks, VAR_14);
   VAR_27->fts_parent->fts_bignum += VAR_27->fts_bignum +=
       VAR_29;

   if (VAR_27->fts_level <= VAR_33 && VAR_30 <=
       VAR_31 * FUNC_10(VAR_27->fts_bignum *
       VAR_14, VAR_13)) {
    if (VAR_16 > 0) {
     FUNC_16(VAR_27->fts_bignum);
     (void)FUNC_15("\t%s\n", VAR_27->fts_path);
    } else {
     (void)FUNC_15("%jd\t%s\n",
         (intmax_t)FUNC_10(VAR_27->fts_bignum *
         VAR_14, VAR_13),
         VAR_27->fts_path);
    }
   }
   if (VAR_18) {
    VAR_18 = 0;
    (void)FUNC_15("\t%s\n", VAR_27->fts_path);
   }
   break;
  case 133:
   break;
  case 132:
  case 130:
  case 129:
   FUNC_21("%s: %s", VAR_27->fts_path, FUNC_19(VAR_27->fts_errno));
   VAR_43 = 1;
   break;
  default:
   if (FUNC_13(VAR_27))
    break;

   if (VAR_40 == 0 && VAR_27->fts_statp->st_nlink > 1 &&
       FUNC_14(VAR_27))
    break;

   VAR_29 = VAR_0 ?
       FUNC_10(VAR_27->fts_statp->st_size, VAR_14) :
       FUNC_10(VAR_27->fts_statp->st_blocks, VAR_14);

   if (VAR_36 || VAR_27->fts_level == 0) {
    if (VAR_16 > 0) {
     FUNC_16(VAR_29);
     (void)FUNC_15("\t%s\n", VAR_27->fts_path);
    } else {
     (void)FUNC_15("%jd\t%s\n",
         (intmax_t)FUNC_10(VAR_29 *
         VAR_14, VAR_13),
         VAR_27->fts_path);
    }
   }

   VAR_27->fts_parent->fts_bignum += VAR_29;
  }
  VAR_28 = VAR_27->fts_parent->fts_bignum;
 }

 if (VAR_15)
  FUNC_2(1, "fts_read");

 if (VAR_39) {
  if (VAR_16 > 0) {
   FUNC_16(VAR_28);
   (void)FUNC_15("\ttotal\n");
  } else {
   (void)FUNC_15("%jd\ttotal\n", (intmax_t)FUNC_10(
       VAR_28 * VAR_14, VAR_13));
  }
 }

 FUNC_12();
 FUNC_3(VAR_43);
}
