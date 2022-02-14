
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_11)
{

 if (FUNC_2() != 0)
  return;

 if (FUNC_1(VAR_1, VAR_3) == VAR_5)
  VAR_7 = VAR_10;
 else if (FUNC_1(VAR_1, VAR_2) == VAR_5)
  VAR_7 = VAR_9;
 else {
  FUNC_3("Warning: No OPAL HMI handler found.\n");
  return;
 }

 FUNC_0(VAR_4, VAR_8, ((void*)0),
     VAR_0);

 if (VAR_6)
  FUNC_3("Installed OPAL HMI handler.\n");
}
