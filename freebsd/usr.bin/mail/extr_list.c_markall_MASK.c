
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;
struct coltab {char co_char; int co_bit; int co_mask; int co_equal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;






 int FUNC_0 (int,int) ;
 struct coltab* VAR_4 ;
 struct message* VAR_5 ;
 int FUNC_1 (char) ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,int) ;
 struct message* VAR_9 ;
 int FUNC_5 (char,int) ;
 int VAR_10 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char**) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;

int
FUNC_12(char VAR_11[], int VAR_12)
{
 char **VAR_13;
 int VAR_14;
 struct message *VAR_15;
 char *VAR_16[VAR_2], *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_23 = VAR_5 - &VAR_9[0] + 1;
 VAR_24 = 0;
 for (VAR_14 = 1; VAR_14 <= VAR_10; VAR_14++)
  FUNC_11(VAR_14);
 VAR_17 = VAR_11;
 VAR_20 = 0;
 VAR_13 = &VAR_16[0];
 FUNC_10();
 VAR_18 = FUNC_9(&VAR_17);
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_19 = 0;
 while (VAR_18 != VAR_3) {
  switch (VAR_18) {
  case 132:
number:
   if (VAR_21) {
    FUNC_6("No numbers mixed with *\n");
    return (-1);
   }
   VAR_20++;
   VAR_22++;
   if (VAR_19 != 0) {
    if (FUNC_0(VAR_7, VAR_12))
     return (-1);
    for (VAR_14 = VAR_19; VAR_14 <= VAR_7; VAR_14++)
     if (VAR_12 == VAR_0 || (VAR_9[VAR_14 - 1].m_flag & VAR_0) == 0)
      FUNC_2(VAR_14);
    VAR_19 = 0;
    break;
   }
   VAR_19 = VAR_7;
   if (FUNC_0(VAR_19, VAR_12))
    return (-1);
   VAR_18 = FUNC_9(&VAR_17);
   FUNC_7(VAR_18);
   if (VAR_18 != 136) {
    FUNC_2(VAR_19);
    VAR_19 = 0;
   }
   break;

  case 131:
   if (VAR_19 != 0) {
    FUNC_6("Non-numeric second argument\n");
    return (-1);
   }
   VAR_14 = VAR_23;
   do {
    VAR_14++;
    if (VAR_14 > VAR_10) {
     FUNC_6("Referencing beyond EOF\n");
     return (-1);
    }
   } while ((VAR_9[VAR_14 - 1].m_flag & VAR_0) != VAR_12);
   FUNC_2(VAR_14);
   break;

  case 136:
   if (VAR_19 == 0) {
    VAR_14 = VAR_23;
    do {
     VAR_14--;
     if (VAR_14 <= 0) {
      FUNC_6("Referencing before 1\n");
      return (-1);
     }
    } while ((VAR_9[VAR_14 - 1].m_flag & VAR_0) != VAR_12);
    FUNC_2(VAR_14);
   }
   break;

  case 129:
   if (VAR_19 != 0) {
    FUNC_6("Non-numeric second argument\n");
    return (-1);
   }
   VAR_22++;
   if (VAR_8[0] == ':') {
    VAR_25 = FUNC_1(VAR_8[1]);
    if (VAR_25 == 0) {
     FUNC_6("Unknown colon modifier \"%s\"\n",
         VAR_8);
     return (-1);
    }
    VAR_24 |= VAR_25;
   }
   else
    *VAR_13++ = FUNC_8(VAR_8);
   break;

  case 135:
  case 128:
  case 134:
   VAR_7 = FUNC_5(VAR_8[0], VAR_12);
   if (VAR_7 == -1)
    return (-1);
   goto number;

  case 130:
   if (VAR_22) {
    FUNC_6("Can't mix \"*\" with anything\n");
    return (-1);
   }
   VAR_21++;
   break;

  case 133:
   return (-1);
  }
  VAR_18 = FUNC_9(&VAR_17);
 }
 VAR_6 = VAR_24;
 *VAR_13 = ((void*)0);
 VAR_20 = 0;
 if (VAR_21) {
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
   if ((VAR_9[VAR_14].m_flag & VAR_0) == VAR_12) {
    FUNC_2(VAR_14+1);
    VAR_20++;
   }
  if (VAR_20 == 0) {
   FUNC_6("No applicable messages.\n");
   return (-1);
  }
  return (0);
 }







 if ((VAR_13 > VAR_16 || VAR_24 != 0) && VAR_20 == 0)
  for (VAR_14 = 1; VAR_14 <= VAR_10; VAR_14++)
   if ((VAR_9[VAR_14-1].m_flag & VAR_0) == VAR_12)
    FUNC_2(VAR_14);






 if (VAR_13 > VAR_16) {
  for (VAR_14 = 1; VAR_14 <= VAR_10; VAR_14++) {
   for (VAR_20 = 0, VAR_13 = &VAR_16[0]; *VAR_13 != ((void*)0); VAR_13++)
    if (**VAR_13 == '/') {
     if (FUNC_3(*VAR_13, VAR_14)) {
      VAR_20++;
      break;
     }
    }
    else {
     if (FUNC_4(*VAR_13, VAR_14)) {
      VAR_20++;
      break;
     }
    }
   if (VAR_20 == 0)
    FUNC_11(VAR_14);
  }





  VAR_20 = 0;
  for (VAR_14 = 1; VAR_14 <= VAR_10; VAR_14++)
   if (VAR_9[VAR_14-1].m_flag & VAR_1) {
    VAR_20++;
    break;
   }
  if (VAR_20 == 0) {
   FUNC_6("No applicable messages from {%s",
    VAR_16[0]);
   for (VAR_13 = &VAR_16[1]; *VAR_13 != ((void*)0); VAR_13++)
    FUNC_6(", %s", *VAR_13);
   FUNC_6("}\n");
   return (-1);
  }
 }






 if (VAR_24 != 0) {
  for (VAR_14 = 1; VAR_14 <= VAR_10; VAR_14++) {
   struct coltab *VAR_26;

   VAR_15 = &VAR_9[VAR_14 - 1];
   for (VAR_26 = &VAR_4[0]; VAR_26->co_char != '\0'; VAR_26++)
    if (VAR_26->co_bit & VAR_24)
     if ((VAR_15->m_flag & VAR_26->co_mask)
         != VAR_26->co_equal)
      FUNC_11(VAR_14);

  }
  for (VAR_15 = &VAR_9[0]; VAR_15 < &VAR_9[VAR_10]; VAR_15++)
   if (VAR_15->m_flag & VAR_1)
    break;
  if (VAR_15 >= &VAR_9[VAR_10]) {
   struct coltab *VAR_27;

   FUNC_6("No messages satisfy");
   for (VAR_27 = &VAR_4[0]; VAR_27->co_char != '\0'; VAR_27++)
    if (VAR_27->co_bit & VAR_24)
     FUNC_6(" :%c", VAR_27->co_char);
   FUNC_6("\n");
   return (-1);
  }
 }
 return (0);
}
