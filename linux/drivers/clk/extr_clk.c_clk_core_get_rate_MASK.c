
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_core*,int ) ;
 unsigned long FUNC_1 (struct clk_core*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_core *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2();

 if (VAR_1 && (VAR_1->flags & VAR_0))
  FUNC_0(VAR_1, 0);

 VAR_2 = FUNC_1(VAR_1);
 FUNC_3();

 return VAR_2;
}
