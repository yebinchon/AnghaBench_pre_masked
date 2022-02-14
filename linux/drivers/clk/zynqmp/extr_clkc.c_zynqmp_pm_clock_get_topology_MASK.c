
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct zynqmp_pm_query_data {void* arg2; void* arg1; int qid; int member_0; } ;
struct topology_resp {int dummy; } ;
struct TYPE_2__ {int (* query_data ) (struct zynqmp_pm_query_data,void**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct topology_resp*,void**,int) ;
 int FUNC_1 (struct zynqmp_pm_query_data,void**) ;

__attribute__((used)) static int FUNC_2(u32 VAR_3, u32 VAR_4,
     struct topology_resp *VAR_5)
{
 struct zynqmp_pm_query_data VAR_6 = {0};
 u32 VAR_7[VAR_0];
 int VAR_8;

 VAR_6.qid = VAR_1;
 VAR_6.arg1 = VAR_3;
 VAR_6.arg2 = VAR_4;

 VAR_8 = VAR_2->query_data(VAR_6, VAR_7);
 FUNC_0(VAR_5, &VAR_7[1], sizeof(*VAR_5));

 return VAR_8;
}
