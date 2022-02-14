
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {long m_size; } ;
struct ignoretab {int dummy; } ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (int *) ;
 struct ignoretab* VAR_2 ;
 scalar_t__ FUNC_6 (char*,struct ignoretab*) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (int,int *) ;
 int * FUNC_9 (struct message*) ;
 int FUNC_10 (struct message*,int *,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;

int
FUNC_13(struct message *VAR_3, FILE *VAR_4, struct ignoretab *VAR_5,
 char *VAR_6)
{
 long VAR_7;
 FILE *VAR_8;
 char *VAR_9, *VAR_10, VAR_11[VAR_1];
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18, VAR_19;




 if (VAR_6 != ((void*)0)) {
  VAR_10 = 0;
  for (VAR_9 = VAR_6; *VAR_9 != '\0'; VAR_9++)
   if (*VAR_9 != ' ' && *VAR_9 != '\t')
    VAR_10 = VAR_9;
  VAR_19 = VAR_10 == ((void*)0) ? 0 : VAR_10 - VAR_6 + 1;
 }
 VAR_8 = FUNC_9(VAR_3);
 VAR_7 = VAR_3->m_size;
 VAR_12 = 1;
 VAR_15 = VAR_5 == 0 || !FUNC_6("status", VAR_5);
 VAR_13 = 0;
 VAR_16 = 1;



 while (VAR_7 > 0 && VAR_12) {
  if (FUNC_1(VAR_11, sizeof(VAR_11), VAR_8) == ((void*)0))
   break;
  VAR_7 -= VAR_18 = FUNC_12(VAR_11);
  if (VAR_16) {




   VAR_16 = 0;
   VAR_14 = VAR_5 == VAR_2;
  } else if (VAR_11[0] == '\n') {






   if (VAR_15) {
    FUNC_10(VAR_3, VAR_4, VAR_6);
    VAR_15 = 0;
   }
   VAR_12 = 0;
   VAR_14 = VAR_5 == VAR_2;
  } else if (VAR_13 && (VAR_11[0] == ' ' || VAR_11[0] == '\t')) {






  } else {



   for (VAR_9 = VAR_11; (VAR_17 = *VAR_9++) != '\0' && VAR_17 != ':' &&
       !FUNC_7((unsigned char)VAR_17);)
    ;
   VAR_10 = --VAR_9;
   while (FUNC_7((unsigned char)*VAR_9++))
    ;
   if (VAR_9[-1] != ':') {





    if (VAR_15) {
     FUNC_10(VAR_3, VAR_4, VAR_6);
     VAR_15 = 0;
    }
    if (VAR_5 != VAR_2)

     (void)FUNC_8('\n', VAR_4);
    VAR_12 = 0;
    VAR_14 = 0;
   } else {




    *VAR_10 = '\0';
    if (VAR_5 && FUNC_6(VAR_11, VAR_5))
     VAR_14 = 1;
    else if ((VAR_11[0] == 's' || VAR_11[0] == 'S') &&
      FUNC_11(VAR_11, "status") == 0) {




     if (VAR_15) {
      FUNC_10(VAR_3, VAR_4, VAR_6);
      VAR_15 = 0;
     }
     VAR_14 = 1;
    } else {
     VAR_14 = 0;
     *VAR_10 = VAR_17;
    }
    VAR_13 = 1;
   }
  }
  if (!VAR_14) {




   if (VAR_6 != ((void*)0)) {
    if (VAR_18 > 1)
     FUNC_2(VAR_6, VAR_4);
    else
     (void)FUNC_4(VAR_6, sizeof(*VAR_6),
         VAR_19, VAR_4);
   }
   (void)FUNC_4(VAR_11, sizeof(*VAR_11), VAR_18, VAR_4);
   if (FUNC_0(VAR_4))
    return (-1);
  }
 }



 if (VAR_5 == VAR_2)
  VAR_7--;
 if (VAR_6 != ((void*)0))
  while (VAR_7 > 0) {
   if (FUNC_1(VAR_11, sizeof(VAR_11), VAR_8) == ((void*)0)) {
    VAR_17 = 0;
    break;
   }
   VAR_7 -= VAR_17 = FUNC_12(VAR_11);




   if (VAR_17 > 1)
    FUNC_2(VAR_6, VAR_4);
   else
    (void)FUNC_4(VAR_6, sizeof(*VAR_6),
        VAR_19, VAR_4);
   (void)FUNC_4(VAR_11, sizeof(*VAR_11), VAR_17, VAR_4);
   if (FUNC_0(VAR_4))
    return (-1);
  }
 else
  while (VAR_7 > 0) {
   VAR_17 = VAR_7 < VAR_1 ? VAR_7 : VAR_1;
   if ((VAR_17 = FUNC_3(VAR_11, sizeof(*VAR_11), VAR_17, VAR_8)) <= 0)
    break;
   VAR_7 -= VAR_17;
   if (FUNC_4(VAR_11, sizeof(*VAR_11), VAR_17, VAR_4) != VAR_17)
    return (-1);
  }
 if (VAR_5 == VAR_2 && VAR_17 > 0 && VAR_11[VAR_17 - 1] != '\n')

  if ((VAR_17 = FUNC_5(VAR_8)) != VAR_0 && FUNC_8(VAR_17, VAR_4) == VAR_0)
   return (-1);
 return (0);
}
