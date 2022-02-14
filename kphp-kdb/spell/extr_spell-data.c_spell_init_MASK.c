
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct speller {int russian; struct speller* next; void* name; void* jargon; void* code; int spell_checker; int * config; } ;
struct TYPE_3__ {char* code; char* jargon; char* name; } ;
typedef int AspellDictInfoList ;
typedef int AspellDictInfoEnumeration ;
typedef TYPE_1__ AspellDictInfo ;
typedef int AspellConfig ;
typedef int AspellCanHaveError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct speller** VAR_3 ;
 struct speller** VAR_4 ;
 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int ,...) ;
 int* VAR_6 ;
 int * FUNC_11 () ;
 int * FUNC_12 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (void*,char*) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (int *,char*,char*) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (int,char*,char*,...) ;
 void* FUNC_19 (int) ;
 struct speller* FUNC_20 (int) ;
 void* FUNC_21 (char*) ;

void FUNC_22 (void) {
  int VAR_12 = FUNC_17 (&VAR_7, VAR_5, VAR_0 | VAR_1 | VAR_2);
  if (VAR_12) {
    FUNC_10 ("regcomp (%s) return error code %d\n.", VAR_5, VAR_12);
    FUNC_7 (1);
  }
  VAR_12 = FUNC_17 (&VAR_8, VAR_10, VAR_0 | VAR_1 | VAR_2);
  if (VAR_12) {
    FUNC_10 ("regcomp (%s) return error code %d\n.", VAR_5, VAR_12);
    FUNC_7 (1);
  }

  struct speller *VAR_13 = ((void*)0);
  VAR_9 = 0;

  FUNC_9 ();
  VAR_6[0xa8] = VAR_6[0xb8] = 0xb8;

  const AspellDictInfo *VAR_14;
  AspellConfig *VAR_15 = FUNC_11 ();
  AspellDictInfoList *VAR_16 = FUNC_8 (VAR_15);
  AspellDictInfoEnumeration *VAR_17 = FUNC_1 (VAR_16);
  while ((VAR_14 = FUNC_0 (VAR_17)) != 0) {
    struct speller *VAR_18;
    for (VAR_18 = VAR_13; VAR_18 != ((void*)0); VAR_18 = VAR_18->next) {
      if (!FUNC_13 (VAR_18->code, VAR_14->code) && !FUNC_13 (VAR_18->jargon, VAR_14->jargon)) {
        break;
      }
    }
    if (VAR_18 != ((void*)0)) {
      FUNC_18 (1, "skip duplicate dictionary (code:%s, jargon:%s)\n", VAR_14->code, VAR_14->jargon);
      continue;
    }

    AspellConfig *VAR_19 = FUNC_11 ();
    if (!FUNC_16 (VAR_19, "lang", VAR_14->code) ||
        !FUNC_16 (VAR_19, "jargon", VAR_14->jargon) ||
        !FUNC_16 (VAR_19, "encoding", "CP1251")) {
      FUNC_5 (VAR_19);
      continue;
    }
    if (VAR_11 && (!FUNC_16 (VAR_19, "filter", "url") ||
                                  !FUNC_16 (VAR_19, "sug-mode", "fast"))) {
      FUNC_5 (VAR_19);
      continue;
    }
    AspellCanHaveError *VAR_20 = FUNC_12 (VAR_19);
    if (FUNC_3 (VAR_20) != 0) {
      FUNC_10 ("%s\n", FUNC_2 (VAR_20));
      FUNC_4 (VAR_20);
      FUNC_5 (VAR_19);
      continue;
    } else {
      struct speller *VAR_21 = FUNC_20 (sizeof (struct speller));
      VAR_21->config = VAR_19;
      VAR_21->spell_checker = FUNC_15 (VAR_20);
      VAR_21->name = FUNC_21 (VAR_14->name);
      VAR_21->code = FUNC_21 (VAR_14->code);
      VAR_21->jargon = FUNC_21 (VAR_14->jargon);
      VAR_21->russian = !FUNC_14 (VAR_14->name, "ru", 2);
      VAR_21->next = VAR_13;
      VAR_13 = VAR_21;
      VAR_9++;
      FUNC_18 (1, "user dict: %s\n", VAR_21->name);
    }
  }
  FUNC_6 (VAR_17);
  FUNC_5 (VAR_15);
  VAR_3 = FUNC_19 (VAR_9 * sizeof (struct speller));
  VAR_4 = FUNC_19 (VAR_9 * sizeof (struct speller));
  int VAR_22 = 0;
  while (VAR_13 != ((void*)0)) {
    VAR_3[VAR_22] = VAR_4[VAR_22] = VAR_13;
    VAR_13 = VAR_13->next;
    VAR_22++;
  }
}
