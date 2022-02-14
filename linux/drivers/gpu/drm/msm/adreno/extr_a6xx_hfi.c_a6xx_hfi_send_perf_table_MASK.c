
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct a6xx_hfi_msg_perf_table {int num_gpu_levels; int num_gmu_levels; TYPE_2__* cx_votes; TYPE_1__* gx_votes; int member_0; } ;
struct a6xx_gmu {int nr_gpu_freqs; int nr_gmu_freqs; int* gpu_freqs; int* gmu_freqs; int * cx_arc_votes; int * gx_arc_votes; } ;
typedef int msg ;
struct TYPE_4__ {int freq; int vote; } ;
struct TYPE_3__ {int freq; int vote; } ;


 int VAR_0 ;
 int FUNC_0 (struct a6xx_gmu*,int ,struct a6xx_hfi_msg_perf_table*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct a6xx_gmu *VAR_1)
{
 struct a6xx_hfi_msg_perf_table VAR_2 = { 0 };
 int VAR_3;

 VAR_2.num_gpu_levels = VAR_1->nr_gpu_freqs;
 VAR_2.num_gmu_levels = VAR_1->nr_gmu_freqs;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_gpu_freqs; VAR_3++) {
  VAR_2.gx_votes[VAR_3].vote = VAR_1->gx_arc_votes[VAR_3];
  VAR_2.gx_votes[VAR_3].freq = VAR_1->gpu_freqs[VAR_3] / 1000;
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_gmu_freqs; VAR_3++) {
  VAR_2.cx_votes[VAR_3].vote = VAR_1->cx_arc_votes[VAR_3];
  VAR_2.cx_votes[VAR_3].freq = VAR_1->gmu_freqs[VAR_3] / 1000;
 }

 return FUNC_0(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2),
  ((void*)0), 0);
}
