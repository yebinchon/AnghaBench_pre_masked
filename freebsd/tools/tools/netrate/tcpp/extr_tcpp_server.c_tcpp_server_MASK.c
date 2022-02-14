
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int cp_time_last ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (long*,long*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__* FUNC_6 (int) ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_7 (char*,int,int,int,int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,long**,size_t*,int *,int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (scalar_t__,int *,int ) ;
 int FUNC_12 (char*) ;

void
FUNC_13(void)
{




 pid_t VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(sizeof(*VAR_9) * VAR_8);
 if (VAR_9 == ((void*)0))
  FUNC_2(-1, "malloc pid_list");
 FUNC_1(VAR_9, sizeof(*VAR_9) * VAR_8);




 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10 = FUNC_4();
  if (VAR_10 < 0) {
   FUNC_12("fork");
   for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
    if (VAR_9[VAR_11] != 0)
     (void)FUNC_5(VAR_9[VAR_11], VAR_6);
   }
   FUNC_3(-1);
  }
  if (VAR_10 == 0) {
   FUNC_10(VAR_11);
   FUNC_3(0);
  }
  VAR_9[VAR_11] = VAR_10;
 }
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_9[VAR_11] != 0) {
   while (FUNC_11(VAR_9[VAR_11], ((void*)0), 0) != VAR_9[VAR_11]);
  }
 }
}
