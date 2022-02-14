
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; void** c_cc; } ;
struct header {int * h_bcc; int * h_cc; int * h_subject; int * h_to; } ;
typedef int sig_t ;


 int VAR_0 ;
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
 size_t VAR_14 ;
 size_t VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int * FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (int ,int ,int*) ;
 int * FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_20 ;
 scalar_t__ FUNC_7 (int ,struct termios*) ;
 int FUNC_8 (int ,int ,struct termios*) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_9 (char*) ;

int
FUNC_10(struct header *VAR_23, int VAR_24)
{
 struct termios VAR_25;
 sig_t VAR_26;
 sig_t VAR_27;
 sig_t VAR_28;
 sig_t VAR_29;
 int VAR_30;

 sig_t VAR_31;






 VAR_27 = FUNC_6(VAR_7, VAR_10);
 VAR_28 = FUNC_6(VAR_9, VAR_10);
 VAR_29 = FUNC_6(VAR_8, VAR_10);
 VAR_30 = 0;

 VAR_22 = 0;

 if (FUNC_7(FUNC_2(VAR_20), &VAR_25) < 0) {
  FUNC_9("tcgetattr(stdin)");
  return (-1);
 }
 VAR_17 = VAR_25.c_cc[VAR_14];
 VAR_18 = VAR_25.c_cc[VAR_15];

 VAR_25.c_cc[VAR_14] = VAR_16;
 VAR_25.c_cc[VAR_15] = VAR_16;
 if ((VAR_26 = FUNC_6(VAR_5, VAR_11)) == VAR_10)
  (void)FUNC_6(VAR_5, VAR_10);
 if ((VAR_31 = FUNC_6(VAR_6, VAR_11)) == VAR_10)
  (void)FUNC_6(VAR_6, VAR_10);
 if (VAR_24 & VAR_4) {

  if (!VAR_22 && VAR_23->h_to != ((void*)0))
   VAR_22++, FUNC_8(FUNC_2(VAR_20), VAR_12, &VAR_25);

  VAR_23->h_to =
   FUNC_1(FUNC_4("To: ", FUNC_0(VAR_23->h_to, 0)), VAR_4);
 }
 if (VAR_24 & VAR_3) {

  if (!VAR_22 && VAR_23->h_subject != ((void*)0))
   VAR_22++, FUNC_8(FUNC_2(VAR_20), VAR_12, &VAR_25);

  VAR_23->h_subject = FUNC_4("Subject: ", VAR_23->h_subject);
 }
 if (VAR_24 & VAR_2) {

  if (!VAR_22 && VAR_23->h_cc != ((void*)0))
   VAR_22++, FUNC_8(FUNC_2(VAR_20), VAR_12, &VAR_25);

  VAR_23->h_cc =
   FUNC_1(FUNC_4("Cc: ", FUNC_0(VAR_23->h_cc, 0)), VAR_2);
 }
 if (VAR_24 & VAR_1) {

  if (!VAR_22 && VAR_23->h_bcc != ((void*)0))
   VAR_22++, FUNC_8(FUNC_2(VAR_20), VAR_12, &VAR_25);

  VAR_23->h_bcc =
   FUNC_1(FUNC_4("Bcc: ", FUNC_0(VAR_23->h_bcc, 0)), VAR_1);
 }
out:
 (void)FUNC_6(VAR_7, VAR_27);
 (void)FUNC_6(VAR_9, VAR_28);
 (void)FUNC_6(VAR_8, VAR_29);

 VAR_25.c_cc[VAR_14] = VAR_17;
 VAR_25.c_cc[VAR_15] = VAR_18;
 if (VAR_22)
  FUNC_8(FUNC_2(VAR_20), VAR_12, &VAR_25);
 (void)FUNC_6(VAR_6, VAR_31);
 (void)FUNC_6(VAR_5, VAR_26);
 return (VAR_30);
}
