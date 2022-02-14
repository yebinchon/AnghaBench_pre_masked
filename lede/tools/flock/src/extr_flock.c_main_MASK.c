
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct sigaction {int sa_flags; int sa_handler; TYPE_1__ it_value; } ;
struct itimerval {int sa_flags; int sa_handler; TYPE_1__ it_value; } ;
typedef scalar_t__ pid_t ;




 int const VAR_0 ;
 int VAR_1 ;
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
 char* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_30 ;
 char* FUNC_4 (char*) ;
 char* VAR_31 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int) ;
 int const VAR_32 ;
 int FUNC_8 (char*,char**) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,char*,char*,...) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (int,char**,char*,int ,int*) ;
 int VAR_33 ;
 int FUNC_15 (struct sigaction*,int ,int) ;
 int FUNC_16 (char const*,int,...) ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_17 (char*,char*) ;
 char* VAR_37 ;
 int FUNC_18 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_19 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_20 (int ,int ) ;
 int VAR_38 ;
 int FUNC_21 (char*,char*) ;
 char* FUNC_22 (int) ;
 scalar_t__ FUNC_23 (char*,char**,int) ;
 char* FUNC_24 (int ,TYPE_1__*) ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_25 (int) ;
 scalar_t__ FUNC_26 (scalar_t__,int*,int ) ;

int FUNC_27(int VAR_41, char *VAR_42[])
{
  struct itimerval VAR_43, VAR_44;
  int VAR_45 = 0;
  int VAR_46 = VAR_16;
  int VAR_47 = 0;
  int VAR_48 = -1;
  int VAR_49, VAR_50;
  int VAR_51 = 0;
  int VAR_52;
  int VAR_53;
  int VAR_54 = 0;
  char *VAR_55;
  char **VAR_56 = ((void*)0), *VAR_57[4];
  const char *VAR_58 = ((void*)0);
  struct sigaction VAR_59, VAR_60;

  VAR_37 = VAR_42[0];

  if ( VAR_41 < 2 )
    FUNC_25(VAR_14);

  FUNC_15(&VAR_43, 0, sizeof VAR_43);

  VAR_36 = 0;
  while ( (VAR_49 = FUNC_14(VAR_41, VAR_42, "+sexnouw:hV?", VAR_33, &VAR_50)) != VAR_6 ) {
    switch(VAR_49) {
    case 's':
      VAR_46 = VAR_18;
      break;
    case 'e':
    case 'x':
      VAR_46 = VAR_16;
      break;
    case 'u':
      VAR_46 = VAR_19;
      break;
    case 'o':
      VAR_51 = 1;
      break;
    case 'n':
      VAR_47 = VAR_17;
      break;
    case 'w':
      VAR_45 = 1;
      VAR_55 = FUNC_24(VAR_34, &VAR_43.it_value);
      if ( *VAR_55 )
 FUNC_25(VAR_14);
      break;
    case 'V':
      FUNC_17("flock (%s)\n", VAR_24);
      FUNC_9(0);
    default:

      FUNC_25(VAR_36 ? VAR_14 : 0);
      break;
    }
  }

  if ( VAR_41 > VAR_35+1 ) {


    if ( !FUNC_21(VAR_42[VAR_35+1], "-c") ||
  !FUNC_21(VAR_42[VAR_35+1], "--command") ) {

      if ( VAR_41 != VAR_35+3 ) {
 FUNC_12(VAR_38, FUNC_4("%s: %s requires exactly one command argument\n"),
  VAR_37, VAR_42[VAR_35+1]);
 FUNC_9(VAR_14);
      }

      VAR_56 = VAR_57;

      VAR_56[0] = FUNC_13("SHELL");
      if ( !VAR_56[0] || !*VAR_56[0] )
 VAR_56[0] = VAR_31;

      VAR_56[1] = "-c";
      VAR_56[2] = VAR_42[VAR_35+2];
      VAR_56[3] = 0;
    } else {
      VAR_56 = &VAR_42[VAR_35+1];
    }

    VAR_58 = VAR_42[VAR_35];
    VAR_48 = FUNC_16(VAR_58, VAR_22|VAR_21|VAR_20, 0666);


    if (VAR_48 < 0 && VAR_32 == VAR_0)
        VAR_48 = FUNC_16(VAR_58, VAR_22|VAR_21);

    if ( VAR_48 < 0 ) {
      VAR_52 = VAR_32;
      FUNC_12(VAR_38, FUNC_4("%s: cannot open lock file %s: %s\n"),
       VAR_37, VAR_42[VAR_35], FUNC_22(VAR_52));
      FUNC_9((VAR_52 == VAR_4||VAR_52 == VAR_1||VAR_52 == VAR_2) ? VAR_12 :
    (VAR_52 == VAR_7||VAR_52 == VAR_5) ? VAR_9 :
    VAR_11);
    }

  } else if (VAR_35 < VAR_41) {


    VAR_48 = (int)FUNC_23(VAR_42[VAR_35], &VAR_55, 10);
    if ( *VAR_55 || !VAR_42[VAR_35] ) {
      FUNC_12(VAR_38, FUNC_4("%s: bad number: %s\n"), VAR_37, VAR_42[VAR_35]);
      FUNC_9(VAR_14);
    }

  } else {


    FUNC_12(VAR_38, FUNC_4("%s: requires file descriptor, file or directory\n"),
  VAR_37);
    FUNC_9(VAR_14);
  }


  if ( VAR_45 ) {
    if ( VAR_43.it_value.tv_sec == 0 &&
  VAR_43.it_value.tv_usec == 0 ) {



      VAR_45 = 0;
      VAR_47 = VAR_17;
    } else {
      FUNC_15(&VAR_59, 0, sizeof VAR_59);

      VAR_59.sa_handler = VAR_40;
      VAR_59.sa_flags = VAR_26;
      FUNC_19(VAR_27, &VAR_59, &VAR_60);

      FUNC_18(VAR_15, &VAR_43, &VAR_44);
    }
  }

  while ( FUNC_10(VAR_48, VAR_46|VAR_47) ) {
    switch( (VAR_52 = VAR_32) ) {
    case 128:
      FUNC_9(1);
    case 129:
      if ( VAR_39 )
 FUNC_9(1);
      continue;
    case 130:



      if (!(VAR_54 & VAR_23) &&
          VAR_46 != VAR_18 &&
          VAR_58 &&
          FUNC_6(VAR_58, VAR_25 | VAR_30) == 0) {

              FUNC_7(VAR_48);
              VAR_54 = VAR_23;
              VAR_48 = FUNC_16(VAR_58, VAR_54);
              break;
      }

    default:
      if ( VAR_58 )
 FUNC_12(VAR_38, "%s: %s: %s\n", VAR_37, VAR_58, FUNC_22(VAR_52));
      else
 FUNC_12(VAR_38, "%s: %d: %s\n", VAR_37, VAR_48, FUNC_22(VAR_52));
      FUNC_9((VAR_52 == VAR_3||VAR_52 == VAR_4) ? VAR_12 : VAR_10);
    }
  }

  if ( VAR_45 ) {
    FUNC_18(VAR_15, &VAR_44, ((void*)0));
    FUNC_19(VAR_27, &VAR_60, ((void*)0));
  }

  VAR_53 = 0;

  if ( VAR_56 ) {
    pid_t VAR_61, VAR_62;


    FUNC_20(VAR_28, VAR_29);
    VAR_62 = FUNC_11();

    if ( VAR_62 < 0 ) {
      VAR_52 = VAR_32;
      FUNC_12(VAR_38, FUNC_4("%s: fork failed: %s\n"), VAR_37, FUNC_22(VAR_52));
      FUNC_9(VAR_12);
    } else if ( VAR_62 == 0 ) {
      if ( VAR_51 )
 FUNC_7(VAR_48);
      VAR_52 = VAR_32;
      FUNC_8(VAR_56[0], VAR_56);

      FUNC_12(VAR_38, "%s: %s: %s\n", VAR_37, VAR_56[0], FUNC_22(VAR_52));
      FUNC_5((VAR_52 == VAR_4) ? VAR_12: VAR_13);
    } else {
      do {
 VAR_61 = FUNC_26(VAR_62, &VAR_53, 0);
 if (VAR_61 == -1 && VAR_32 != 129)
   break;
      } while ( VAR_61 != VAR_62 );

      if (VAR_61 == -1) {
 VAR_52 = VAR_32;
 VAR_53 = VAR_8;
 FUNC_12(VAR_38, "%s: waitpid failed: %s\n", VAR_37, FUNC_22(VAR_52));
      } else if ( FUNC_1(VAR_53) )
 VAR_53 = FUNC_0(VAR_53);
      else if ( FUNC_2(VAR_53) )
 VAR_53 = FUNC_3(VAR_53) + 128;
      else
 VAR_53 = VAR_12;
    }
  }

  return VAR_53;
}
