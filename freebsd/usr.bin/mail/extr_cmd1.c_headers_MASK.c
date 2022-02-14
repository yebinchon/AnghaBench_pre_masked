
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_flag; } ;


 int VAR_0 ;
 struct message* VAR_1 ;
 struct message* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 () ;

int
FUNC_3(void *VAR_5)
{
 int *VAR_6 = VAR_5;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct message *VAR_11;

 VAR_10 = FUNC_2();
 VAR_7 = VAR_6[0];
 if (VAR_7 != 0)
  VAR_4 = (VAR_7-1)/VAR_10;
 if (VAR_4 < 0)
  VAR_4 = 0;
 VAR_11 = &VAR_2[VAR_4 * VAR_10];
 if (VAR_11 >= &VAR_2[VAR_3])
  VAR_11 = &VAR_2[VAR_3 - VAR_10];
 if (VAR_11 < &VAR_2[0])
  VAR_11 = &VAR_2[0];
 VAR_9 = 0;
 VAR_8 = VAR_11 - &VAR_2[0];
 if (VAR_1 != &VAR_2[VAR_7-1])
  VAR_1 = VAR_11;
 for (; VAR_11 < &VAR_2[VAR_3]; VAR_11++) {
  VAR_8++;
  if (VAR_11->m_flag & VAR_0)
   continue;
  if (VAR_9++ >= VAR_10)
   break;
  FUNC_1(VAR_8);
 }
 if (VAR_9 == 0) {
  FUNC_0("No more mail.\n");
  return (1);
 }
 return (0);
}
