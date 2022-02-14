
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct p4_pebs_bind {scalar_t__ metric_vert; scalar_t__ metric_pebs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (int ) ;
 struct p4_pebs_bind* VAR_5 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(u64 VAR_6)
{
 struct p4_pebs_bind *VAR_7;
 unsigned int VAR_8;

 FUNC_0(VAR_3 > VAR_2);

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 == VAR_4)
  return;

 VAR_7 = &VAR_5[VAR_8];

 (void)FUNC_2(VAR_0, (u64)VAR_7->metric_pebs);
 (void)FUNC_2(VAR_1, (u64)VAR_7->metric_vert);
}
