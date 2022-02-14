
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct msm_mdss {int dummy; } ;
struct dpu_mdss {int num_paths; int * path; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 struct dpu_mdss* FUNC_2 (struct msm_mdss*) ;

__attribute__((used)) static void FUNC_3(struct msm_mdss *VAR_1)
{
 struct dpu_mdss *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 u64 VAR_4 = VAR_2->num_paths ? VAR_0 / VAR_2->num_paths : 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_paths; VAR_3++)
  FUNC_0(VAR_2->path[VAR_3], VAR_4, FUNC_1(VAR_0));
}
