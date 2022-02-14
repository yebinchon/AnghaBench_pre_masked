
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_name {char* path; scalar_t__ exists; } ;
typedef scalar_t__ off_t ;
typedef int names ;
typedef int LINENUM ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* FUNC_0 (struct file_name*,int) ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 void* FUNC_1 (char*,scalar_t__*,int) ;
 char** VAR_14 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (struct file_name*,int ,int) ;
 int VAR_15 ;
 int FUNC_8 (struct file_name*,char*) ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_23 ;
 char* FUNC_10 (struct file_name*,int) ;
 char* VAR_24 ;
 char* VAR_25 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int VAR_26 ;
 int FUNC_12 (char*,char*,int) ;
 char* FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char**) ;
 char* FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(void)
{
 off_t VAR_27 = 0, VAR_28;
 off_t VAR_29 = -1;
 LINENUM VAR_30 = -1;
 bool VAR_31 = 0, VAR_32 = 0;
 bool VAR_33 = 0, VAR_34 = 0;
 char *VAR_35, *VAR_36;
 int VAR_37, VAR_38;
 struct file_name VAR_39[VAR_3];
 int VAR_40 = 0;

 FUNC_7(VAR_39, 0, sizeof(VAR_39));
 VAR_15 = 0;
 FUNC_3(VAR_22, VAR_16, VAR_8);
 VAR_19 = VAR_17 - 1;
 for (;;) {
  VAR_28 = VAR_27;
  VAR_31 = VAR_32;
  VAR_33 = VAR_34;
  VAR_27 = FUNC_4(VAR_22);
  VAR_37 = 0;
  VAR_19++;
  if (FUNC_9(0) == 0) {
   if (VAR_29 >= 0) {

    VAR_21 = VAR_29;
    VAR_20 = VAR_30;
    VAR_38 = VAR_1;
    goto scan_exit;
   } else {
    VAR_21 = VAR_27;
    VAR_20 = VAR_19;
    VAR_38 = 0;
    goto scan_exit;
   }
  }
  for (VAR_35 = VAR_12; *VAR_35 == ' ' || *VAR_35 == '\t' || *VAR_35 == 'X'; VAR_35++) {
   if (*VAR_35 == '\t')
    VAR_37 += 8 - (VAR_37 % 8);
   else
    VAR_37++;
  }
  for (VAR_36 = VAR_35; FUNC_5((unsigned char)*VAR_36) || *VAR_36 == ','; VAR_36++)
   ;
  VAR_32 = (FUNC_5((unsigned char)*VAR_35) &&
      (*VAR_36 == 'd' || *VAR_36 == 'c' || *VAR_36 == 'a'));
  if (VAR_29 < 0 && VAR_32) {
   VAR_29 = VAR_27;
   VAR_30 = VAR_19;
   VAR_18 = VAR_37;
  }
  if (!VAR_33 && FUNC_12(VAR_35, "*** ", 4))
   VAR_39[VAR_7].path = FUNC_1(VAR_35 + 4,
       &VAR_39[VAR_7].exists, VAR_26);
  else if (FUNC_12(VAR_35, "--- ", 4)) {
   size_t VAR_41 = 4;
   if (VAR_40 && VAR_26 == 957 &&
       FUNC_12(VAR_35, "--- a/", 6))
    VAR_41 = 6;
   VAR_39[VAR_5].path = FUNC_1(VAR_35 + VAR_41,
       &VAR_39[VAR_5].exists, VAR_26);
  } else if (FUNC_12(VAR_35, "+++ ", 4)) {

   size_t VAR_42 = 4;
   if (VAR_40 && VAR_26 == 957 &&
       FUNC_12(VAR_35, "+++ b/", 6))
    VAR_42 = 6;
   VAR_39[VAR_7].path = FUNC_1(VAR_35 + VAR_42,
       &VAR_39[VAR_7].exists, VAR_26);
  } else if (FUNC_12(VAR_35, "Index:", 6))
   VAR_39[VAR_2].path = FUNC_1(VAR_35 + 6,
       &VAR_39[VAR_2].exists, VAR_26);
  else if (FUNC_12(VAR_35, "Prereq:", 7)) {
   for (VAR_36 = VAR_35 + 7; FUNC_6((unsigned char)*VAR_36); VAR_36++)
    ;
   VAR_24 = FUNC_15(VAR_36);
   for (VAR_36 = VAR_24;
        *VAR_36 && !FUNC_6((unsigned char)*VAR_36); VAR_36++)
    ;
   *VAR_36 = '\0';
   if (*VAR_24 == '\0') {
    FUNC_2(VAR_24);
    VAR_24 = ((void*)0);
   }
  } else if (FUNC_12(VAR_35, "diff --git a/", 13)) {

   VAR_40 = 1;
  } else if (FUNC_12(VAR_35, "==== ", 5)) {

   if ((VAR_36 = FUNC_13(VAR_35 + 5, " - ")) != ((void*)0))
    FUNC_8(&VAR_39[VAR_5], VAR_36 + 3);
   FUNC_8(&VAR_39[VAR_7], VAR_35 + 5);
  }
  if ((!VAR_13 || VAR_13 == VAR_1) &&
      VAR_29 >= 0 &&
      FUNC_11(VAR_35, ".\n")) {
   VAR_18 = VAR_37;
   VAR_21 = VAR_29;
   VAR_20 = VAR_30;
   VAR_38 = VAR_1;
   goto scan_exit;
  }
  if ((!VAR_13 || VAR_13 == VAR_9) && FUNC_12(VAR_35, "@@ -", 4)) {
   if (FUNC_12(VAR_35 + 4, "0,0", 3))
    VAR_15 = 1;
   VAR_18 = VAR_37;
   VAR_21 = VAR_27;
   VAR_20 = VAR_19;
   VAR_38 = VAR_9;
   goto scan_exit;
  }
  VAR_34 = FUNC_12(VAR_35, "********", 8);
  if ((!VAR_13 || VAR_13 == VAR_0) && VAR_33 &&
      FUNC_12(VAR_35, "*** ", 4)) {
   if (FUNC_14(VAR_35 + 4, &VAR_35) == 0)
    VAR_15 = 1;




   while (*VAR_35 && *VAR_35 != '\n')
    VAR_35++;
   VAR_18 = VAR_37;
   VAR_21 = VAR_28;
   VAR_20 = VAR_19 - 1;
   VAR_38 = (*(VAR_35 - 1) == '*' ? VAR_4 : VAR_0);
   goto scan_exit;
  }
  if ((!VAR_13 || VAR_13 == VAR_6) &&
      VAR_31 &&
      (FUNC_12(VAR_35, "< ", 2) || FUNC_12(VAR_35, "> ", 2))) {
   VAR_21 = VAR_28;
   VAR_20 = VAR_19 - 1;
   VAR_18 = VAR_37;
   VAR_38 = VAR_6;
   goto scan_exit;
  }
 }
scan_exit:
 if (VAR_38 == VAR_9) {

  struct file_name VAR_43 = VAR_39[VAR_7];
  VAR_39[VAR_7] = VAR_39[VAR_5];
  VAR_39[VAR_5] = VAR_43;
 }


 FUNC_2(VAR_25);
 VAR_25 = ((void*)0);

 if (VAR_38 != 0) {







  if (VAR_39[VAR_7].path != ((void*)0))
   VAR_25 = FUNC_15(VAR_39[VAR_7].path);
  else if (VAR_39[VAR_7].exists)
   VAR_25 = FUNC_15(VAR_10);
 }
 if (VAR_14[0] == ((void*)0)) {
  if (VAR_23)
   VAR_14[0] = FUNC_10(VAR_39, VAR_15);
  else {

   if (VAR_39[VAR_7].path != ((void*)0) ||
       VAR_39[VAR_5].path != ((void*)0)) {
    FUNC_2(VAR_39[VAR_2].path);
    VAR_39[VAR_2].path = ((void*)0);
   }
   VAR_14[0] = FUNC_0(VAR_39, VAR_15);
  }
 }

 FUNC_2(VAR_11);
 VAR_11 = ((void*)0);
 if (VAR_14[0] != ((void*)0))
  VAR_11 = FUNC_15(VAR_14[0]);
 else if (!VAR_15) {





  if (VAR_23)
   VAR_11 = FUNC_10(VAR_39, 1);
  else
   VAR_11 = FUNC_0(VAR_39, 1);
 }
 FUNC_2(VAR_39[VAR_7].path);
 FUNC_2(VAR_39[VAR_5].path);
 FUNC_2(VAR_39[VAR_2].path);
 return VAR_38;
}
