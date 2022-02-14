
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vdso_timehands {int th_x86_shift; int th_x86_hpet_idx; int th_res; int th_algo; } ;
struct timecounter {scalar_t__ tc_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vdso_timehands *VAR_1, struct timecounter *VAR_2)
{

 VAR_1->th_algo = VAR_0;
 VAR_1->th_x86_shift = (int)(intptr_t)VAR_2->tc_priv;
 VAR_1->th_x86_hpet_idx = 0xffffffff;
 FUNC_0(VAR_1->th_res, sizeof(VAR_1->th_res));
 return (1);
}
