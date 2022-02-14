
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde_dsi {int prcmu; int bridge_out; scalar_t__ panel; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mcde_dsi* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, struct device *VAR_3,
       void *VAR_4)
{
 struct mcde_dsi *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->panel)
  FUNC_1(VAR_5->bridge_out);
 FUNC_2(VAR_5->prcmu, VAR_0,
      VAR_1, 0);
}
