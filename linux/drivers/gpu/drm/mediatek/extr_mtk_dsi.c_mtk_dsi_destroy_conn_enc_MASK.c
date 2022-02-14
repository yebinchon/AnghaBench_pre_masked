
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dev; } ;
struct mtk_dsi {scalar_t__ panel; TYPE_1__ conn; int encoder; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_dsi *VAR_0)
{
 FUNC_1(&VAR_0->encoder);

 if (VAR_0->conn.dev)
  FUNC_0(&VAR_0->conn);
 if (VAR_0->panel)
  FUNC_2(VAR_0->panel);
}
