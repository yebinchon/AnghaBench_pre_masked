
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_post_mbox {void* token_event_en; void* cmd_tag; void* out_param_h; void* out_param_l; void* in_param_h; void* in_param_l; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_2 (struct hns_roce_cmq_desc*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_1, u64 VAR_2,
         u64 VAR_3, u32 VAR_4, u8 VAR_5,
         u16 VAR_6, u16 VAR_7, int VAR_8)
{
 struct hns_roce_cmq_desc VAR_9;
 struct hns_roce_post_mbox *VAR_10 = (struct hns_roce_post_mbox *)VAR_9.data;

 FUNC_2(&VAR_9, VAR_0, 0);

 VAR_10->in_param_l = FUNC_0(VAR_2);
 VAR_10->in_param_h = FUNC_0(VAR_2 >> 32);
 VAR_10->out_param_l = FUNC_0(VAR_3);
 VAR_10->out_param_h = FUNC_0(VAR_3 >> 32);
 VAR_10->cmd_tag = FUNC_0(VAR_4 << 8 | VAR_6);
 VAR_10->token_event_en = FUNC_0(VAR_8 << 16 | VAR_7);

 return FUNC_1(VAR_1, &VAR_9, 1);
}
