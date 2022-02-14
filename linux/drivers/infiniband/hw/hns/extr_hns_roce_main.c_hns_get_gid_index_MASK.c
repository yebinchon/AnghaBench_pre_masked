
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int num_ports; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;



int FUNC_0(struct hns_roce_dev *VAR_0, u8 VAR_1, int VAR_2)
{
 return VAR_2 * VAR_0->caps.num_ports + VAR_1;
}
