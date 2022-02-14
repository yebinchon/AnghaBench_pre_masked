
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zwork ;
typedef int tm ;
typedef scalar_t__ time_t ;
struct zipwork_entry {int zw_fname; int zw_fsize; struct conf_entry const* zw_conf; } ;
struct tm {int dummy; } ;
struct stat {int dummy; } ;
struct sigwork_entry {int dummy; } ;
struct conf_entry {int flags; char* log; int numlogs; scalar_t__ compress; int fsize; int * pid_cmd_file; } ;
typedef int namepart ;
typedef int fk_entry ;
typedef int file2 ;
typedef int file1 ;
typedef int dirpart ;
typedef int datetimestr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct tm*,int) ;
 int FUNC_1 (char*,struct conf_entry const*) ;
 int FUNC_2 (struct conf_entry const*,char*) ;
 int FUNC_3 (struct conf_entry const*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct conf_entry const*,char*) ;
 int FUNC_6 (struct zipwork_entry*) ;
 int FUNC_7 (char*,int,char*,char*,int) ;
 char* FUNC_8 (char*) ;
 int * FUNC_9 (scalar_t__*,struct tm*) ;
 int FUNC_10 (char*,struct conf_entry const*) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (struct zipwork_entry*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,char*) ;
 struct sigwork_entry* FUNC_15 (struct conf_entry const*) ;
 int FUNC_16 (struct conf_entry const*,struct sigwork_entry*,int ,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (char*,int,int *,struct tm*) ;
 int FUNC_23 (char*,char const*,int) ;
 int FUNC_24 (char*,char*,int) ;
 int FUNC_25 (char const*) ;
 char* FUNC_26 (char*,char) ;
 scalar_t__ FUNC_27 (scalar_t__*) ;
 int * VAR_9 ;
 int FUNC_28 (char*,int *) ;

__attribute__((used)) static fk_entry
FUNC_29(const struct conf_entry *VAR_10)
{
 char VAR_11[VAR_5], VAR_12[VAR_5];
 char VAR_13[VAR_5], VAR_14[VAR_5];
 char VAR_15[VAR_5], VAR_16[VAR_5];
 const char *VAR_17;
 char VAR_18[30];
 int VAR_19, VAR_20;
 fk_entry VAR_21;
 struct sigwork_entry *VAR_22;
 struct stat VAR_23;
 struct tm VAR_24;
 time_t VAR_25;

 VAR_19 = VAR_10->flags;
 VAR_21 = VAR_3;

 if (VAR_7) {
  char *VAR_26;


  if (*VAR_6 == '/') {
   FUNC_24(VAR_11, VAR_6, sizeof(VAR_11));
  } else {

   FUNC_24(VAR_11, VAR_10->log, sizeof(VAR_11));
   if ((VAR_26 = FUNC_26(VAR_11, '/')) == ((void*)0))
    VAR_11[0] = '\0';
   else
    *(VAR_26 + 1) = '\0';
   FUNC_23(VAR_11, VAR_6, sizeof(VAR_11));
  }


  if (FUNC_11(VAR_11, &VAR_23))
   FUNC_2(VAR_10, VAR_11);


  if ((VAR_26 = FUNC_26(VAR_10->log, '/')) == ((void*)0))
   FUNC_24(VAR_12, VAR_10->log, sizeof(VAR_12));
  else
   FUNC_24(VAR_12, VAR_26 + 1, sizeof(VAR_12));
 } else {




  VAR_11[0] = '\0';
  FUNC_24(VAR_12, VAR_10->log, sizeof(VAR_12));
 }


 if (VAR_9 != ((void*)0))
  FUNC_5(VAR_10, VAR_11);
 else {





  FUNC_4(VAR_11, VAR_12, VAR_10->numlogs);

  if (VAR_10->numlogs > 0)
   FUNC_4(VAR_11, VAR_12, VAR_10->numlogs - 1);

 }

 if (VAR_9 != ((void*)0)) {

  if (FUNC_27(&VAR_25) == (time_t)-1 ||
      FUNC_9(&VAR_25, &VAR_24) == ((void*)0))
   FUNC_0(&VAR_24, sizeof(VAR_24));

  FUNC_22(VAR_18, sizeof(VAR_18), VAR_9, &VAR_24);
  if (VAR_7)
   (void) FUNC_19(VAR_13, sizeof(VAR_13), "%s/%s.%s",
       VAR_11, VAR_12, VAR_18);
  else
   (void) FUNC_19(VAR_13, sizeof(VAR_13), "%s.%s",
       VAR_10->log, VAR_18);


  VAR_20 = -1;
 } else {
  FUNC_7(VAR_13, sizeof(VAR_13), VAR_11, VAR_12,
      VAR_10->numlogs - 1);
  VAR_20 = VAR_10->numlogs - 2;
 }


 for (; VAR_20 >= 0; VAR_20--) {
  (void) FUNC_24(VAR_14, VAR_13, sizeof(VAR_14));

  FUNC_7(VAR_13, sizeof(VAR_13), VAR_11, VAR_12,
      VAR_20);

  VAR_17 = FUNC_8(VAR_13);
  if (VAR_17 == ((void*)0))
   continue;
  (void) FUNC_24(VAR_15, VAR_13, VAR_5);
  (void) FUNC_24(VAR_16, VAR_14, VAR_5);
  (void) FUNC_23(VAR_15, VAR_17, VAR_5);
  (void) FUNC_23(VAR_16, VAR_17, VAR_5);

  if (VAR_8)
   FUNC_13("\tmv %s %s\n", VAR_15, VAR_16);
  else {

   (void)FUNC_14(VAR_15, VAR_16);
   FUNC_1(VAR_16, VAR_10);
   if (VAR_10->compress && !FUNC_25(VAR_17)) {

    struct zipwork_entry VAR_27;

    FUNC_12(&VAR_27, 0, sizeof(VAR_27));
    VAR_27.zw_conf = VAR_10;
    VAR_27.zw_fsize = FUNC_18(VAR_16);
    FUNC_21(VAR_27.zw_fname, VAR_16);
    FUNC_6(&VAR_27);
   }
  }
 }

 if (VAR_10->numlogs > 0) {
  if (VAR_8) {






   if (VAR_7)
    FUNC_13("\tcp %s %s\n", VAR_10->log, VAR_13);
   else
    FUNC_13("\tln %s %s\n", VAR_10->log, VAR_13);
   FUNC_13("\ttouch %s\t\t"
       "# Update mtime for 'when'-interval processing\n",
       VAR_13);
  } else {
   if (!(VAR_19 & VAR_0)) {

    FUNC_10(VAR_10->log, VAR_10);
   }
   FUNC_17(VAR_10->log, VAR_13);





   FUNC_28(VAR_13, ((void*)0));
  }
  FUNC_1(VAR_13, VAR_10);
 }


 if (VAR_8)
  FUNC_13("Start new log...\n");
 FUNC_3(VAR_10);







 VAR_22 = ((void*)0);
 if (VAR_10->pid_cmd_file != ((void*)0))
  VAR_22 = FUNC_15(VAR_10);
 if (VAR_10->numlogs > 0 && VAR_10->compress > VAR_2) {
  if (!(VAR_10->flags & VAR_1) ||
      FUNC_20(&VAR_13[FUNC_25(VAR_13) - 2], ".0") != 0) {




   VAR_21 = VAR_4;
   FUNC_16(VAR_10, VAR_22, VAR_10->fsize, VAR_13);
  }
 }

 return (VAR_21);
}
