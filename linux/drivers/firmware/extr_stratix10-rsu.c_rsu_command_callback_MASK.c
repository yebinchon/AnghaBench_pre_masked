
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stratix10_svc_client {int dev; struct stratix10_rsu_priv* priv; } ;
struct stratix10_svc_cb_data {scalar_t__ status; } ;
struct stratix10_rsu_priv {int completion; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct stratix10_svc_client *VAR_1,
     struct stratix10_svc_cb_data *VAR_2)
{
 struct stratix10_rsu_priv *VAR_3 = VAR_1->priv;

 if (VAR_2->status != FUNC_0(VAR_0))
  FUNC_2(VAR_1->dev, "RSU returned status is %i\n",
   VAR_2->status);
 FUNC_1(&VAR_3->completion);
}
