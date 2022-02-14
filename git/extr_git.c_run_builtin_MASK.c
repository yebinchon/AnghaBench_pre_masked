
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct cmd_struct {int option; int (* fn ) (int,char const**,char const*) ;int cmd; } ;
struct TYPE_4__ {scalar_t__ have_repository; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,...) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;
 scalar_t__ FUNC_12 () ;
 char* FUNC_13 () ;
 char* FUNC_14 (int*) ;
 int FUNC_15 () ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (char const*,char*) ;
 int FUNC_17 (int,char const**,char const*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char const**,char*) ;
 int FUNC_21 (char const*) ;
 int VAR_9 ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(struct cmd_struct *VAR_10, int VAR_11, const char **VAR_12)
{
 int VAR_13, VAR_14;
 struct stat VAR_15;
 const char *VAR_16;

 VAR_16 = ((void*)0);
 VAR_14 = VAR_11 == 2 && !FUNC_16(VAR_12[1], "-h");
 if (!VAR_14) {
  if (VAR_10->option & VAR_2)
   VAR_16 = FUNC_13();
  else if (VAR_10->option & VAR_3) {
   int VAR_17;
   VAR_16 = FUNC_14(&VAR_17);
  }

  if (VAR_9 == -1 && VAR_10->option & (VAR_2 | VAR_3) &&
      !(VAR_10->option & VAR_0))
   VAR_9 = FUNC_3(VAR_10->cmd);
  if (VAR_9 == -1 && VAR_10->option & VAR_5)
   VAR_9 = 1;

  if ((VAR_10->option & (VAR_2 | VAR_3)) &&
      VAR_6->have_repository)
   FUNC_21(VAR_16);
 }
 FUNC_4();

 if (!VAR_14 && FUNC_12()) {
  if (!(VAR_10->option & VAR_4))
   FUNC_5(FUNC_2("%s doesn't support --super-prefix"), VAR_10->cmd);
 }

 if (!VAR_14 && VAR_10->option & VAR_1)
  FUNC_15();

 FUNC_20(VAR_12, "trace: built-in: git");
 FUNC_19(VAR_10->cmd);
 FUNC_18();

 FUNC_22(VAR_8->index);
 VAR_13 = VAR_10->fn(VAR_11, VAR_12, VAR_16);
 FUNC_22(VAR_8->index);

 if (VAR_13)
  return VAR_13;


 if (FUNC_11(FUNC_10(VAR_7), &VAR_15))
  return 0;

 if (FUNC_0(VAR_15.st_mode) || FUNC_1(VAR_15.st_mode))
  return 0;


 if (FUNC_9(VAR_7))
  FUNC_6(FUNC_2("write failure on standard output"));
 if (FUNC_8(VAR_7))
  FUNC_5(FUNC_2("unknown write failure on standard output"));
 if (FUNC_7(VAR_7))
  FUNC_6(FUNC_2("close failed on standard output"));
 return 0;
}
