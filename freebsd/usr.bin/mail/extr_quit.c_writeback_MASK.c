
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* VAR_3 ;
 struct message* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (struct message*,int *,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12(FILE *VAR_6)
{
 struct message *VAR_7;
 int VAR_8, VAR_9;
 FILE *VAR_10;

 VAR_8 = 0;
 if ((VAR_10 = FUNC_1(VAR_3, "r+")) == ((void*)0)) {
  FUNC_10("%s", VAR_3);
  return (-1);
 }

 if (VAR_6 != ((void*)0))
  while ((VAR_9 = FUNC_5(VAR_6)) != VAR_0)
   (void)FUNC_7(VAR_9, VAR_10);

 for (VAR_7 = &VAR_4[0]; VAR_7 < &VAR_4[VAR_5]; VAR_7++)
  if ((VAR_7->m_flag&VAR_1)||(VAR_7->m_flag&VAR_2)==0) {
   VAR_8++;
   if (FUNC_8(VAR_7, VAR_10, ((void*)0), ((void*)0)) < 0) {
    FUNC_11("%s", VAR_3);
    (void)FUNC_0(VAR_10);
    return (-1);
   }
  }





 (void)FUNC_4(VAR_10);
 FUNC_9(VAR_10);
 if (FUNC_3(VAR_10)) {
  FUNC_10("%s", VAR_3);
  (void)FUNC_0(VAR_10);
  return (-1);
 }
 if (VAR_6 != ((void*)0))
  (void)FUNC_0(VAR_6);
 (void)FUNC_0(VAR_10);
 FUNC_2(VAR_3);
 if (VAR_8 == 1)
  FUNC_6("Held 1 message in %s\n", VAR_3);
 else
  FUNC_6("Held %d messages in %s\n", VAR_8, VAR_3);
 return (0);
}
