
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_engine {int regs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct sunxi_engine *VAR_3)
{
 int VAR_4;

 FUNC_0("Applying RGB to YUV color correction\n");


 FUNC_2(VAR_3->regs, VAR_1,
       VAR_0);

 for (VAR_4 = 0; VAR_4 < 12; VAR_4++)
  FUNC_2(VAR_3->regs, FUNC_1(VAR_4),
        VAR_2[VAR_4]);
}
