
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;
struct hns_roce_cfg_global_param {int time_cfg_udp_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_1 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_2 (struct hns_roce_cfg_global_param*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_5)
{
 struct hns_roce_cfg_global_param *VAR_6;
 struct hns_roce_cmq_desc VAR_7;

 FUNC_1(&VAR_7, VAR_4,
          0);

 VAR_6 = (struct hns_roce_cfg_global_param *)VAR_7.data;
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 FUNC_3(VAR_6->time_cfg_udp_port,
         VAR_0,
         VAR_1, 0x3e8);
 FUNC_3(VAR_6->time_cfg_udp_port,
         VAR_2,
         VAR_3, 0x12b7);

 return FUNC_0(VAR_5, &VAR_7, 1);
}
