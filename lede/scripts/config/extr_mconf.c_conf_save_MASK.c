
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * VAR_0 ;
 int FUNC_3 (int *,int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 while (1) {
  int VAR_4;
  FUNC_2();
  VAR_4 = FUNC_3(((void*)0), VAR_3,
          11, 55, VAR_1);
  switch(VAR_4) {
  case 0:
   if (!VAR_0[0])
    return;
   if (!FUNC_1(VAR_0)) {
    FUNC_4(VAR_0);
    return;
   }
   FUNC_6(((void*)0), FUNC_0("Can't create file!  Probably a nonexistent directory."), 5, 60);
   break;
  case 1:
   FUNC_5(FUNC_0("Save Alternate Configuration"), VAR_2);
   break;
  case 128:
   return;
  }
 }
}
