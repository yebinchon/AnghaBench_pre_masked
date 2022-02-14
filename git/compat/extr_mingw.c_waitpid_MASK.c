
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinfo_t {int pid; struct pinfo_t* next; int proc; } ;
typedef int pid_t ;
typedef int LPDWORD ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_8 ;
 int FUNC_6 (struct pinfo_t*) ;
 struct pinfo_t* VAR_9 ;
 int VAR_10 ;

pid_t FUNC_7(pid_t VAR_11, int *VAR_12, int VAR_13)
{
 HANDLE VAR_14 = FUNC_4(VAR_5 | VAR_4,
     VAR_2, VAR_11);
 if (!VAR_14) {
  VAR_8 = VAR_0;
  return -1;
 }

 if (VAR_11 > 0 && VAR_13 & VAR_7) {
  if (VAR_6 != FUNC_5(VAR_14, 0)) {
   FUNC_0(VAR_14);
   return 0;
  }
  VAR_13 &= ~VAR_7;
 }

 if (VAR_13 == 0) {
  struct pinfo_t **VAR_15;
  if (FUNC_5(VAR_14, VAR_3) != VAR_6) {
   FUNC_0(VAR_14);
   return 0;
  }

  if (VAR_12)
   FUNC_2(VAR_14, (LPDWORD)VAR_12);

  FUNC_1(&VAR_10);

  VAR_15 = &VAR_9;
  while (*VAR_15) {
   struct pinfo_t *VAR_16 = *VAR_15;
   if (VAR_16->pid == VAR_11) {
    FUNC_0(VAR_16->proc);
    *VAR_15 = VAR_16->next;
    FUNC_6(VAR_16);
    break;
   }
   VAR_15 = &VAR_16->next;
  }

  FUNC_3(&VAR_10);

  FUNC_0(VAR_14);
  return VAR_11;
 }
 FUNC_0(VAR_14);

 VAR_8 = VAR_1;
 return -1;
}
