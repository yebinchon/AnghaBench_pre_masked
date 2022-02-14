
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int hangcheck_timer; int name; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_2)
{
 FUNC_0("%s", VAR_2->name);
 FUNC_1(&VAR_2->hangcheck_timer,
   FUNC_2(VAR_1 + VAR_0));
}
