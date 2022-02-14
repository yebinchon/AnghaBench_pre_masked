
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_pm_domain {int rsrc; } ;
struct imx_sc_msg_req_set_resource_power_mode {int mode; int resource; struct imx_sc_rpc_msg hdr; } ;
struct generic_pm_domain {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,char*,int ,int) ;
 int FUNC_1 (int ,struct imx_sc_msg_req_set_resource_power_mode*,int) ;
 int VAR_5 ;
 struct imx_sc_pm_domain* FUNC_2 (struct generic_pm_domain*) ;

__attribute__((used)) static int FUNC_3(struct generic_pm_domain *VAR_6, bool VAR_7)
{
 struct imx_sc_msg_req_set_resource_power_mode VAR_8;
 struct imx_sc_rpc_msg *VAR_9 = &VAR_8.hdr;
 struct imx_sc_pm_domain *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_6);

 VAR_9->ver = VAR_4;
 VAR_9->svc = VAR_3;
 VAR_9->func = VAR_0;
 VAR_9->size = 2;

 VAR_8.resource = VAR_10->rsrc;
 VAR_8.mode = VAR_7 ? VAR_2 : VAR_1;

 VAR_11 = FUNC_1(VAR_5, &VAR_8, 1);
 if (VAR_11)
  FUNC_0(&VAR_6->dev, "failed to power %s resource %d ret %d\n",
   VAR_7 ? "up" : "off", VAR_10->rsrc, VAR_11);

 return VAR_11;
}
