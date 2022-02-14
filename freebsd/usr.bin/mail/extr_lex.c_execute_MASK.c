
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmd {int c_argtype; char* c_name; int (* c_func ) (char*) ;int c_minargs; int c_maxargs; int c_msgflag; int c_msgmask; } ;
typedef int arglist ;
struct TYPE_3__ {int m_flag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_0 (int,char*) ;
 char FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char**,int) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 struct cmd* FUNC_5 (char*) ;
 scalar_t__ VAR_14 ;
 TYPE_1__* VAR_15 ;
 char* VAR_16 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_20 ;
 int * FUNC_8 (char*,char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char**) ;
 int FUNC_13 (char**) ;
 int FUNC_14 (int*) ;
 int FUNC_15 () ;
 int * FUNC_16 (char*) ;

int
FUNC_17(char VAR_21[], int VAR_22)
{
 char VAR_23[VAR_4];
 char *VAR_24[VAR_6];
 const struct cmd *VAR_25;
 char *VAR_26, *VAR_27;
 int VAR_28, VAR_29[2];
 int VAR_30 = 1;
 for (VAR_26 = VAR_21; FUNC_4((unsigned char)*VAR_26); VAR_26++)
  ;
 if (*VAR_26 == '!') {
  if (VAR_20) {
   FUNC_6("Can't \"!\" while sourcing\n");
   goto out;
  }
  FUNC_7(VAR_26+1);
  return (0);
 }
 VAR_27 = VAR_23;
 while (*VAR_26 != '\0' && FUNC_8(" \t0123456789$^.:/-+*'\"", *VAR_26) == ((void*)0))
  *VAR_27++ = *VAR_26++;
 *VAR_27 = '\0';
 if (VAR_20 && *VAR_23 == '\0')
  return (0);
 VAR_25 = FUNC_5(VAR_23);
 if (VAR_25 == ((void*)0)) {
  FUNC_6("Unknown command: \"%s\"\n", VAR_23);
  goto out;
 }






 if ((VAR_25->c_argtype & VAR_2) == 0)
  if ((VAR_12 == VAR_0 && !VAR_17) || (VAR_12 == VAR_1 && VAR_17))
   return (0);
 if (!VAR_17 && (VAR_25->c_argtype & VAR_5) == 0) {
  FUNC_6("May not execute \"%s\" while sending\n",
      VAR_25->c_name);
  goto out;
 }
 if (VAR_20 && VAR_25->c_argtype & VAR_3) {
  FUNC_6("May not execute \"%s\" while sourcing\n",
      VAR_25->c_name);
  goto out;
 }
 if (VAR_18 && VAR_25->c_argtype & VAR_11) {
  FUNC_6("May not execute \"%s\" -- message file is read only\n",
     VAR_25->c_name);
  goto out;
 }
 if (VAR_22 && VAR_25->c_argtype & VAR_9) {
  FUNC_6("Cannot recursively invoke \"%s\"\n", VAR_25->c_name);
  goto out;
 }
 switch (VAR_25->c_argtype & ~(VAR_2|VAR_8|VAR_3|VAR_5|VAR_10|VAR_11|VAR_9)) {
 case 132:




  if (VAR_16 == 0) {
   FUNC_6("Illegal use of \"message list\"\n");
   break;
  }
  if ((VAR_28 = FUNC_2(VAR_26, VAR_16, VAR_25->c_msgflag)) < 0)
   break;
  if (VAR_28 == 0) {
   *VAR_16 = FUNC_1(VAR_25->c_msgflag, VAR_25->c_msgmask);
   VAR_16[1] = 0;
  }
  if (*VAR_16 == 0) {
   FUNC_6("No applicable messages\n");
   break;
  }
  VAR_30 = (*VAR_25->c_func)(VAR_16);
  break;

 case 131:




  if (VAR_16 == 0) {
   FUNC_6("Illegal use of \"message list\"\n");
   break;
  }
  if (FUNC_2(VAR_26, VAR_16, VAR_25->c_msgflag) < 0)
   break;
  VAR_30 = (*VAR_25->c_func)(VAR_16);
  break;

 case 128:




  while (FUNC_4((unsigned char)*VAR_26))
   VAR_26++;
  VAR_30 = (*VAR_25->c_func)(VAR_26);
  break;

 case 129:



  if ((VAR_28 = FUNC_3(VAR_26, VAR_24,
      sizeof(VAR_24) / sizeof(*VAR_24))) < 0)
   break;
  if (VAR_28 < VAR_25->c_minargs) {
   FUNC_6("%s requires at least %d arg(s)\n",
       VAR_25->c_name, VAR_25->c_minargs);
   break;
  }
  if (VAR_28 > VAR_25->c_maxargs) {
   FUNC_6("%s takes no more than %d arg(s)\n",
       VAR_25->c_name, VAR_25->c_maxargs);
   break;
  }
  VAR_30 = (*VAR_25->c_func)(VAR_24);
  break;

 case 130:




  VAR_30 = (*VAR_25->c_func)(0);
  break;

 default:
  FUNC_0(1, "Unknown argtype");
 }

out:




 if (VAR_30) {
  if (VAR_30 < 0)
   return (1);
  if (VAR_14)
   return (1);
  if (VAR_20)
   FUNC_15();
  return (0);
 }
 if (VAR_25 == ((void*)0))
  return (0);
 if (FUNC_16("autoprint") != ((void*)0) && VAR_25->c_argtype & VAR_8)
  if ((VAR_13->m_flag & VAR_7) == 0) {
   VAR_29[0] = VAR_13 - &VAR_15[0] + 1;
   VAR_29[1] = 0;
   FUNC_14(VAR_29);
  }
 if (!VAR_20 && (VAR_25->c_argtype & VAR_10) == 0)
  VAR_19 = 1;
 return (0);
}
