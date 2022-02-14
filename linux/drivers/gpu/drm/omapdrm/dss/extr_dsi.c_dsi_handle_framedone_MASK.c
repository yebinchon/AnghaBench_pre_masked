
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {int framedone_data; int (* framedone_callback ) (int,int ) ;scalar_t__ te_enabled; TYPE_1__* dss; } ;
struct TYPE_2__ {int dispc; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsi_data*,int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dsi_data*,char*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct dsi_data *VAR_1, int VAR_2)
{

 FUNC_1(VAR_1->dss->dispc);

 if (VAR_1->te_enabled) {

  FUNC_0(VAR_1, VAR_0, 1, 15, 15);
 }

 VAR_1->framedone_callback(VAR_2, VAR_1->framedone_data);

 if (!VAR_2)
  FUNC_2(VAR_1, "DISPC");
}
