
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_reset_info {int num_domains; struct reset_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_reset_info* reset_priv; int * reset_ops; int dev; } ;
struct reset_dom_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 struct reset_dom_info* FUNC_3 (int ,int,int,int ) ;
 struct scmi_reset_info* FUNC_4 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct scmi_handle*,struct scmi_reset_info*) ;
 int FUNC_6 (struct scmi_handle*,int,struct reset_dom_info*) ;
 int FUNC_7 (struct scmi_handle*,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct scmi_handle *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct scmi_reset_info *VAR_7;

 FUNC_7(VAR_4, VAR_2, &VAR_6);

 FUNC_2(VAR_4->dev, "Reset Version %d.%d\n",
  FUNC_0(VAR_6), FUNC_1(VAR_6));

 VAR_7 = FUNC_4(VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_5(VAR_4, VAR_7);

 VAR_7->dom_info = FUNC_3(VAR_4->dev, VAR_7->num_domains,
           sizeof(*VAR_7->dom_info), VAR_1);
 if (!VAR_7->dom_info)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_7->num_domains; VAR_5++) {
  struct reset_dom_info *VAR_8 = VAR_7->dom_info + VAR_5;

  FUNC_6(VAR_4, VAR_5, VAR_8);
 }

 VAR_4->reset_ops = &VAR_3;
 VAR_4->reset_priv = VAR_7;

 return 0;
}
