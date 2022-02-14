
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(int VAR_6)
{
 if (FUNC_0(FUNC_1(&VAR_5) == 0,
   "Trying to lock fdc while usage count=0\n"))
  return -1;

 if (FUNC_5(VAR_4, !FUNC_4(0, &VAR_3)))
  return -VAR_0;

 VAR_2 = VAR_1;

 FUNC_2(VAR_6, "lock fdc");
 FUNC_3(VAR_6);
 return 0;
}
