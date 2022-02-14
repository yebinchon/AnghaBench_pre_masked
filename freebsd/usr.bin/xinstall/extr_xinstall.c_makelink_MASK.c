
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
typedef int lnk ;
typedef int dst ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char const*,char const*,struct stat const*) ;
 int FUNC_5 (char const*,char const*,struct stat const*) ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,char const*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int,char*) ;
 char* VAR_9 ;
 int FUNC_8 (char*) ;
 char const* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (char const*,char*,int *,char const*,char*,int ) ;
 int VAR_15 ;
 char const* VAR_16 ;
 int * FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*,struct stat*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char const*) ;
 char* FUNC_14 (char const*) ;
 int FUNC_15 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_16(const char *VAR_17, const char *VAR_18,
    const struct stat *VAR_19)
{
 char VAR_20[VAR_6], VAR_21[VAR_6], VAR_22[VAR_6];
 struct stat VAR_23;


 if (VAR_7 & (VAR_3|VAR_4)) {
  if (FUNC_4(VAR_17, VAR_18, VAR_19) == -1) {
   if ((VAR_7 & VAR_3) || VAR_8 != VAR_0)
    FUNC_6(VAR_1, "link %s -> %s", VAR_17, VAR_18);
  } else {
   if (FUNC_11(VAR_18, &VAR_23))
    FUNC_6(VAR_1, "%s: stat", VAR_18);
   if (FUNC_0(VAR_23.st_mode)) {




    int VAR_24;
    const char *VAR_25, *VAR_26;
    char *VAR_27;
    char *VAR_28;





    VAR_24 = VAR_15;
    if (!VAR_13)
     VAR_15 = (VAR_23.st_mode & 0777);
    VAR_25 = VAR_16;
    if (!VAR_14)
     VAR_16 = ((void*)0);
    VAR_26 = VAR_10;
    if (!VAR_12)
     VAR_10 = ((void*)0);
    VAR_27 = VAR_9;
    if (!VAR_11)
     VAR_9 = ((void*)0);
    VAR_28 = FUNC_2(VAR_17);
    FUNC_9(VAR_18, "file", ((void*)0), ((void*)0),
        VAR_28, VAR_23.st_size);
    FUNC_8(VAR_28);
    VAR_15 = VAR_24;
    VAR_16 = VAR_25;
    VAR_10 = VAR_26;
    VAR_9 = VAR_27;
   }
   return;
  }
 }


 if (VAR_7 & VAR_2) {

  if (FUNC_10(VAR_17, VAR_20) == ((void*)0))
   FUNC_6(VAR_1, "%s: realpath", VAR_17);
  FUNC_5(VAR_20, VAR_18, VAR_19);

  FUNC_9(VAR_18, "link", ((void*)0), VAR_20, ((void*)0), 0);
  return;
 }

 if (VAR_7 & VAR_5) {
  char *VAR_29, *VAR_30, *VAR_31, *VAR_32, *VAR_33, *VAR_34;

  if (*VAR_17 != '/') {

   FUNC_5(VAR_17, VAR_18, VAR_19);

   FUNC_9(VAR_18, "link", ((void*)0), VAR_17, ((void*)0), 0);
   return;
  }


  if (FUNC_10(VAR_17, VAR_20) == ((void*)0))
   FUNC_6(VAR_1, "%s: realpath", VAR_17);





  VAR_29 = FUNC_14(VAR_18);
  if (VAR_29 == ((void*)0))
   FUNC_6(VAR_1, "%s: strdup", VAR_18);
  VAR_30 = FUNC_3(VAR_29);
  if (FUNC_10(VAR_30, VAR_21) == ((void*)0))
   FUNC_6(VAR_1, "%s: realpath", VAR_30);

  if (FUNC_12(VAR_21, "/") != 0) {
   if (FUNC_15(VAR_21, "/", sizeof(VAR_21)) > sizeof(VAR_21))
    FUNC_7(1, "resolved pathname too long");
  }
  FUNC_13(VAR_29, VAR_18);
  VAR_30 = FUNC_1(VAR_29);
  if (FUNC_15(VAR_21, VAR_30, sizeof(VAR_21)) > sizeof(VAR_21))
   FUNC_7(1, "resolved pathname too long");
  FUNC_8(VAR_29);


  VAR_33 = VAR_32 = ((void*)0);
  for (VAR_34 = VAR_20, VAR_31 = VAR_21; *VAR_34 == *VAR_31; VAR_33 = VAR_34, VAR_32 = VAR_31, VAR_34++, VAR_31++)
   continue;
  if ((VAR_33 != ((void*)0) && *VAR_33 != '/') || (VAR_32 != ((void*)0) && *VAR_32 != '/'))
   VAR_34--, VAR_31--;
  while (*VAR_34 != '/')
   VAR_34--, VAR_31--;


  for (++VAR_31, VAR_22[0] = '\0'; *VAR_31; VAR_31++)
   if (*VAR_31 == '/')
    (void)FUNC_15(VAR_22, "../", sizeof(VAR_22));

  (void)FUNC_15(VAR_22, ++VAR_34, sizeof(VAR_22));

  FUNC_5(VAR_22, VAR_18, VAR_19);

  FUNC_9(VAR_18, "link", ((void*)0), VAR_22, ((void*)0), 0);
  return;
 }





 FUNC_5(VAR_17, VAR_18, VAR_19);

 FUNC_9(VAR_18, "link", ((void*)0), VAR_17, ((void*)0), 0);
}
