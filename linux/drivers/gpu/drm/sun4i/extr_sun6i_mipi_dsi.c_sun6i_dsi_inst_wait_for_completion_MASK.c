
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_dsi {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct sun6i_dsi *VAR_2)
{
 u32 VAR_3;

 return FUNC_0(VAR_2->regs, VAR_1,
     VAR_3,
     !(VAR_3 & VAR_0),
     100, 5000);
}
