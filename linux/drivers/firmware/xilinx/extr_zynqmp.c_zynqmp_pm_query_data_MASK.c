
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_pm_query_data {scalar_t__ qid; int arg3; int arg2; int arg1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct zynqmp_pm_query_data VAR_2, u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2.qid, VAR_2.arg1,
      VAR_2.arg2, VAR_2.arg3, VAR_3);






 return VAR_2.qid == VAR_0 ? 0 : VAR_4;
}
