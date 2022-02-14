
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys_cmd {scalar_t__ serialize_wait4pp; } ;
struct dpu_encoder_phys {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_encoder_phys*) ;
 scalar_t__ FUNC_1 (struct dpu_encoder_phys*) ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_1)
{
 int VAR_2 = 0;
 struct dpu_encoder_phys_cmd *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_1);


 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_0(VAR_1);


 if (!VAR_2 && VAR_3->serialize_wait4pp)
  FUNC_2(VAR_1);

 return VAR_2;
}
