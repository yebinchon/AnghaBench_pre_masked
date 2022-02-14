
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hns_roce_eq {int entries; TYPE_1__* buf_list; } ;
struct hns_roce_ceqe {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct hns_roce_ceqe *FUNC_0(struct hns_roce_eq *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4 = (VAR_3 & (VAR_2->entries - 1)) *
        VAR_1;

 return (struct hns_roce_ceqe *)((u8 *)
   (VAR_2->buf_list[VAR_4 / VAR_0].buf) +
   VAR_4 % VAR_0);
}
