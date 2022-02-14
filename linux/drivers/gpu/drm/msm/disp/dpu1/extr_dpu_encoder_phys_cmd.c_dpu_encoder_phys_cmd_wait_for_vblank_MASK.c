
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_wait_info {int timeout_ms; int * atomic_cnt; int * wq; } ;
struct dpu_encoder_phys_cmd {int pending_vblank_cnt; int pending_vblank_wq; } ;
struct dpu_encoder_phys {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dpu_encoder_phys*,int ,struct dpu_encoder_wait_info*) ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_3)
{
 int VAR_4 = 0;
 struct dpu_encoder_phys_cmd *VAR_5;
 struct dpu_encoder_wait_info VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3);


 if (!FUNC_2(VAR_3))
  return VAR_4;

 VAR_6.wq = &VAR_5->pending_vblank_wq;
 VAR_6.atomic_cnt = &VAR_5->pending_vblank_cnt;
 VAR_6.timeout_ms = VAR_2;

 FUNC_0(&VAR_5->pending_vblank_cnt);

 VAR_4 = FUNC_1(VAR_3, VAR_1,
   &VAR_6);

 return VAR_4;
}
