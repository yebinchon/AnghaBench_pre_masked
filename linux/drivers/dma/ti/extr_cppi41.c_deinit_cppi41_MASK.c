
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cppi41_dd {int scratch_phys; int qmgr_scratch; scalar_t__ qmgr_mem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct cppi41_dd*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct device*,struct cppi41_dd*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2, struct cppi41_dd *VAR_3)
{
 FUNC_1(VAR_3);

 FUNC_3(VAR_2, VAR_3);

 FUNC_0(0, VAR_3->qmgr_mem + VAR_0);
 FUNC_0(0, VAR_3->qmgr_mem + VAR_0);
 FUNC_2(VAR_2, VAR_1, VAR_3->qmgr_scratch,
   VAR_3->scratch_phys);
}
