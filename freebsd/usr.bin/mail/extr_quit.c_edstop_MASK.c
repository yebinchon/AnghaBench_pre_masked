
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tempname ;
struct stat {scalar_t__ st_size; } ;
struct message {int m_flag; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char*,struct message*) ;
 int FUNC_9 () ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 struct message* VAR_11 ;
 int FUNC_10 (char*) ;
 size_t VAR_12 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int,int *) ;
 scalar_t__ VAR_13 ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (struct message*,int *,int *,int *) ;
 int FUNC_17 (char*,int,char*,char*) ;
 scalar_t__ FUNC_18 (char*,struct stat*) ;
 int * VAR_14 ;
 char* VAR_15 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,char*) ;

void
FUNC_22(void)
{
 int VAR_16, VAR_17;
 struct message *VAR_18;
 FILE *VAR_19, *VAR_20, *VAR_21;
 struct stat VAR_22;
 char VAR_23[VAR_6];

 if (VAR_13)
  return;
 FUNC_9();
 if (VAR_8 != ((void*)0)) {
  if ((VAR_21 = FUNC_2(VAR_8, "w")) == ((void*)0))
   VAR_8 = ((void*)0);
 }
 for (VAR_18 = &VAR_11[0], VAR_16 = 0; VAR_18 < &VAR_11[VAR_12]; VAR_18++) {
  if (VAR_18->m_flag & VAR_2) {
   VAR_18->m_flag &= ~VAR_2;
   VAR_18->m_flag |= VAR_5;
  }
  if (VAR_18->m_flag & (VAR_3|VAR_1|VAR_5))
   VAR_16++;
  if (VAR_8 != ((void*)0) && (VAR_18->m_flag & (VAR_4|VAR_1)) != 0) {
   char *VAR_24;

   if ((VAR_24 = FUNC_8("article-id", VAR_18)) != ((void*)0))
    FUNC_5(VAR_21, "%s\n", VAR_24);
  }
 }
 if (VAR_8 != ((void*)0))
  (void)FUNC_0(VAR_21);
 if (!VAR_16 || VAR_8 != ((void*)0))
  goto done;
 VAR_20 = ((void*)0);
 if (FUNC_18(VAR_9, &VAR_22) >= 0 && VAR_22.st_size > VAR_10) {
  int VAR_25;

  (void)FUNC_17(VAR_23, sizeof(VAR_23),
      "%s/mbox.XXXXXXXXXX", VAR_15);
  if ((VAR_25 = FUNC_10(VAR_23)) == -1 ||
      (VAR_19 = FUNC_1(VAR_25, "w")) == ((void*)0)) {
   FUNC_20("%s", VAR_23);
   FUNC_13();
   FUNC_14(0);
  }
  if ((VAR_20 = FUNC_2(VAR_9, "r")) == ((void*)0)) {
   FUNC_20("%s", VAR_9);
   (void)FUNC_0(VAR_19);
   (void)FUNC_15(VAR_23);
   FUNC_13();
   FUNC_14(0);
  }
  (void)FUNC_6(VAR_20, VAR_10, VAR_7);
  while ((VAR_17 = FUNC_7(VAR_20)) != VAR_0)
   (void)FUNC_12(VAR_17, VAR_19);
  (void)FUNC_0(VAR_20);
  (void)FUNC_0(VAR_19);
  if ((VAR_20 = FUNC_2(VAR_23, "r")) == ((void*)0)) {
   FUNC_20("%s", VAR_23);
   (void)FUNC_15(VAR_23);
   FUNC_13();
   FUNC_14(0);
  }
  (void)FUNC_15(VAR_23);
 }
 FUNC_11("\"%s\" ", VAR_9);
 (void)FUNC_4(VAR_14);
 if ((VAR_19 = FUNC_2(VAR_9, "r+")) == ((void*)0)) {
  FUNC_20("%s", VAR_9);
  FUNC_13();
  FUNC_14(0);
 }
 FUNC_19(VAR_19);
 VAR_17 = 0;
 for (VAR_18 = &VAR_11[0]; VAR_18 < &VAR_11[VAR_12]; VAR_18++) {
  if ((VAR_18->m_flag & VAR_1) != 0)
   continue;
  VAR_17++;
  if (FUNC_16(VAR_18, VAR_19, ((void*)0), ((void*)0)) < 0) {
   FUNC_21("%s", VAR_9);
   FUNC_13();
   FUNC_14(0);
  }
 }
 VAR_16 = (VAR_17 == 0 && VAR_20 == ((void*)0));
 if (VAR_20 != ((void*)0)) {
  while ((VAR_17 = FUNC_7(VAR_20)) != VAR_0)
   (void)FUNC_12(VAR_17, VAR_19);
  (void)FUNC_0(VAR_20);
 }
 (void)FUNC_4(VAR_19);
 if (FUNC_3(VAR_19)) {
  FUNC_20("%s", VAR_9);
  FUNC_13();
  FUNC_14(0);
 }
 (void)FUNC_0(VAR_19);
 if (VAR_16) {
  (void)FUNC_15(VAR_9);
  FUNC_11("removed\n");
 } else
  FUNC_11("complete\n");
 (void)FUNC_4(VAR_14);

done:
 FUNC_13();
}
