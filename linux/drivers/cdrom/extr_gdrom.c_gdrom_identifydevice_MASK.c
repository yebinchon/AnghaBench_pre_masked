
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 int VAR_4;
 short *VAR_5 = VAR_3;



 if (!FUNC_4()) {
  FUNC_2(((void*)0));
  return;
 }
 FUNC_1(VAR_0, VAR_2);
 if (!FUNC_3()) {
  FUNC_2(((void*)0));
  return;
 }

 for (VAR_4 = 0; VAR_4 < 40; VAR_4++)
  VAR_5[VAR_4] = FUNC_0(VAR_1);
}
