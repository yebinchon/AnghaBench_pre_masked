
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct zynqmp_pm_query_data {int arg1; int qid; int member_0; } ;
struct clock_topology {int flag; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* query_data ) (struct zynqmp_pm_query_data,int *) ;} ;


 struct clk_hw* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_1 (int *,char const*,char const* const,int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct zynqmp_pm_query_data,int *) ;

struct clk_hw *FUNC_3(const char *VAR_3, u32 VAR_4,
     const char * const *VAR_5,
     u8 VAR_6,
     const struct clock_topology *VAR_7)
{
 u32 VAR_8, VAR_9;
 struct clk_hw *VAR_10;
 struct zynqmp_pm_query_data VAR_11 = {0};
 u32 VAR_12[VAR_0];
 int VAR_13;

 VAR_11.qid = VAR_1;
 VAR_11.arg1 = VAR_4;

 VAR_13 = VAR_2->query_data(VAR_11, VAR_12);
 if (VAR_13)
  return FUNC_0(VAR_13);

 VAR_8 = VAR_12[1];
 VAR_9 = VAR_12[2];

 VAR_10 = FUNC_1(((void*)0), VAR_3,
       VAR_5[0],
       VAR_7->flag, VAR_8,
       VAR_9);

 return VAR_10;
}
