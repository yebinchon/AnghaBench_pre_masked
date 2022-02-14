
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct input {void* target_id; void* cmpl_ring; void* req_type; } ;
struct bnxt_re_dev {int dummy; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt_re_dev *VAR_0, struct input *VAR_1,
      u16 VAR_2, u16 VAR_3, u16 VAR_4)
{
 VAR_1->req_type = FUNC_0(VAR_2);
 VAR_1->cmpl_ring = FUNC_0(VAR_3);
 VAR_1->target_id = FUNC_0(VAR_4);
}
