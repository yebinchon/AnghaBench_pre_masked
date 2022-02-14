
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_phys_cmd*) ;
 struct dpu_encoder_phys_cmd* FUNC_2 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_3(struct dpu_encoder_phys *VAR_0)
{
 struct dpu_encoder_phys_cmd *VAR_1 =
  FUNC_2(VAR_0);

 if (!VAR_0) {
  FUNC_0("invalid encoder\n");
  return;
 }
 FUNC_1(VAR_1);
}
