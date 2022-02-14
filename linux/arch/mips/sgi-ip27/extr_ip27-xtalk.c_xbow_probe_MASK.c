
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nasid_t ;
typedef int lboard_t ;
typedef int klxbow_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(nasid_t VAR_5)
{
 lboard_t *VAR_6;
 klxbow_t *VAR_7;
 unsigned VAR_8, VAR_9;





 VAR_6 = FUNC_6((lboard_t *)FUNC_0(VAR_5), VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (klxbow_t *)FUNC_5(VAR_6, ((void*)0), VAR_3);
 if (!VAR_7)
  return -VAR_0;
 VAR_9 = VAR_2 - 1;
 do {
  VAR_9++;
 } while ((!FUNC_3(VAR_7, VAR_9)) ||
   (!FUNC_1(VAR_7, VAR_9)));


 VAR_8 = VAR_9;
 if (VAR_5 != FUNC_2(VAR_7, VAR_9))
  return 1;

 for (VAR_9 = VAR_2; VAR_9 <= VAR_1; VAR_9++) {
  if (FUNC_1(VAR_7, VAR_9) &&
      FUNC_4(VAR_7, VAR_9))
   FUNC_7(VAR_5, VAR_9, VAR_8);
 }

 return 0;
}
