
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dpu_encoder_virt {int num_phys_encs; struct dpu_encoder_phys* cur_master; struct dpu_encoder_phys* cur_slave; struct dpu_encoder_phys** phys_encs; } ;
struct dpu_encoder_phys {int dummy; } ;
struct dpu_enc_phys_init_params {scalar_t__ split_role; } ;


 scalar_t__ FUNC_0 (struct dpu_encoder_phys**) ;
 int FUNC_1 (struct dpu_encoder_virt*,char*) ;
 int FUNC_2 (struct dpu_encoder_virt*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct dpu_encoder_phys*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys* FUNC_5 (struct dpu_enc_phys_init_params*) ;
 struct dpu_encoder_phys* FUNC_6 (struct dpu_enc_phys_init_params*) ;

__attribute__((used)) static int FUNC_7(
  u32 VAR_5,
  struct dpu_encoder_virt *VAR_6,
  struct dpu_enc_phys_init_params *VAR_7)
{
 struct dpu_encoder_phys *VAR_8 = ((void*)0);

 FUNC_1(VAR_6, "\n");





 if (VAR_6->num_phys_encs + VAR_4 >=
   FUNC_0(VAR_6->phys_encs)) {
  FUNC_2(VAR_6, "too many physical encoders %d\n",
     VAR_6->num_phys_encs);
  return -VAR_0;
 }

 if (VAR_5 & VAR_3) {
  VAR_8 = FUNC_6(VAR_7);

  if (FUNC_3(VAR_8)) {
   FUNC_2(VAR_6, "failed to init vid enc: %ld\n",
    FUNC_4(VAR_8));
   return VAR_8 == 0 ? -VAR_0 : FUNC_4(VAR_8);
  }

  VAR_6->phys_encs[VAR_6->num_phys_encs] = VAR_8;
  ++VAR_6->num_phys_encs;
 }

 if (VAR_5 & VAR_2) {
  VAR_8 = FUNC_5(VAR_7);

  if (FUNC_3(VAR_8)) {
   FUNC_2(VAR_6, "failed to init cmd enc: %ld\n",
    FUNC_4(VAR_8));
   return VAR_8 == 0 ? -VAR_0 : FUNC_4(VAR_8);
  }

  VAR_6->phys_encs[VAR_6->num_phys_encs] = VAR_8;
  ++VAR_6->num_phys_encs;
 }

 if (VAR_7->split_role == VAR_1)
  VAR_6->cur_slave = VAR_8;
 else
  VAR_6->cur_master = VAR_8;

 return 0;
}
