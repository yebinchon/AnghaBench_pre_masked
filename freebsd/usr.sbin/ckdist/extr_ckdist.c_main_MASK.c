
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {int fts_info; char* fts_path; size_t fts_errno; int fts_name; int fts_level; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;







 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (char**,int ,int *) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*,int ) ;
 int FUNC_12 (int,char**,char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 char** VAR_14 ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_15, char *VAR_16[])
{
    static char *VAR_17[2];
    struct stat VAR_18;
    FTS *VAR_19;
    FTSENT *VAR_20;
    int VAR_21, VAR_22, VAR_23;

    while ((VAR_22 = FUNC_12(VAR_15, VAR_16, "ad:in:rst:x")) != -1)
 switch (VAR_22) {
 case 'a':
     VAR_4 = 1;
     break;
 case 'd':
     VAR_5 = VAR_12;
     break;
 case 'i':
     VAR_7 = 1;
     break;
 case 'n':
     VAR_8 = VAR_12;
     break;
 case 'r':
     VAR_9 = 1;
     break;
 case 's':
     VAR_10 = 1;
     break;
 case 't':
     if ((VAR_11 = FUNC_4(VAR_12)) == 0) {
  FUNC_16("illegal argument to -t option");
  FUNC_15();
     }
     break;
 case 'x':
     VAR_6 = 1;
     break;
 default:
     FUNC_15();
 }
    VAR_15 -= VAR_13;
    VAR_16 += VAR_13;
    if (VAR_15 < 1)
 FUNC_15();
    if (VAR_5) {
 if (FUNC_14(VAR_5, &VAR_18))
     FUNC_5(2, "%s", VAR_5);
 if (!FUNC_0(VAR_18.st_mode))
     FUNC_6(2, "%s: not a directory", VAR_5);
    }
    VAR_21 = 0;
    do {
 if (FUNC_13(*VAR_16))
     VAR_21 |= FUNC_2(*VAR_16, VAR_11);
 else if (FUNC_14(*VAR_16, &VAR_18))
     VAR_21 |= FUNC_7(*VAR_16, ((void*)0));
 else if (FUNC_1(VAR_18.st_mode))
     VAR_21 |= FUNC_2(*VAR_16, VAR_11);
 else {
     VAR_17[0] = *VAR_16;
     if ((VAR_19 = FUNC_9(VAR_17, VAR_0, ((void*)0))) == ((void*)0))
  FUNC_5(2, "fts_open");
     while ((VAR_20 = FUNC_10(VAR_19)) != ((void*)0))
  switch (VAR_20->fts_info) {
  case 132:
      VAR_21 = FUNC_7(VAR_20->fts_path, "Directory causes a cycle");
      break;
  case 131:
  case 130:
  case 128:
      VAR_21 = FUNC_7(VAR_20->fts_path, VAR_14[VAR_20->fts_errno]);
      break;
  case 133:
      if (!VAR_9 && VAR_20->fts_level > VAR_1 &&
   FUNC_11(VAR_19, VAR_20, VAR_2))
   FUNC_5(2, "fts_set");
      break;
  case 129:
      if ((VAR_23 = FUNC_3(VAR_20->fts_name)) != 0 &&
   (!VAR_11 || VAR_23 == VAR_11))
   VAR_21 |= FUNC_2(VAR_20->fts_path, VAR_23);
      break;
                default: ;
  }
     if (VAR_3)
  FUNC_5(2, "fts_read");
     if (FUNC_8(VAR_19))
  FUNC_5(2, "fts_close");
 }
    } while (*++VAR_16);
    return VAR_21;
}
