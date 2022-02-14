
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 unsigned long const VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,unsigned long const*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned long const*) ;

void
FUNC_9(void)
{
 cap_rights_t VAR_3;
 const unsigned long VAR_4[] = { VAR_1 };

 FUNC_0(&VAR_3, VAR_0);
 if (FUNC_4(VAR_2, &VAR_3) < 0)
  FUNC_6(1, "cap_rights_limit");

 if (FUNC_3(VAR_2, VAR_4, FUNC_8(VAR_4)) < 0)
  FUNC_6(1, "cap_ioctls_limit");

 if (FUNC_2() < 0)
  FUNC_6(1, "cap_enter");

 if (FUNC_1())
  FUNC_5("Capsicum capability mode enabled");
 else
  FUNC_7("Capsicum capability mode not supported");
}
