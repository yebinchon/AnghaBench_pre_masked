
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scpi_clk_data {int clk_num; struct scpi_clk** clk; } ;
struct scpi_clk {int id; } ;
struct of_device_id {int dummy; } ;
typedef char const device_node ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,char*,char const*) ;
 struct scpi_clk** FUNC_2 (struct device*,int,int,int ) ;
 struct scpi_clk_data* FUNC_3 (struct device*,int,int ) ;
 struct scpi_clk* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (char const*,int ,struct scpi_clk_data*) ;
 int FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*,int,char const**) ;
 scalar_t__ FUNC_8 (char const*,char*,int,int *) ;
 int FUNC_9 (struct device*,struct of_device_id const*,struct scpi_clk*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4, struct device_node *VAR_5,
   const struct of_device_id *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct scpi_clk_data *VAR_10;

 VAR_8 = FUNC_6(VAR_5, "clock-output-names");
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "%pOFn: invalid clock output count\n", VAR_5);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_4, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->clk_num = VAR_8;
 VAR_10->clk = FUNC_2(VAR_4, VAR_8, sizeof(*VAR_10->clk),
         VAR_2);
 if (!VAR_10->clk)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct scpi_clk *VAR_11;
  const char *VAR_12;
  u32 VAR_13;

  VAR_11 = FUNC_4(VAR_4, sizeof(*VAR_11), VAR_2);
  if (!VAR_11)
   return -VAR_1;

  if (FUNC_7(VAR_5, "clock-output-names",
        VAR_7, &VAR_12)) {
   FUNC_1(VAR_4, "invalid clock name @ %pOFn\n", VAR_5);
   return -VAR_0;
  }

  if (FUNC_8(VAR_5, "clock-indices",
            VAR_7, &VAR_13)) {
   FUNC_1(VAR_4, "invalid clock index @ %pOFn\n", VAR_5);
   return -VAR_0;
  }

  VAR_11->id = VAR_13;

  VAR_9 = FUNC_9(VAR_4, VAR_6, VAR_11, VAR_12);
  if (VAR_9) {
   FUNC_1(VAR_4, "failed to register clock '%s'\n", VAR_12);
   return VAR_9;
  }

  FUNC_0(VAR_4, "Registered clock '%s'\n", VAR_12);
  VAR_10->clk[VAR_7] = VAR_11;
 }

 return FUNC_5(VAR_5, VAR_3, VAR_10);
}
