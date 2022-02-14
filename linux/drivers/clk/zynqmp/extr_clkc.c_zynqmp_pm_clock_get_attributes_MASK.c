
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zynqmp_pm_query_data {int arg1; int qid; int member_0; } ;
struct attr_resp {int dummy; } ;
struct TYPE_2__ {int (* query_data ) (struct zynqmp_pm_query_data,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct attr_resp*,int *,int) ;
 int FUNC_1 (struct zynqmp_pm_query_data,int *) ;

__attribute__((used)) static int FUNC_2(u32 VAR_3,
       struct attr_resp *VAR_4)
{
 struct zynqmp_pm_query_data VAR_5 = {0};
 u32 VAR_6[VAR_0];
 int VAR_7;

 VAR_5.qid = VAR_1;
 VAR_5.arg1 = VAR_3;

 VAR_7 = VAR_2->query_data(VAR_5, VAR_6);
 FUNC_0(VAR_4, &VAR_6[1], sizeof(*VAR_4));

 return VAR_7;
}
