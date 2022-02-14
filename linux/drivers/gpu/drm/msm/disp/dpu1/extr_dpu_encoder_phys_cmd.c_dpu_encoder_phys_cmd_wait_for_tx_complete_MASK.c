
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {scalar_t__ intf_idx; int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_2)
{
 int VAR_3;
 struct dpu_encoder_phys_cmd *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_2);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_1("failed wait_for_idle: id:%u ret:%d intf:%d\n",
     FUNC_0(VAR_2->parent), VAR_3,
     VAR_2->intf_idx - VAR_1);
 }

 return VAR_3;
}
