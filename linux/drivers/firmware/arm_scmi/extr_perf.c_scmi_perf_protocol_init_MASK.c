
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_perf_info {int num_domains; struct perf_dom_info* dom_info; } ;
struct scmi_handle {struct scmi_perf_info* perf_priv; int * perf_ops; int dev; } ;
struct perf_dom_info {int fc_info; scalar_t__ perf_fastchannels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 struct perf_dom_info* FUNC_3 (int ,int,int,int ) ;
 struct scmi_perf_info* FUNC_4 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct scmi_handle*,struct scmi_perf_info*) ;
 int FUNC_6 (struct scmi_handle*,int,struct perf_dom_info*) ;
 int FUNC_7 (struct scmi_handle*,int,struct perf_dom_info*) ;
 int FUNC_8 (struct scmi_handle*,int,int *) ;
 int FUNC_9 (struct scmi_handle*,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct scmi_handle *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct scmi_perf_info *VAR_7;

 FUNC_9(VAR_4, VAR_2, &VAR_6);

 FUNC_2(VAR_4->dev, "Performance Version %d.%d\n",
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
  struct perf_dom_info *VAR_8 = VAR_7->dom_info + VAR_5;

  FUNC_7(VAR_4, VAR_5, VAR_8);
  FUNC_6(VAR_4, VAR_5, VAR_8);

  if (VAR_8->perf_fastchannels)
   FUNC_8(VAR_4, VAR_5, &VAR_8->fc_info);
 }

 VAR_4->perf_ops = &VAR_3;
 VAR_4->perf_priv = VAR_7;

 return 0;
}
