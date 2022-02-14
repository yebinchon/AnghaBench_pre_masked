
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zynqmp_pm_query_data {int qid; int member_0; } ;
struct TYPE_2__ {int (* query_data ) (struct zynqmp_pm_query_data,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct zynqmp_pm_query_data,int *) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_3)
{
 struct zynqmp_pm_query_data VAR_4 = {0};
 u32 VAR_5[VAR_0];
 int VAR_6;

 VAR_4.qid = VAR_1;

 VAR_6 = VAR_2->query_data(VAR_4, VAR_5);
 *VAR_3 = VAR_5[1];

 return VAR_6;
}
