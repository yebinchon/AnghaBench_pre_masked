
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int ts ;
struct timespec {double tv_sec; int tv_nsec; } ;
struct gprovider {char* lg_name; TYPE_3__* lg_provider; TYPE_2__* lg_geom; } ;
struct gmesh {int dummy; } ;
struct gident {scalar_t__ lg_what; struct gprovider* lg_ptr; } ;
struct gconsumer {char* lg_name; TYPE_3__* lg_provider; TYPE_2__* lg_geom; } ;
struct devstat {scalar_t__ sequence0; scalar_t__ sequence1; int * id; } ;
typedef int regex_t ;
typedef int pf_s ;
typedef int g_name ;
typedef int f_s ;
struct TYPE_6__ {char* lg_name; } ;
struct TYPE_5__ {int lg_rank; char* lg_name; TYPE_1__* lg_class; } ;
struct TYPE_4__ {char* lg_name; } ;
typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 long double VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 long double VAR_37 ;
 int FUNC_1 (char*,...) ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct devstat*,struct devstat*,double,int ,scalar_t__*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ,long double*,int ) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *,int*) ;
 int * FUNC_11 (char*,int ,int ,int ) ;
 int VAR_40 ;
 int FUNC_12 (int *,int ,...) ;
 int FUNC_13 () ;
 int FUNC_14 (int,char*,...) ;
 int VAR_41 ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_19 (struct gmesh*) ;
 int FUNC_20 (struct gmesh*) ;
 struct gident* FUNC_21 (struct gmesh*,int *) ;
 int FUNC_22 () ;
 int FUNC_23 (void*) ;
 void* FUNC_24 () ;
 struct devstat* FUNC_25 (void*) ;
 int FUNC_26 (void*) ;
 int FUNC_27 (void*,struct timespec*) ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int,int) ;
 int FUNC_30 (int,char**,char*) ;
 int FUNC_31 (int ,int,int) ;
 int FUNC_32 (int *,int *,int ,...) ;
 int * FUNC_33 () ;
 int FUNC_34 (int,int ,short) ;
 int FUNC_35 () ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ,int ) ;
 int FUNC_39 (double*) ;
 int FUNC_40 (int,int ) ;
 int FUNC_41 (int ,int) ;
 int FUNC_42 () ;
 int FUNC_43 () ;
 char* VAR_52 ;
 scalar_t__ VAR_53 ;
 int FUNC_44 (int ,short*,short*) ;
 int FUNC_45 (char*) ;
 int FUNC_46 () ;
 int FUNC_47 (int *,char*,int ) ;
 scalar_t__ FUNC_48 (int *,char*,int ,int *,int ) ;
 int FUNC_49 (int) ;
 int FUNC_50 (char*,int,char*,...) ;
 int FUNC_51 () ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 char* FUNC_52 (char*,char) ;
 int FUNC_53 (char*,char*) ;
 int FUNC_54 (char*,int,char*,int ) ;
 int FUNC_55 (char*,char const*,int) ;
 int FUNC_56 (char*) ;
 int FUNC_57 (char*,char**,int ) ;
 int FUNC_58 () ;
 int FUNC_59 () ;
 int FUNC_60 (int) ;

int
FUNC_61(int VAR_58, char **VAR_59)
{
 int VAR_60, VAR_61, VAR_62;
 int VAR_63, VAR_64, VAR_65, VAR_66, VAR_67, VAR_68, VAR_69, VAR_70;
 struct devstat *VAR_71, *VAR_72;
 void *VAR_73, *VAR_74;
 double VAR_75;
 struct timespec VAR_76, VAR_77;
 struct gmesh VAR_78;
 struct gprovider *VAR_79;
 struct gconsumer *VAR_80;
 struct gident *VAR_81;
 regex_t VAR_82, VAR_83;
 short VAR_84, VAR_85;
 char *VAR_86;
 char VAR_87[100], VAR_88[100], VAR_89[100];
 char VAR_90[100], VAR_91[4096];
 const char *VAR_92;
 long double VAR_93[16];
 uint64_t VAR_94;
 EditLine *VAR_95;
 History *VAR_96;
 HistEvent VAR_97;

 VAR_96 = ((void*)0);
 VAR_95 = ((void*)0);
 VAR_65 = -1;
 VAR_63 = -1;
 VAR_68 = 1;

 if (!FUNC_37(FUNC_18(VAR_56)))
  VAR_46 = 1;

 VAR_87[0] = '\0';
 while ((VAR_61 = FUNC_30(VAR_58, VAR_59, "abBdcCf:I:ops")) != -1) {
  switch (VAR_61) {
  case 'a':
   VAR_45 = 1;
   break;
  case 'b':
   VAR_46 = 1;
   break;
  case 'B':
   VAR_42 = 1;
   VAR_46 = 1;
   break;
  case 'c':
   VAR_47 = 1;
   break;
  case 'C':
   VAR_43 = 1;

   VAR_46 = 1;
   VAR_42 = 1;
   VAR_70 = 0;
   break;
  case 'd':
   VAR_48 = 1;
   break;
  case 'f':
   if (FUNC_56(VAR_52) > sizeof(VAR_87) - 1)
    FUNC_15(VAR_30, "Filter string too long");
   if (FUNC_47(&VAR_82, VAR_52, VAR_38) != 0)
    FUNC_15(VAR_30,
        "Invalid filter - see re_format(7)");
   FUNC_55(VAR_87, VAR_52, sizeof(VAR_87));
   break;
  case 'o':
   VAR_49 = 1;
   break;
  case 'I':
   VAR_86 = ((void*)0);
   VAR_61 = FUNC_57(VAR_52, &VAR_86, 0);
   if (VAR_86 == VAR_52 || VAR_41 == VAR_21 ||
       VAR_41 == VAR_26) {
    FUNC_15(1, "Invalid argument to -I");
   } else if (!FUNC_53(VAR_86, "s"))
    VAR_61 *= 1000000;
   else if (!FUNC_53(VAR_86, "ms"))
    VAR_61 *= 1000;
   else if (!FUNC_53(VAR_86, "us"))
    VAR_61 *= 1;
   VAR_44 = VAR_61;
   break;
  case 'p':
   VAR_50 = 1;
   break;
  case 's':
   VAR_51 = 1;
   break;
  case '?':
  default:
   FUNC_58();
  }
 }
 VAR_58 -= VAR_53;
 VAR_59 += VAR_53;
 if (VAR_58 != 0)
  FUNC_58();

 VAR_61 = FUNC_20(&VAR_78);
 if (VAR_61 != 0)
  FUNC_14(1, "geom_gettree = %d", VAR_61);
 VAR_60 = FUNC_22();
 if (VAR_60)
  FUNC_14(1, "geom_stats_open()");
 VAR_74 = ((void*)0);
 VAR_74 = FUNC_24();
 if (VAR_74 == ((void*)0))
  FUNC_14(1, "geom_stats_snapshot()");
 if (!VAR_46) {

  VAR_96 = FUNC_33();
  if (VAR_96 == ((void*)0))
   FUNC_14(VAR_29, "history_init()");
  FUNC_32(VAR_96, &VAR_97, VAR_34, 100);
  VAR_95 = FUNC_11("gstat", VAR_55, VAR_56, VAR_54);
  if (VAR_95 == ((void*)0))
   FUNC_14(VAR_29, "el_init");
  FUNC_12(VAR_95, VAR_22, "emacs");
  FUNC_12(VAR_95, VAR_25, 1);
  FUNC_12(VAR_95, VAR_23, FUNC_32, VAR_96);
  FUNC_12(VAR_95, VAR_24, VAR_40);
  if (VAR_87[0] != '\0')
   FUNC_32(VAR_96, &VAR_97, VAR_33, VAR_87);

  FUNC_35();
  FUNC_51();
  FUNC_59();
  FUNC_44(0, &VAR_84, &VAR_85);
  FUNC_34(1, VAR_0, VAR_85);
  FUNC_34(2, VAR_1, VAR_85);
  FUNC_34(3, VAR_2, VAR_85);
  FUNC_4();
  FUNC_42();
  FUNC_43();
  FUNC_41(VAR_57, 1);
  FUNC_36(VAR_57, VAR_31);
  FUNC_38(VAR_57, VAR_39);
 }
 FUNC_27(VAR_74, &VAR_77);
 for (VAR_62 = 0; !VAR_62;) {
  VAR_73 = FUNC_24();
  if (VAR_73 == ((void*)0))
   FUNC_14(1, "geom_stats_snapshot()");
  FUNC_27(VAR_73, &VAR_76);
  VAR_75 = VAR_76.tv_sec - VAR_77.tv_sec;
  VAR_75 += (VAR_76.tv_nsec - VAR_77.tv_nsec) * 1e-9;
  VAR_77 = VAR_76;
  if (VAR_43) {
   (void)FUNC_54(VAR_90,sizeof(VAR_90),
     "%F %T",FUNC_39(&VAR_77.tv_sec));
   (void)FUNC_50(VAR_90,sizeof(VAR_90),
     "%s.%.9ld",VAR_90,VAR_77.tv_nsec);
  }

  FUNC_26(VAR_73);
  FUNC_26(VAR_74);
  if (!VAR_46)
   FUNC_40(0,0);
  if (!VAR_43)
   FUNC_1("dT: %5.3fs  w: %.3fs", VAR_75,
     (float)VAR_44 / 1000000);
  if (!VAR_43 && VAR_87[0] != '\0') {
   FUNC_1("  filter: ");
   if (!VAR_46) {
    FUNC_31(VAR_57, VAR_64, VAR_63);
    FUNC_29(VAR_57, VAR_66, VAR_65);
   }
   FUNC_55(VAR_88, VAR_87, sizeof(VAR_88));
   VAR_69 = VAR_65 - VAR_63 - 1;
   if ((int)FUNC_56(VAR_87) > VAR_69 && VAR_69 >= 0) {
    if (VAR_69 > 3)
     VAR_88[VAR_69 - 3] = '.';
    if (VAR_69 > 2)
     VAR_88[VAR_69 - 2] = '.';
    if (VAR_69 > 1)
     VAR_88[VAR_69 - 1] = '.';
    VAR_88[VAR_69] = '\0';
   }
   FUNC_1("%s", VAR_88);
  }
  if (!VAR_43) {
   FUNC_1("\n");
   FUNC_1(" L(q)  ops/s   ");
   if (VAR_51) {
    FUNC_1(" r/s     kB   kBps   ms/r   ");
    FUNC_1(" w/s     kB   kBps   ms/w   ");
   }
   else {
    FUNC_1(" r/s   kBps   ms/r   ");
    FUNC_1(" w/s   kBps   ms/w   ");
   }
   if (VAR_48) {
    if (VAR_51) {
     FUNC_1(" d/s     kB   kBps");
     FUNC_1("   ms/d   ");
    } else
     FUNC_1(" d/s   kBps   ms/d   ");
   }
   if (VAR_49)
    FUNC_1(" o/s   ms/o   ");
   FUNC_1("%%busy Name\n");
  } else if (VAR_43 && !VAR_70) {
   FUNC_1("timestamp,name,q-depth,total_ops/s");
   if (VAR_51) {
    FUNC_1(",read/s,read_sz-KiB");
    FUNC_1(",read-KiB/s,ms/read");
    FUNC_1(",write/s,write_sz-KiB");
    FUNC_1(",write-KiB/s,ms/write");
   } else {
    FUNC_1(",read/s,read-KiB/s,ms/read");
    FUNC_1(",write/s,write-KiB/s,ms/write");
   }
   if (VAR_48) {
    if (VAR_51) {
     FUNC_1(",delete/s,delete-sz-KiB");
     FUNC_1(",delete-KiB/s,ms/delete");
    } else {
     FUNC_1(",delete/s,delete-KiB/s");
     FUNC_1(",ms/delete");
    }
   }
   if (VAR_49)
    FUNC_1(",other/s,ms/other");
   FUNC_1(",%%busy\n");
   VAR_70 = 1;
  }
  for (;;) {
   VAR_71 = FUNC_25(VAR_73);
   VAR_72 = FUNC_25(VAR_74);
   if (VAR_71 == ((void*)0) || VAR_72 == ((void*)0))
    break;
   if (VAR_71->id == ((void*)0))
    continue;
   VAR_81 = FUNC_21(&VAR_78, VAR_71->id);
   if (VAR_81 == ((void*)0)) {
    FUNC_19(&VAR_78);
    VAR_61 = FUNC_20(&VAR_78);
    if (VAR_61 != 0)
     FUNC_14(1, "geom_gettree = %d", VAR_61);
    VAR_81 = FUNC_21(&VAR_78, VAR_71->id);
   }
   if (VAR_81 == ((void*)0))
    continue;
   if (VAR_81->lg_what == VAR_35 && !VAR_47)
    continue;
   if (VAR_50 && VAR_81->lg_what == VAR_36 &&
      ((struct gprovider *)
       (VAR_81->lg_ptr))->lg_geom->lg_rank != 1)
    continue;

   if (!VAR_46) {
    FUNC_31(VAR_57, VAR_64, VAR_63);
    if (VAR_63 > 0)
     continue;
   }
   if ((VAR_81->lg_what == VAR_36
       || VAR_81->lg_what == VAR_35) && VAR_87[0] != '\0') {
    VAR_79 = VAR_81->lg_ptr;
    if ((FUNC_48(&VAR_82, VAR_79->lg_name, 0, ((void*)0), 0)
         != 0))
      continue;
   }
   if (VAR_71->sequence0 != VAR_71->sequence1) {




    if (!VAR_43)
     FUNC_1("*\n");
    continue;
   }
   FUNC_8(VAR_71, VAR_72, VAR_75,
       VAR_15, &VAR_94,
       VAR_16, &VAR_93[0],

       VAR_19, &VAR_93[1],
       VAR_8, &VAR_93[2],
       VAR_12, &VAR_93[3],

       VAR_20, &VAR_93[4],
       VAR_9, &VAR_93[5],
       VAR_13, &VAR_93[6],

       VAR_3, &VAR_93[7],

       VAR_17, &VAR_93[8],
       VAR_7, &VAR_93[9],
       VAR_10, &VAR_93[10],

       VAR_18, &VAR_93[11],
       VAR_11, &VAR_93[12],

       VAR_5, &VAR_93[13],
       VAR_6, &VAR_93[14],
       VAR_4, &VAR_93[15],

       VAR_14);

   if (VAR_45 && VAR_93[7] < 0.1) {
    *VAR_72 = *VAR_71;
    continue;
   }


   if (VAR_81 == ((void*)0)) {
    (void)FUNC_50(VAR_91, sizeof(VAR_91), "??");
   } else if (VAR_81->lg_what == VAR_36) {
    VAR_79 = VAR_81->lg_ptr;
    (void)FUNC_50(VAR_91, sizeof(VAR_91), "%s",
      VAR_79->lg_name);
   } else if (VAR_81->lg_what == VAR_35) {
    VAR_80 = VAR_81->lg_ptr;
    (void)FUNC_50(VAR_91, sizeof(VAR_91),
     "%s/%s/%s",
     VAR_80->lg_geom->lg_class->lg_name,
        VAR_80->lg_geom->lg_name,
         VAR_80->lg_provider->lg_name);
   }

   if (VAR_43) {
    FUNC_1("%s", VAR_90);
    FUNC_1(",%s", VAR_91);
    FUNC_1(",%ju", (uintmax_t)VAR_94);
    FUNC_1(",%.0f", (double)VAR_93[0]);
    FUNC_1(",%.0f", (double)VAR_93[1]);
    if (VAR_51)
     FUNC_1(",%.0f", (double)VAR_93[13]);
    FUNC_1(",%.0f", (double)VAR_93[2] * 1024);
    if (VAR_93[3] > 1e3)
     FUNC_1(",%.0f", (double)VAR_93[3]);
    else
     FUNC_1(",%.1f", (double)VAR_93[3]);
    FUNC_1(",%.0f", (double)VAR_93[4]);
    if (VAR_51)
     FUNC_1(",%.0f", (double)VAR_93[14]);
    FUNC_1(",%.0f", (double)VAR_93[5] * 1024);
    if (VAR_93[6] > 1e3)
     FUNC_1(",%.0f", (double)VAR_93[6]);
    else
     FUNC_1(",%.1f", (double)VAR_93[6]);

    if (VAR_48) {
     FUNC_1(",%.0f", (double)VAR_93[8]);
     if (VAR_51)
      FUNC_1(",%.0f",
        (double)VAR_93[15]);
     FUNC_1(",%.0f", (double)VAR_93[9] * 1024);
     if (VAR_93[10] > 1e3)
      FUNC_1(",%.0f",
        (double)VAR_93[10]);
     else
      FUNC_1(",%.1f",
        (double)VAR_93[10]);
    }

    if (VAR_49) {
     FUNC_1(",%.0f", (double)VAR_93[11]);
     if (VAR_93[12] > 1e3)
      FUNC_1(",%.0f",
        (double)VAR_93[12]);
     else
      FUNC_1(",%.1f",
        (double)VAR_93[12]);
    }
    FUNC_1(",%.1lf", (double)VAR_93[7]);
   } else {
    FUNC_1(" %4ju", (uintmax_t)VAR_94);
    FUNC_1(" %6.0f", (double)VAR_93[0]);
    FUNC_1(" %6.0f", (double)VAR_93[1]);
    if (VAR_51)
     FUNC_1(" %6.0f", (double)VAR_93[13]);
    FUNC_1(" %6.0f", (double)VAR_93[2] * 1024);
    if (VAR_93[3] > 1e3)
     FUNC_1(" %6.0f", (double)VAR_93[3]);
    else
     FUNC_1(" %6.1f", (double)VAR_93[3]);
    FUNC_1(" %6.0f", (double)VAR_93[4]);
    if (VAR_51)
     FUNC_1(" %6.0f", (double)VAR_93[14]);
    FUNC_1(" %6.0f", (double)VAR_93[5] * 1024);
    if (VAR_93[6] > 1e3)
     FUNC_1(" %6.0f", (double)VAR_93[6]);
    else
     FUNC_1(" %6.1f", (double)VAR_93[6]);

    if (VAR_48) {
     FUNC_1(" %6.0f", (double)VAR_93[8]);
     if (VAR_51)
      FUNC_1(" %6.0f",
        (double)VAR_93[15]);
     FUNC_1(" %6.0f",
       (double)VAR_93[9] * 1024);
     if (VAR_93[10] > 1e3)
      FUNC_1(" %6.0f",
        (double)VAR_93[10]);
     else
      FUNC_1(" %6.1f",
        (double)VAR_93[10]);
    }

    if (VAR_49) {
     FUNC_1(" %6.0f", (double)VAR_93[11]);
     if (VAR_93[12] > 1e3)
      FUNC_1(" %6.0f",
        (double)VAR_93[12]);
     else
      FUNC_1(" %6.1f",
        (double)VAR_93[12]);
    }

    if (VAR_93[7] > VAR_32)
     VAR_61 = 3;
    else if (VAR_93[7] > VAR_37)
     VAR_61 = 2;
    else
     VAR_61 = 1;
    if (!VAR_46)
     FUNC_3(FUNC_0(VAR_61));
    FUNC_1(" %6.1lf", (double)VAR_93[7]);
    if (!VAR_46) {
     FUNC_2(FUNC_0(VAR_61));
     FUNC_1("|");
    } else
     FUNC_1(" ");
    FUNC_1(" %s", VAR_91);
    if (!VAR_46)
     FUNC_7();
   }
   FUNC_1("\n");
   *VAR_72 = *VAR_71;
  }
  FUNC_23(VAR_73);
  if (VAR_46) {

   if (!VAR_68)
    break;
   if (!VAR_42)
    VAR_68 = 0;
   else
    FUNC_17(VAR_56);
   FUNC_60(VAR_44);
   continue;
  }
  FUNC_31(VAR_57, VAR_64, VAR_63);
  FUNC_29(VAR_57, VAR_66, VAR_65);
  FUNC_6();
  if (VAR_66 - 1 <= VAR_64)
   FUNC_40(VAR_66 - 1, 0);
  FUNC_46();
  FUNC_60(VAR_44);
  while((VAR_61 = FUNC_28()) != VAR_27) {
   switch (VAR_61) {
   case '>':
    VAR_44 *= 2;
    break;
   case '<':
    VAR_44 /= 2;
    if (VAR_44 < 1000)
     VAR_44 = 1000;
    break;
   case 'c':
    VAR_47 = !VAR_47;
    break;
   case 'f':
    FUNC_40(0,0);
    FUNC_7();
    FUNC_46();
    VAR_92 = FUNC_10(VAR_95, &VAR_67);
    if (VAR_92 == ((void*)0))
     FUNC_14(1, "el_gets");
    if (VAR_67 > 1)
     FUNC_32(VAR_96, &VAR_97, VAR_33, VAR_92);
    FUNC_55(VAR_89, VAR_92, sizeof(VAR_87));
    if ((VAR_86 = FUNC_52(VAR_89, '\n')) != ((void*)0))
     *VAR_86 = '\0';





    FUNC_5();
    FUNC_46();
    FUNC_4();
    FUNC_42();
    FUNC_43();
    if (FUNC_47(&VAR_83, VAR_89, VAR_38)
        != 0) {
     FUNC_40(0, 0);
     FUNC_45("Invalid filter");
     FUNC_46();
     FUNC_49(1);
    } else {
     FUNC_55(VAR_87, VAR_89, sizeof(VAR_87));
     VAR_82 = VAR_83;
    }
    break;
   case 'F':
    VAR_87[0] = '\0';
    break;
   case 'q':
    VAR_62 = 1;
    break;
   default:
    break;
   }
  }
 }

 if (!VAR_46) {
  FUNC_9(VAR_95);
  FUNC_13();
 }
 FUNC_16(VAR_28);
}
