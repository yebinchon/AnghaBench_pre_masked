
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_pf2vf_resp {int pf2vf_resp_work; struct adf_accel_vf_info* vf_info; } ;
struct adf_accel_vf_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct adf_pf2vf_resp* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3)
{
 struct adf_accel_vf_info *VAR_4 = (struct adf_accel_vf_info *)VAR_3;
 struct adf_pf2vf_resp *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_5->vf_info = VAR_4;
 FUNC_0(&VAR_5->pf2vf_resp_work, VAR_1);
 FUNC_2(VAR_2, &VAR_5->pf2vf_resp_work);
}
