
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct clk_set_value {int rate; int id; } ;
typedef int stat ;
typedef int clk ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,struct clk_set_value*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(u16 VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 struct clk_set_value VAR_4 = {
  .id = FUNC_0(VAR_1),
  .rate = FUNC_1(VAR_2)
 };

 return FUNC_2(VAR_0, &VAR_4, sizeof(VAR_4),
     &VAR_3, sizeof(VAR_3));
}
