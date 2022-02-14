
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hns_roce_eq {int eqe_buf_pg_sz; int entries; scalar_t__ hop_num; scalar_t__* buf; scalar_t__ bt_l0; } ;
struct hns_roce_aeqe {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct hns_roce_aeqe *FUNC_0(struct hns_roce_eq *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;

 VAR_5 = 1 << (VAR_3->eqe_buf_pg_sz + VAR_2);

 VAR_6 = (VAR_4 & (VAR_3->entries - 1)) * VAR_0;

 if (VAR_3->hop_num == VAR_1)
  return (struct hns_roce_aeqe *)((u8 *)(VAR_3->bt_l0) +
   VAR_6 % VAR_5);
 else
  return (struct hns_roce_aeqe *)((u8 *)
   (VAR_3->buf[VAR_6 / VAR_5]) + VAR_6 % VAR_5);
}
