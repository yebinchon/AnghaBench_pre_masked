
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpf ;
struct entry {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char**,char*,char*,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct entry*) ;
 struct entry* FUNC_8 (char*,uintptr_t,uintptr_t,uintptr_t) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (float) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 () ;
 struct entry* FUNC_15 (uintptr_t) ;
 int FUNC_16 (struct entry*) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (int,char**,char*) ;
 scalar_t__ FUNC_19 (char) ;
 int FUNC_20 (char*) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,int,char*,char*,char*,...) ;
 int FUNC_23 (char*,char*,void**,char*,void**,void**) ;
 scalar_t__ FUNC_24 (char*) ;
 int VAR_10 ;
 int FUNC_25 (char*) ;

int
FUNC_26(int VAR_11, char *VAR_12[])
{
 char VAR_13[VAR_3], VAR_14[VAR_1];
 char *VAR_15, *VAR_16, *VAR_17;
 char VAR_18[VAR_4 * 2 + 50];
 float VAR_19;
 char *VAR_20, *VAR_21, *VAR_22, *VAR_23;
 struct entry *VAR_24;
 FILE *VAR_25, *VAR_26;
 void *VAR_27, *VAR_28, *VAR_29;
 uintptr_t VAR_30, VAR_31, VAR_32;
 int VAR_33, VAR_34;

 VAR_21 = VAR_12[0];
 VAR_23 = ((void*)0);
 VAR_20 = ((void*)0);
 VAR_22 = ((void*)0);
 VAR_34 = 0;
 VAR_19 = 0.5;
 while ((VAR_33 = FUNC_18(VAR_11, VAR_12, "ahl:k:")) != -1)
  switch(VAR_33) {
  case 'a':
   VAR_34 = 1;
   break;
  case 'k':
   VAR_22 = VAR_8;
   break;
  case 'l':
   VAR_19 = (float)FUNC_4(VAR_8);
   break;
  case 'h':
  case '?':
  default:
   FUNC_25(VAR_21);
  }
 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;
 if (VAR_11 != 2)
  FUNC_25(VAR_21);
 VAR_23 = VAR_12[0];
 VAR_20 = VAR_12[1];

 if (FUNC_1(VAR_20, VAR_5 | VAR_2) == -1)
  FUNC_0(VAR_21, "%s: Impossible to locate the binary file\n",
      VAR_21);
 if (FUNC_1(VAR_23, VAR_5 | VAR_2) == -1)
  FUNC_0(VAR_21, "%s: Impossible to locate the pmcstat file\n",
      VAR_21);
 if (VAR_22 != ((void*)0) && FUNC_1(VAR_22, VAR_5 | VAR_2) == -1)
  FUNC_0(VAR_21, "%s: Impossible to locate the kernel file\n",
      VAR_21);

 FUNC_5(VAR_18, sizeof(VAR_18));
 VAR_17 = FUNC_17("TMPDIR");
 if (VAR_17 == ((void*)0)) {
  FUNC_3(&VAR_15, "%s/%d", VAR_7, VAR_6);
  FUNC_3(&VAR_16, "%s/%d", VAR_7, VAR_6);
 } else {
  FUNC_3(&VAR_15, "%s/%d", VAR_17, VAR_6);
  FUNC_3(&VAR_16, "%s/%d", VAR_17, VAR_6);
 }
 if (VAR_16 == ((void*)0) || VAR_15 == ((void*)0))
  FUNC_0(VAR_21, "%s: Cannot create tempfile templates\n",
      VAR_21);
 if (FUNC_20(VAR_16) == -1)
  FUNC_0(VAR_21, "%s: Impossible to create the tmp file\n",
      VAR_21);
 if (VAR_22 != ((void*)0))
  FUNC_22(VAR_18, sizeof(VAR_18), "pmcstat -k %s -R %s -m %s",
      VAR_22, VAR_23, VAR_16);
 else
  FUNC_22(VAR_18, sizeof(VAR_18), "pmcstat -R %s -m %s", VAR_23,
      VAR_16);
 if (FUNC_24(VAR_18) != 0)
  FUNC_0(VAR_21, "%s: Impossible to create the tmp file\n",
      VAR_21);

 VAR_25 = FUNC_11(VAR_16, "r");
 if (VAR_25 == ((void*)0))
  FUNC_0(VAR_21, "%s: Impossible to open the map file\n",
      VAR_21);






 while (FUNC_10(VAR_13, VAR_3, VAR_25) != ((void*)0)) {
  if (FUNC_19(VAR_13[0]))
   continue;
  if (FUNC_23(VAR_13, "%p %s %p %p\n", &VAR_27, VAR_14,
      &VAR_28, &VAR_29) != 4)
   FUNC_0(((void*)0),
       "%s: Invalid scan of function in the map file\n",
       VAR_21);
  VAR_31 = (uintptr_t)VAR_28;
  VAR_32 = (uintptr_t)VAR_29;
  VAR_30 = (uintptr_t)VAR_27;
  VAR_10++;
  VAR_24 = FUNC_15(VAR_30);
  if (VAR_24 != ((void*)0)) {
   FUNC_7(VAR_24);
   continue;
  }
  VAR_24 = FUNC_8(VAR_14, VAR_30, VAR_31, VAR_32);
  if (VAR_24 == ((void*)0))
   FUNC_0(VAR_21,
       "%s: Impossible to create a new object\n", VAR_21);
  FUNC_16(VAR_24);
 }
 if (FUNC_9(VAR_25) == VAR_0)
  FUNC_0(VAR_21, "%s: Impossible to close the filedesc\n",
      VAR_21);
 if (FUNC_21(VAR_16) == -1)
                FUNC_0(VAR_21, "%s: Impossible to remove the tmpfile\n",
                    VAR_21);





 if (FUNC_14() == -1)
  FUNC_0(VAR_21, "%s: Impossible to generate an analysis\n",
      VAR_21);
 FUNC_12(VAR_19);
 if (FUNC_13(VAR_20, VAR_15, VAR_34) == -1)
  FUNC_0(VAR_21, "%s: Impossible to create the tmp file\n",
      VAR_21);

 VAR_26 = FUNC_11(VAR_15, "r");
 if (VAR_26 == ((void*)0))
  FUNC_0(VAR_21, "%s: Impossible to open the binary file\n",
      VAR_21);

 if (VAR_34 != 0)
  FUNC_2(VAR_26);
 else if (FUNC_6(VAR_26) == -1)
  FUNC_0(((void*)0), "%s: Invalid format for the C file\n", VAR_21);
 if (FUNC_9(VAR_26) == VAR_0)
                FUNC_0(VAR_21, "%s: Impossible to close the filedesc\n",
                    VAR_21);
 if (FUNC_21(VAR_15) == -1)
                FUNC_0(VAR_21, "%s: Impossible to remove the tmpfile\n",
                    VAR_21);
 return (0);
}
