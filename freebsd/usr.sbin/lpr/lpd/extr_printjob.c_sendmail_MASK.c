
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct printer {char* printer; } ;
typedef int FILE ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct printer*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,char const*,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,char*) ;
 int FUNC_10 (int *) ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int FUNC_11 (int*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,struct stat*) ;
 int VAR_10 ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (int ,char*,char*,...) ;
 int VAR_11 ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(struct printer *VAR_12, char *VAR_13, int VAR_14)
{
 register int VAR_15;
 int VAR_16[2], VAR_17;
 register const char *VAR_18;
 struct stat VAR_19;
 FILE *VAR_20;

 FUNC_11(VAR_16);
 if ((VAR_17 = FUNC_4(VAR_12, VAR_0)) == 0) {
  FUNC_5(VAR_16[0], VAR_4);
  FUNC_3();
  FUNC_2(3);
  if ((VAR_18 = FUNC_15(VAR_6, '/')) != ((void*)0))
   VAR_18++;
  else
   VAR_18 = VAR_6;
  FUNC_6(VAR_6, VAR_18, "-t", (char *)0);
  FUNC_0(0);
 } else if (VAR_17 > 0) {
  FUNC_5(VAR_16[1], VAR_5);
  FUNC_12("To: %s@%s\n", VAR_13, VAR_9);
  FUNC_12("Subject: %s printer job \"%s\"\n", VAR_12->printer,
   *VAR_7 ? VAR_7 : "<unknown>");
  FUNC_12("Reply-To: root@%s\n\n", VAR_8);
  FUNC_12("Your printer job ");
  if (*VAR_7)
   FUNC_12("(%s) ", VAR_7);

  switch (VAR_14) {
  case 128:
   VAR_18 = "OK";
   FUNC_12("\ncompleted successfully\n");
   break;
  default:
  case 131:
   VAR_18 = "FATALERR";
   FUNC_12("\ncould not be printed\n");
   break;
  case 129:
   VAR_18 = "NOACCT";
   FUNC_12("\ncould not be printed without an account on %s\n",
       VAR_8);
   break;
  case 130:
   VAR_18 = "FILTERERR";
   if (FUNC_14(VAR_11, &VAR_19) < 0 || VAR_19.st_size == 0
       || (VAR_20 = FUNC_9(VAR_11, "r")) == ((void*)0)) {
    FUNC_12("\nhad some errors and may not have printed\n");
    break;
   }
   FUNC_12("\nhad the following errors and may not have printed:\n");
   while ((VAR_15 = FUNC_10(VAR_20)) != VAR_1)
    FUNC_13(VAR_15);
   (void) FUNC_7(VAR_20);
   break;
  case 132:
   VAR_18 = "ACCESS";
   FUNC_12("\nwas not printed because it was not linked to the original file\n");
  }
  FUNC_8(VAR_10);
  (void) FUNC_1(VAR_5);
 } else {
  FUNC_16(VAR_3, "unable to send mail to %s: %m", VAR_13);
  return;
 }
 (void) FUNC_1(VAR_16[0]);
 (void) FUNC_1(VAR_16[1]);
 FUNC_17(((void*)0));
 FUNC_16(VAR_2, "mail sent to user %s about job %s on printer %s (%s)",
     VAR_13, *VAR_7 ? VAR_7 : "<unknown>", VAR_12->printer, VAR_18);
}
