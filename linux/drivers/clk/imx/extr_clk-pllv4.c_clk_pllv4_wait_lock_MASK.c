
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv4 {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct clk_pllv4 *VAR_3)
{
 u32 VAR_4;

 return FUNC_0(VAR_3->base + VAR_1,
      VAR_4, VAR_4 & VAR_2, 0, VAR_0);
}
