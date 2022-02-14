
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (FUNC_1(VAR_1, VAR_2, 0, "uv"))
  FUNC_0("UV: NMI handler failed to register\n");

 if (FUNC_1(VAR_0, VAR_3, 0, "uvping"))
  FUNC_0("UV: PING NMI handler failed to register\n");
}
