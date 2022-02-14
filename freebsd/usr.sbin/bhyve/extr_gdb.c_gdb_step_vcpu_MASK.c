
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int ,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ,int) ;

__attribute__((used)) static bool
FUNC_5(int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0("$vCPU %d step\n", VAR_4);
 VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return (0);
 VAR_5 = FUNC_4(VAR_1, VAR_4, VAR_0, 1);
 FUNC_3(VAR_1, VAR_4);
 VAR_3 = VAR_4;
 FUNC_1(&VAR_2);
 return (1);
}
