
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct message* VAR_2 ;
 struct message* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (int*) ;

int
FUNC_2(void *VAR_6)
{
 struct message *VAR_7;
 int *VAR_8 = VAR_6;
 int *VAR_9, *VAR_10, VAR_11[2], VAR_12;

 if (*VAR_8 != 0) {







  VAR_12 = VAR_2 - &VAR_3[0] + 1;






  for (VAR_9 = VAR_8; *VAR_9 != 0; VAR_9++)
   if (*VAR_9 > VAR_12)
    break;
  if (*VAR_9 == 0)
   VAR_9 = VAR_8;
  VAR_10 = VAR_9;
  do {
   VAR_7 = &VAR_3[*VAR_10 - 1];
   if ((VAR_7->m_flag & VAR_0) == 0) {
    VAR_2 = VAR_7;
    goto hitit;
   }
   if (*VAR_10 != 0)
    VAR_10++;
   if (*VAR_10 == 0)
    VAR_10 = VAR_8;
  } while (VAR_10 != VAR_9);
  FUNC_0("No messages applicable\n");
  return (1);
 }






 if (!VAR_5)
  goto hitit;






 for (VAR_7 = VAR_2+1; VAR_7 < &VAR_3[VAR_4]; VAR_7++)
  if ((VAR_7->m_flag & (VAR_0|VAR_1)) == 0)
   break;
 if (VAR_7 >= &VAR_3[VAR_4]) {
  FUNC_0("At EOF\n");
  return (0);
 }
 VAR_2 = VAR_7;
hitit:




 VAR_11[0] = VAR_2 - &VAR_3[0] + 1;
 VAR_11[1] = 0;
 return (FUNC_1(VAR_11));
}
