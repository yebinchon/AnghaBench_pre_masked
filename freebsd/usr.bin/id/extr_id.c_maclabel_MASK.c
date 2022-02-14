
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char**) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 char *VAR_1;
 mac_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(&VAR_2);
 if (VAR_3 == -1)
  FUNC_0(1, "mac_prepare_type: %s", FUNC_7(VAR_0));

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == -1)
  FUNC_0(1, "mac_get_proc: %s", FUNC_7(VAR_0));

 VAR_3 = FUNC_5(VAR_2, &VAR_1);
 if (VAR_3 == -1)
  FUNC_0(1, "mac_to_text: %s", FUNC_7(VAR_0));

 (void)FUNC_6("%s\n", VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(VAR_1);
}
