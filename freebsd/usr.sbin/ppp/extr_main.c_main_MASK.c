
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct switches {scalar_t__ mode; int fg; int quiet; scalar_t__ nat; int unit; } ;
struct stat {int st_mode; } ;
struct prompt {struct bundle* bundle; } ;
struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {int peer_range; } ;
struct TYPE_8__ {TYPE_2__ cfg; } ;
struct TYPE_9__ {TYPE_3__ ipcp; } ;
struct bundle {TYPE_1__ notify; TYPE_5__* iface; TYPE_4__ ncp; scalar_t__ NatEnabled; } ;
typedef int pid_t ;
struct TYPE_10__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,struct prompt*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bundle*) ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int,char**,struct switches*) ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 struct bundle* VAR_36 ;
 struct prompt* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 char* VAR_40 ;
 char* VAR_41 ;
 int FUNC_7 (struct bundle*) ;
 struct bundle* FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (struct bundle*) ;
 int FUNC_10 (struct bundle*,char const*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_42 ;
 char* FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,char*) ;
 int VAR_43 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*,...) ;
 char* FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (struct bundle*,int ) ;
 scalar_t__ FUNC_22 (int*) ;
 int FUNC_23 () ;
 struct prompt* FUNC_24 (int *,int *,int ) ;
 int FUNC_25 (struct prompt*,int ) ;
 int FUNC_26 (struct prompt*,char*,...) ;
 int FUNC_27 (struct prompt*) ;
 int FUNC_28 (struct prompt*) ;
 int FUNC_29 (struct prompt*) ;
 int FUNC_30 (int,char*,int) ;
 int FUNC_31 () ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_35 (char*,struct stat*) ;
 int VAR_44 ;
 char* FUNC_36 (int ) ;
 int FUNC_37 (char*) ;
 char* FUNC_38 (char*,char) ;
 scalar_t__ FUNC_39 (struct bundle*,char*,char*,struct prompt*,int *) ;

int
FUNC_40(int VAR_45, char **VAR_46)
{
  char *VAR_47;
  const char *VAR_48;
  int VAR_49, VAR_50[3], VAR_51;
  unsigned VAR_52;
  struct bundle *VAR_53;
  struct prompt *VAR_54;
  struct switches VAR_55;

  FUNC_23();







  if ((VAR_50[0] = FUNC_20(VAR_40, VAR_14)) == -1) {
    FUNC_15(VAR_44, "Cannot open %s !\n", VAR_40);
    return 2;
  }
  for (VAR_52 = 1; VAR_52 < sizeof VAR_50 / sizeof *VAR_50; VAR_52++)
    VAR_50[VAR_52] = FUNC_12(VAR_50[0]);

  VAR_47 = FUNC_38(VAR_46[0], '/');
  FUNC_16(VAR_47 ? VAR_47 + 1 : VAR_46[0]);


  VAR_43 = FUNC_5(((void*)0));

  VAR_51 = FUNC_6(VAR_45, VAR_46, &VAR_55);
  if (VAR_55.mode == VAR_18) {
    FUNC_11(VAR_33);
    if (FUNC_20(VAR_41, VAR_13) != VAR_33) {
      FUNC_15(VAR_44, "Cannot open %s for input !\n", VAR_41);
      return 2;
    }
  }


  if (VAR_55.mode == VAR_17)
    VAR_54 = ((void*)0);
  else
    VAR_37 = VAR_54 = FUNC_24(((void*)0), ((void*)0), VAR_20);

  FUNC_3();
  if (FUNC_4() != 0) {
    char VAR_56[200], *VAR_57;

    FUNC_34(VAR_56, sizeof VAR_56, "%s/%s", VAR_19, VAR_3);
    do {
      struct stat VAR_58;

      if (FUNC_35(VAR_56, &VAR_58) == 0 && VAR_58.st_mode & VAR_35) {
        FUNC_17(VAR_9, "ppp: Access violation: Please protect %s\n",
                   VAR_56);
        return -1;
      }
      VAR_57 = VAR_56 + FUNC_37(VAR_56)-2;
      while (VAR_57 > VAR_56 && *VAR_57 != '/')
        *VAR_57-- = '\0';
    } while (VAR_57 >= VAR_56);
  }

  if (VAR_51 < VAR_45)
    for (VAR_49 = VAR_51; VAR_49 < VAR_45; VAR_49++)
      FUNC_1(VAR_46[VAR_49], VAR_54, VAR_55.mode);
  else
    FUNC_1("default", VAR_54, VAR_55.mode);

  if (!VAR_55.quiet)
    FUNC_26(VAR_54, "Working in %s mode\n", FUNC_18(VAR_55.mode));

  if ((VAR_53 = FUNC_8(VAR_38, VAR_55.mode, VAR_55.unit)) == ((void*)0))
    return VAR_7;



  VAR_36 = VAR_53;
  VAR_53->NatEnabled = VAR_55.nat;
  if (VAR_55.nat)
    FUNC_21(VAR_53, VAR_12);

  if (FUNC_39(VAR_53, "default", VAR_3, VAR_54, ((void*)0)) < 0)
    FUNC_26(VAR_54, "Warning: No default entry found in config file.\n");

  FUNC_32(VAR_23, VAR_5);
  FUNC_32(VAR_27, VAR_5);
  FUNC_32(VAR_24, VAR_4);
  FUNC_32(VAR_26, VAR_5);
  FUNC_32(VAR_22, VAR_31);
  FUNC_33(VAR_25, VAR_31);

  if (VAR_55.mode == VAR_18)
    FUNC_32(VAR_28, VAR_39);

  FUNC_32(VAR_29, VAR_21);
  FUNC_32(VAR_30, VAR_2);

  VAR_48 = VAR_46[VAR_45 - 1];
  for (VAR_49 = VAR_51; VAR_49 < VAR_45; VAR_49++) {

    FUNC_10(VAR_53, VAR_48);
    FUNC_39(VAR_53, VAR_46[VAR_49], VAR_3, VAR_54, ((void*)0));
  }

  if (VAR_51 < VAR_45)

    FUNC_10(VAR_53, VAR_48);

  if (VAR_55.mode == VAR_15 &&
      FUNC_19(&VAR_53->ncp.ipcp.cfg.peer_range) == VAR_0) {
    FUNC_26(VAR_54, "You must ``set ifaddr'' with a peer address "
                  "in auto mode.\n");
    FUNC_0(VAR_7);
  }

  if (VAR_54) {
    VAR_54->bundle = VAR_53;
    if (!VAR_55.quiet)
      FUNC_26(VAR_54, "Using interface: %s\n", VAR_53->iface->name);
  }

  if (VAR_55.mode != VAR_18) {
    if (VAR_55.mode != VAR_17) {
      if (!VAR_55.fg) {
        int VAR_59[2];
        pid_t VAR_60;

        if (VAR_55.mode == VAR_16 && FUNC_22(VAR_59)) {
          FUNC_17(VAR_10, "pipe: %s\n", FUNC_36(VAR_42));
   FUNC_0(VAR_6);
        }

        VAR_60 = FUNC_14();
        if (VAR_60 == -1) {
   FUNC_17(VAR_10, "fork: %s\n", FUNC_36(VAR_42));
   FUNC_0(VAR_6);
        }

        if (VAR_60) {
   char VAR_61 = 130;
          int VAR_62;

   if (VAR_55.mode == VAR_16) {
     FUNC_11(VAR_59[1]);
     VAR_1 = VAR_60;

            FUNC_33(VAR_23, VAR_8);
            FUNC_33(VAR_27, VAR_8);
            FUNC_33(VAR_24, VAR_8);
            FUNC_33(VAR_26, VAR_8);


            while ((VAR_62 = FUNC_30(VAR_59[0], &VAR_61, 1)) == 1) {
              switch (VAR_61) {
                case 130:
                  if (!VAR_55.quiet) {
             FUNC_26(VAR_54, "PPP enabled\n");
             FUNC_17(VAR_11, "Parent: PPP enabled\n");
                  }
           break;
                case 128:
                  if (!VAR_55.quiet)
             FUNC_26(VAR_54, "Attempting redial\n");
                  continue;
                case 129:
                  if (!VAR_55.quiet)
             FUNC_26(VAR_54, "Attempting reconnect\n");
                  continue;
         default:
           FUNC_26(VAR_54, "Child failed (%s)\n",
                                FUNC_13((int)VAR_61));
           FUNC_17(VAR_11, "Parent: Child failed (%s)\n",
               FUNC_13((int) VAR_61));
       }
       break;
            }
            if (VAR_62 != 1) {
       FUNC_26(VAR_54, "Child exit, no status.\n");
       FUNC_17(VAR_11, "Parent: Child exit, no status.\n");
     }
     FUNC_11(VAR_59[0]);
   }
   return VAR_61;
        } else if (VAR_55.mode == VAR_16) {
   FUNC_11(VAR_59[0]);
          VAR_53->notify.fd = VAR_59[1];
        }

        FUNC_7(VAR_53);
        FUNC_9(VAR_53);
      }


      FUNC_25(VAR_54, 0);
      FUNC_11(VAR_34);
      FUNC_11(VAR_32);
      FUNC_11(VAR_33);
      if (!VAR_55.fg)
        FUNC_31();
    } else {




      FUNC_29(((void*)0));
      FUNC_11(VAR_32);
    }
  } else {

    FUNC_11(VAR_32);
    FUNC_29(VAR_54);
    FUNC_28(VAR_54);
    FUNC_27(VAR_54);
  }


  for (VAR_52 = 0; VAR_52 < sizeof VAR_50 / sizeof *VAR_50; VAR_52++)
    FUNC_11(VAR_50[VAR_52]);

  FUNC_17(VAR_11, "PPP Started (%s mode).\n", FUNC_18(VAR_55.mode));
  FUNC_2(VAR_53);
  FUNC_0(130);

  return 130;
}
