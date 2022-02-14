
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_3 = VAR_2;

 FUNC_1(
  VAR_1, VAR_0,
  VAR_3 ? VAR_0 : 0);

 FUNC_0("UV:NMI: GPP_D_0 interrupt %s\n",
  VAR_3 ? "enabled" : "disabled");
}
