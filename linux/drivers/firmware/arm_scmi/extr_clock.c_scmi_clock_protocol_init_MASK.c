
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_handle {struct clock_info* clk_priv; int * clk_ops; int dev; } ;
struct scmi_clock_info {int dummy; } ;
struct clock_info {int num_clocks; struct scmi_clock_info* clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 struct scmi_clock_info* FUNC_3 (int ,int,int,int ) ;
 struct clock_info* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct scmi_handle*,int,struct scmi_clock_info*) ;
 int FUNC_6 (struct scmi_handle*,int,struct scmi_clock_info*) ;
 int FUNC_7 (struct scmi_handle*,struct clock_info*) ;
 int FUNC_8 (struct scmi_handle*,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct scmi_handle *VAR_4)
{
 u32 VAR_5;
 int VAR_6, VAR_7;
 struct clock_info *VAR_8;

 FUNC_8(VAR_4, VAR_2, &VAR_5);

 FUNC_2(VAR_4->dev, "Clock Version %d.%d\n",
  FUNC_0(VAR_5), FUNC_1(VAR_5));

 VAR_8 = FUNC_4(VAR_4->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(VAR_4, VAR_8);

 VAR_8->clk = FUNC_3(VAR_4->dev, VAR_8->num_clocks,
      sizeof(*VAR_8->clk), VAR_1);
 if (!VAR_8->clk)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_8->num_clocks; VAR_6++) {
  struct scmi_clock_info *VAR_9 = VAR_8->clk + VAR_6;

  VAR_7 = FUNC_5(VAR_4, VAR_6, VAR_9);
  if (!VAR_7)
   FUNC_6(VAR_4, VAR_6, VAR_9);
 }

 VAR_4->clk_ops = &VAR_3;
 VAR_4->clk_priv = VAR_8;

 return 0;
}
