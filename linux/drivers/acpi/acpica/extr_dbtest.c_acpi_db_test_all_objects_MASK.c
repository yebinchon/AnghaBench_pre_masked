
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int *,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_6(void)
{
 acpi_status VAR_10;



 if (!VAR_6) {
  VAR_10 = FUNC_3(VAR_7);
  if (FUNC_0(VAR_10)) {
   FUNC_4
       ("%s, Could not install debugger read method\n",
        FUNC_1(VAR_10));
   return;
  }

  VAR_10 =
      FUNC_2(((void*)0), VAR_0, &VAR_6);
  if (FUNC_0(VAR_10)) {
   FUNC_4
       ("Could not obtain handle for debug method %s\n",
        VAR_0);
   return;
  }
 }



 if (!VAR_8) {
  VAR_10 = FUNC_3(VAR_9);
  if (FUNC_0(VAR_10)) {
   FUNC_4
       ("%s, Could not install debugger write method\n",
        FUNC_1(VAR_10));
   return;
  }

  VAR_10 =
      FUNC_2(((void*)0), VAR_1, &VAR_8);
  if (FUNC_0(VAR_10)) {
   FUNC_4
       ("Could not obtain handle for debug method %s\n",
        VAR_1);
   return;
  }
 }



 (void)FUNC_5(VAR_3, VAR_2,
      VAR_4, VAR_5,
      ((void*)0), ((void*)0), ((void*)0));
}
