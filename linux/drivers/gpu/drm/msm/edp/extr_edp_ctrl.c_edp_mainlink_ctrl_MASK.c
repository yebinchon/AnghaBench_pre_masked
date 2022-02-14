
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_ctrl {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct edp_ctrl *VAR_3, int VAR_4)
{
 u32 VAR_5 = 0;

 FUNC_0(VAR_3->base + VAR_2, VAR_1);

 FUNC_2();
 FUNC_1(500, 1000);

 if (VAR_4)
  VAR_5 |= VAR_0;

 FUNC_0(VAR_3->base + VAR_2, VAR_5);
}
