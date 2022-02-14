
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ VAR_17 ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,char*,char*) ;
 int FUNC_14 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_15 (int ,struct stat*) ;
 int FUNC_16 (int *) ;
 char* FUNC_17 (char*,struct message*) ;
 char* VAR_18 ;
 scalar_t__ VAR_19 ;
 struct message* VAR_20 ;
 int FUNC_18 (char*) ;
 size_t VAR_21 ;
 int FUNC_19 (char*,int,int) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int,int *) ;
 scalar_t__ VAR_22 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (char*) ;
 int VAR_23 ;
 scalar_t__ FUNC_24 (struct message*,int *,int ,int *) ;
 int FUNC_25 (char*,int,char*,char*) ;
 char* VAR_24 ;
 int FUNC_26 (int *) ;
 int * FUNC_27 (char*) ;
 int FUNC_28 (char*,char*) ;
 int FUNC_29 (char*,char*) ;
 int FUNC_30 (int *) ;

void
FUNC_31(void)
{
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 FILE *VAR_32, *VAR_33, *VAR_34, *VAR_35, *VAR_36, *VAR_37;
 struct message *VAR_38;
 int VAR_39, VAR_40;
 struct stat VAR_41;
 char *VAR_42, VAR_43[VAR_14];





 if (VAR_22)
  return;




 if (VAR_17) {
  FUNC_6();
  return;
 }
 VAR_34 = FUNC_2(VAR_18, "r");
 if (VAR_34 == ((void*)0))
  goto newmail;
 (void)FUNC_12(FUNC_11(VAR_34), VAR_1);
 VAR_35 = ((void*)0);
 if (FUNC_15(FUNC_11(VAR_34), &VAR_41) >= 0 && VAR_41.st_size > VAR_19) {
  FUNC_20("New mail has arrived.\n");
  (void)FUNC_25(VAR_43, sizeof(VAR_43),
      "%s/mail.RqXXXXXXXXXX", VAR_24);
  if ((VAR_40 = FUNC_18(VAR_43)) == -1 ||
      (VAR_35 = FUNC_1(VAR_40, "w")) == ((void*)0))
   goto newmail;





  VAR_26 = VAR_41.st_size - VAR_19;
  while (VAR_26-- > 0) {
   VAR_39 = FUNC_16(VAR_34);
   if (VAR_39 == VAR_0)
    goto newmail;
   (void)FUNC_21(VAR_39, VAR_35);
  }

  (void)FUNC_0(VAR_35);
  if ((VAR_35 = FUNC_2(VAR_43, "r")) == ((void*)0))
   goto newmail;
  (void)FUNC_23(VAR_43);
 }





 VAR_29 = 0;
 VAR_28 = FUNC_27("hold") != ((void*)0);
 VAR_30 = VAR_28 ? VAR_6 : VAR_2;
 VAR_31 = VAR_2|VAR_8|VAR_3|VAR_6;
 if (FUNC_27("keepsave") != ((void*)0))
  VAR_31 &= ~VAR_8;
 for (VAR_38 = &VAR_20[0]; VAR_38 < &VAR_20[VAR_21]; VAR_38++) {
  if (VAR_38->m_flag & VAR_4) {
   VAR_38->m_flag &= ~VAR_4;
   VAR_38->m_flag |= VAR_9;
  }
  if (VAR_38->m_flag & VAR_9)
   VAR_29++;
  if ((VAR_38->m_flag & VAR_10) == 0)
   VAR_38->m_flag |= VAR_6;
  if ((VAR_38->m_flag & VAR_31) == 0)
   VAR_38->m_flag |= VAR_30;
 }
 VAR_27 = 0;
 if (VAR_16 != ((void*)0)) {
  if ((VAR_36 = FUNC_2(VAR_16, "w")) == ((void*)0))
   VAR_16 = ((void*)0);
 }
 for (VAR_39 = 0, VAR_26 = 0, VAR_38 = &VAR_20[0]; VAR_38 < &VAR_20[VAR_21]; VAR_38++) {
  if (VAR_38->m_flag & VAR_2)
   VAR_39++;
  if (VAR_38->m_flag & VAR_6)
   VAR_26++;
  if (VAR_38->m_flag & VAR_5)
   VAR_27++;
  if (VAR_16 != ((void*)0) && (VAR_38->m_flag & (VAR_7|VAR_3)) != 0) {
   char *VAR_44;

   if ((VAR_44 = FUNC_17("article-id", VAR_38)) != ((void*)0))
    FUNC_13(VAR_36, "%s\n", VAR_44);
  }
 }
 if (VAR_16 != ((void*)0))
  (void)FUNC_0(VAR_36);
 if (VAR_26 == VAR_21 && !VAR_27 && !VAR_29) {
  FUNC_20("Held %d message%s in %s\n",
   VAR_26, VAR_26 == 1 ? "" : "s", VAR_18);
  (void)FUNC_0(VAR_34);
  return;
 }
 if (VAR_39 == 0) {
  if (VAR_26 != 0) {
   FUNC_30(VAR_35);
   (void)FUNC_0(VAR_34);
   return;
  }
  goto cream;
 }
 VAR_42 = FUNC_7("&");
 VAR_25 = VAR_39;
 if (FUNC_27("append") == ((void*)0)) {
  (void)FUNC_25(VAR_43, sizeof(VAR_43),
      "%s/mail.RmXXXXXXXXXX", VAR_24);
  if ((VAR_40 = FUNC_18(VAR_43)) == -1 ||
      (VAR_33 = FUNC_1(VAR_40, "w")) == ((void*)0)) {
   FUNC_28("%s", VAR_43);
   (void)FUNC_0(VAR_34);
   return;
  }
  if ((VAR_32 = FUNC_2(VAR_43, "r")) == ((void*)0)) {
   FUNC_28("%s", VAR_43);
   (void)FUNC_23(VAR_43);
   (void)FUNC_0(VAR_33);
   (void)FUNC_0(VAR_34);
   return;
  }
  (void)FUNC_23(VAR_43);
  if ((VAR_37 = FUNC_2(VAR_42, "r")) != ((void*)0)) {
   while ((VAR_39 = FUNC_16(VAR_37)) != VAR_0)
    (void)FUNC_21(VAR_39, VAR_33);
   (void)FUNC_0(VAR_37);
  }
  if (FUNC_9(VAR_33)) {
   FUNC_29("%s", VAR_43);
   (void)FUNC_0(VAR_32);
   (void)FUNC_0(VAR_33);
   (void)FUNC_0(VAR_34);
   return;
  }
  (void)FUNC_0(VAR_33);
  if ((VAR_40 = FUNC_19(VAR_42, VAR_11 | VAR_12 | VAR_13, 0600)) >= 0)
   (void)FUNC_4(VAR_40);
  if ((VAR_33 = FUNC_2(VAR_42, "r+")) == ((void*)0)) {
   FUNC_28("%s", VAR_42);
   (void)FUNC_0(VAR_32);
   (void)FUNC_0(VAR_34);
   return;
  }
 }
 if (FUNC_27("append") != ((void*)0)) {
  if ((VAR_33 = FUNC_2(VAR_42, "a")) == ((void*)0)) {
   FUNC_28("%s", VAR_42);
   (void)FUNC_0(VAR_34);
   return;
  }
  (void)FUNC_8(FUNC_11(VAR_33), 0600);
 }
 for (VAR_38 = &VAR_20[0]; VAR_38 < &VAR_20[VAR_21]; VAR_38++)
  if (VAR_38->m_flag & VAR_2)
   if (FUNC_24(VAR_38, VAR_33, VAR_23, ((void*)0)) < 0) {
    FUNC_29("%s", VAR_42);
    (void)FUNC_0(VAR_32);
    (void)FUNC_0(VAR_33);
    (void)FUNC_0(VAR_34);
    return;
   }







 if (FUNC_27("append") == ((void*)0)) {
  FUNC_22(VAR_32);
  VAR_39 = FUNC_16(VAR_32);
  while (VAR_39 != VAR_0) {
   (void)FUNC_21(VAR_39, VAR_33);
   if (FUNC_9(VAR_33))
    break;
   VAR_39 = FUNC_16(VAR_32);
  }
  (void)FUNC_0(VAR_32);
 }
 (void)FUNC_10(VAR_33);
 FUNC_26(VAR_33);
 if (FUNC_9(VAR_33)) {
  FUNC_28("%s", VAR_42);
  (void)FUNC_0(VAR_33);
  (void)FUNC_0(VAR_34);
  return;
 }
 (void)FUNC_0(VAR_33);
 if (VAR_25 == 1)
  FUNC_20("Saved 1 message in mbox\n");
 else
  FUNC_20("Saved %d messages in mbox\n", VAR_25);






 if (VAR_26 != 0) {
  FUNC_30(VAR_35);
  (void)FUNC_0(VAR_34);
  return;
 }






cream:
 if (VAR_35 != ((void*)0)) {
  VAR_37 = FUNC_2(VAR_18, "r+");
  if (VAR_37 == ((void*)0))
   goto newmail;
  while ((VAR_39 = FUNC_16(VAR_35)) != VAR_0)
   (void)FUNC_21(VAR_39, VAR_37);
  (void)FUNC_0(VAR_35);
  FUNC_26(VAR_37);
  (void)FUNC_0(VAR_37);
  FUNC_3(VAR_18);
  (void)FUNC_0(VAR_34);
  return;
 }
 FUNC_5();
 (void)FUNC_0(VAR_34);
 return;

newmail:
 FUNC_20("Thou hast new mail.\n");
 if (VAR_34 != ((void*)0))
  (void)FUNC_0(VAR_34);
}
