
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu {int ec_clk; int ec_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pcpu*) ;
 int FUNC_2 (struct pcpu*,int,int ) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct pcpu *VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_3(VAR_3, &VAR_2->ec_mask))
  return;
 VAR_4 = FUNC_1(VAR_2) ? VAR_1 : VAR_0;
 VAR_2->ec_clk = FUNC_0();
 FUNC_2(VAR_2, VAR_4, 0);
}
