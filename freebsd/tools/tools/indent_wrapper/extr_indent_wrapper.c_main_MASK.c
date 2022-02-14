
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct block {int* mask; int* data; scalar_t__ length; } ;
typedef int cmdbuf ;
typedef int block_head_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct block*,int ) ;
 struct block* FUNC_2 () ;
 int FUNC_3 (int *,int *,char*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (int) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int *,scalar_t__,int) ;
 int FUNC_13 (int ,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,...) ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_10, char **VAR_11)
{
 block_head_t VAR_12;
 block_head_t VAR_13;
 block_head_t VAR_14;
 block_head_t VAR_15;
 block_head_t VAR_16;
 struct block *VAR_17 = ((void*)0);
 struct block *VAR_18 = ((void*)0);
 uint64_t VAR_19;
 uint64_t VAR_20;
 uint64_t VAR_21 = 0;
 uint64_t VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 char VAR_27[256];
 uint16_t VAR_28;
 uint16_t VAR_29;
 int VAR_30;
 int VAR_31 = 0;

 FUNC_13(VAR_4, &VAR_9);

 VAR_27[0] = 0;

 while ((VAR_30 = FUNC_8(VAR_10, VAR_11, "dDvg:s:c:ht:")) != -1) {
  switch (VAR_30) {
  case 'v':
   VAR_7++;
   break;
  case 't':
   VAR_6 = VAR_8;
   break;
  case 'g':
   FUNC_15(VAR_27, sizeof(VAR_27), "git show -U1000000 %s", VAR_8);
   break;
  case 'd':
   FUNC_15(VAR_27, sizeof(VAR_27), "git diff -U1000000");
   break;
  case 'D':
   FUNC_15(VAR_27, sizeof(VAR_27), "svn diff --diff-cmd=diff -x -U1000000");
   break;
  case 's':
   FUNC_15(VAR_27, sizeof(VAR_27), "svn diff --diff-cmd=diff -x -U1000000 -r %s", VAR_8);
   break;
  case 'c':
   FUNC_15(VAR_27, sizeof(VAR_27), "%s", VAR_8);
   break;
  default:
   FUNC_16();
  }
 }
 if (VAR_27[0] == 0)
  FUNC_16();

 FUNC_3(((void*)0), &VAR_12, VAR_27);

 FUNC_0(&VAR_13);
 FUNC_0(&VAR_14);

 VAR_19 = FUNC_14(&VAR_12);
 VAR_17 = FUNC_2();
 VAR_21 = 0;
 VAR_18 = FUNC_2();
 VAR_22 = 0;

 for (VAR_20 = 0; VAR_20 < VAR_19;) {
  VAR_28 = FUNC_10(&VAR_12, VAR_20);
  switch (VAR_28 & 0xFF) {
  case '+':
   if (VAR_28 == FUNC_10(&VAR_12, VAR_20 + 1) &&
       VAR_28 == FUNC_10(&VAR_12, VAR_20 + 2) &&
       ' ' == (FUNC_10(&VAR_12, VAR_20 + 3) & 0xFF))
    goto parse_filename;
   if (VAR_26 == 0)
    break;
   for (VAR_20++; VAR_20 != VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_12, VAR_20);
    VAR_17->mask[VAR_21] = VAR_0 >> 8;
    VAR_17->data[VAR_21++] = VAR_28;
    if (VAR_21 == VAR_2) {
     FUNC_1(&VAR_13, VAR_17, VAR_5);
     VAR_17 = FUNC_2();
     VAR_21 = 0;
    }
    if ((VAR_28 & 0xFF) == '\n')
     break;
   }
   break;
  case '-':
   if (VAR_28 == FUNC_10(&VAR_12, VAR_20 + 1) &&
       VAR_28 == FUNC_10(&VAR_12, VAR_20 + 2) &&
       ' ' == (FUNC_10(&VAR_12, VAR_20 + 3) & 0xFF))
    goto parse_filename;
   if (VAR_26 == 0)
    break;
   for (VAR_20++; VAR_20 != VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_12, VAR_20);
    VAR_18->data[VAR_22++] = VAR_28;
    if (VAR_22 == VAR_2) {
     FUNC_1(&VAR_14, VAR_18, VAR_5);
     VAR_18 = FUNC_2();
     VAR_22 = 0;
    }
    if ((VAR_28 & 0xFF) == '\n')
     break;
   }
   break;
  case ' ':
   if (VAR_26 == 0)
    break;
   for (VAR_20++; VAR_20 != VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_12, VAR_20);
    VAR_17->data[VAR_21++] = VAR_28;
    if (VAR_21 == VAR_2) {
     FUNC_1(&VAR_13, VAR_17, VAR_5);
     VAR_17 = FUNC_2();
     VAR_21 = 0;
    }
    VAR_18->data[VAR_22++] = VAR_28;
    if (VAR_22 == VAR_2) {
     FUNC_1(&VAR_14, VAR_18, VAR_5);
     VAR_18 = FUNC_2();
     VAR_22 = 0;
    }
    if ((VAR_28 & 0xFF) == '\n')
     break;
   }
   break;
 parse_filename:
   for (VAR_20 += 3; VAR_20 != VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_12, VAR_20);
    VAR_29 = FUNC_10(&VAR_12, VAR_20 + 1);
    if ((VAR_28 & 0xFF) == '.') {

     VAR_26 = ((VAR_29 & 0xFF) == 'c' || (VAR_29 & 0xFF) == 'h');
    }
    if ((VAR_28 & 0xFF) == '\n')
     break;
   }
  default:
   break;
  }

  for (; VAR_20 < VAR_19; VAR_20++) {
   VAR_28 = FUNC_10(&VAR_12, VAR_20);
   if ((VAR_28 & 0xFF) == '\n') {
    VAR_20++;
    break;
   }
  }
 }
 VAR_17->length = VAR_21;
 VAR_18->length = VAR_22;
 FUNC_1(&VAR_13, VAR_17, VAR_5);
 FUNC_1(&VAR_14, VAR_18, VAR_5);


 VAR_19 = FUNC_14(&VAR_13);
 for (VAR_20 = 0; VAR_20 != VAR_19; VAR_20++) {
  VAR_28 = FUNC_10(&VAR_13, VAR_20) & 0xFF;
  if (!(VAR_28 & 0x80) && VAR_28 != '\t' && VAR_28 != '\r' && VAR_28 != '\n' &&
      VAR_28 != ' ' && !FUNC_9(VAR_28))
   FUNC_6(VAR_3, "Non printable characters are not allowed: '%c'", VAR_28);
  else if (VAR_28 & 0x80) {
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
  }
 }


 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_28 = FUNC_10(&VAR_13, VAR_20);
  VAR_29 = FUNC_10(&VAR_13, VAR_20 + 1);
  if ((VAR_28 & 0xFF) == '/' && (VAR_29 & 0xFF) == '/') {
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   FUNC_12(&VAR_13, VAR_20 + 1, VAR_29 | VAR_1);
   for (VAR_20 += 2; VAR_20 < VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_13, VAR_20);
    if ((VAR_28 & 0xFF) == '\n')
     break;
    FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   }
  } else if ((VAR_28 & 0xFF) == '/' && (VAR_29 & 0xFF) == '*') {
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   FUNC_12(&VAR_13, VAR_20 + 1, VAR_29 | VAR_1);
   for (VAR_20 += 2; VAR_20 < VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_13, VAR_20);
    VAR_29 = FUNC_10(&VAR_13, VAR_20 + 1);
    if ((VAR_28 & 0xFF) == '*' && (VAR_29 & 0xFF) == '/') {
     FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
     FUNC_12(&VAR_13, VAR_20 + 1, VAR_29 | VAR_1);
     VAR_20++;
     break;
    }
    FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   }
  }
 }


 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_28 = FUNC_10(&VAR_13, VAR_20);
  if (VAR_28 & VAR_1)
   continue;
  if (VAR_24 == 0 && (VAR_28 & 0xFF) == '#') {
   int VAR_32 = 0;

   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   for (VAR_20++; VAR_20 < VAR_19; VAR_20++) {
    VAR_28 = FUNC_10(&VAR_13, VAR_20);
    if ((VAR_28 & 0xFF) == '\n') {
     if (!VAR_32)
      break;
     VAR_32 = 0;
    }
    if (VAR_28 & VAR_1)
     continue;
    if ((VAR_28 & 0xFF) == '\\')
     VAR_32 = 1;
    FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   }
  }
  if ((VAR_28 & 0xFF) == '"' || (VAR_28 & 0xFF) == '\'') {
   if (VAR_24 == 0) {
    VAR_24 = (VAR_28 & 0xFF);
   } else {
    if (VAR_25 == 0 && VAR_24 == (VAR_28 & 0xFF))
     VAR_24 = 0;
   }
   VAR_25 = 0;
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
  } else if (VAR_24 != 0) {
   if ((VAR_28 & 0xFF) == '\\')
    VAR_25 = !VAR_25;
   else
    VAR_25 = 0;
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
  }
 }


 if (VAR_7 > 0) {
  VAR_29 = FUNC_10(&VAR_13, VAR_20);
  FUNC_11("L%02d%c|", VAR_23,
      (VAR_29 & VAR_0) ? '+' : ' ');
 }
 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_28 = FUNC_10(&VAR_13, VAR_20);
  if (VAR_7 > 0) {
   FUNC_11("%c", VAR_28 & 0xFF);
   if ((VAR_28 & 0xFF) == '\n') {
    VAR_29 = FUNC_10(&VAR_13, VAR_20 + 1);
    FUNC_11("L%02d%c|", VAR_23,
        (VAR_29 & VAR_0) ? '+' : ' ');
   }
  }
  if (VAR_28 & VAR_1)
   continue;
  switch (VAR_28 & 0xFF) {
  case '{':
  case '(':
   VAR_23++;
   break;
  default:
   break;
  }
  if (VAR_23 != 0)
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
  switch (VAR_28 & 0xFF) {
  case '}':
  case ')':
   VAR_23--;
   break;
  default:
   break;
  }
 }
 if (VAR_7 > 0)
  FUNC_11("\n");
 if (VAR_23 != 0)
  FUNC_6(VAR_3, "Unbalanced parenthesis");
 if (VAR_24 != 0)
  FUNC_6(VAR_3, "String without end");


 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_28 = FUNC_10(&VAR_13, VAR_20);
  if (VAR_28 & VAR_1)
   continue;
  switch (VAR_28 & 0xFF) {
  case '\n':
   break;
  default:
   FUNC_12(&VAR_13, VAR_20, VAR_28 | VAR_1);
   break;
  }
 }


 for (VAR_21 = VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_28 = FUNC_10(&VAR_13, VAR_20);
  if (VAR_28 & VAR_0) {
   FUNC_0(&VAR_15);

   VAR_18 = FUNC_2();
   VAR_22 = 0;
   for (; VAR_21 < VAR_19; VAR_21++) {
    VAR_28 = FUNC_10(&VAR_13, VAR_21);
    if (VAR_21 > VAR_20 && !(VAR_28 & (VAR_1 | VAR_0)))
     break;
    VAR_18->data[VAR_22++] = VAR_28 & 0xFF;
    if (VAR_22 == VAR_2) {
     FUNC_1(&VAR_15, VAR_18, VAR_5);
     VAR_18 = FUNC_2();
     VAR_22 = 0;
    }
   }
   if (VAR_18->data[VAR_22] != '\n')
    VAR_18->data[VAR_22++] = '\n';
   VAR_18->length = VAR_22;
   FUNC_1(&VAR_15, VAR_18, VAR_5);

   FUNC_3(&VAR_15, &VAR_16,
       "indent "
       "-Tbool "
       "-Tclass "
       "-TFILE "
       "-TLIST_ENTRY "
       "-TLIST_HEAD "
       "-TSLIST_ENTRY "
       "-TSLIST_HEAD "
       "-TSTAILQ_ENTRY "
       "-TSTAILQ_HEAD "
       "-TTAILQ_ENTRY "
       "-TTAILQ_HEAD "
       "-T__aligned "
       "-T__packed "
       "-T__unused "
       "-T__used "
       "-Tfd_set "
       "-Toss_mixerinfo "
       "-Tu_char "
       "-Tu_int "
       "-Tu_long "
       "-Tu_short "
       "-ta -st -bad -bap -nbbb -nbc -br -nbs "
       "-c41 -cd41 -cdb -ce -ci4 -cli0 -d0 -di8 -ndj -ei -nfc1 "
       "-nfcb -i8 -ip8 -l79 -lc77 -ldi0 -nlp -npcs -psl -sc "
       "-nsob -nv "
       " | "
       "sed "
       "-e 's/_HEAD [(]/_HEAD(/g' "
       "-e 's/_ENTRY [(]/_ENTRY(/g' "
       "-e 's/\t__aligned/ __aligned/g' "
       "-e 's/\t__packed/ __packed/g' "
       "-e 's/\t__unused/ __unused/g' "
       "-e 's/\t__used/ __used/g' "
       "-e 's/^#define /#define\t/g'");

   if (VAR_6 != ((void*)0)) {
    if (FUNC_5(&VAR_15, &VAR_16))
     VAR_31 = 1;
   } else {
    if (FUNC_4(&VAR_15, &VAR_16))
     VAR_31 = 1;
   }
   FUNC_7(&VAR_15);
   FUNC_7(&VAR_16);
   VAR_20 = VAR_21;
  } else if (!(VAR_28 & VAR_1)) {
   VAR_21 = VAR_20 + 1;
  }
 }
 return (VAR_31);
}
