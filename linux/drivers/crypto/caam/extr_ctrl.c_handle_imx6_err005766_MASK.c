
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_2)
{
 if (FUNC_1("fsl,imx6q") ||
     FUNC_1("fsl,imx6dl") ||
     FUNC_1("fsl,imx6qp"))
  FUNC_0(VAR_2, VAR_0,
         1 << VAR_1);
}
