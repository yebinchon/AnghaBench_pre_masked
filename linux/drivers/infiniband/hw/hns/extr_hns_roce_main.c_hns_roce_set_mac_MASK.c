
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_3__ {size_t* phy_port; } ;
struct hns_roce_dev {size_t** dev_addr; TYPE_2__* hw; TYPE_1__ iboe; } ;
struct TYPE_4__ {int (* set_mac ) (struct hns_roce_dev*,size_t,size_t*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (size_t*,size_t*,size_t) ;
 int FUNC_1 (struct hns_roce_dev*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 u8 VAR_4;
 u32 VAR_5 = 0;

 if (!FUNC_0(VAR_1->dev_addr[VAR_2], VAR_3, VAR_0))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_1->dev_addr[VAR_2][VAR_5] = VAR_3[VAR_5];

 VAR_4 = VAR_1->iboe.phy_port[VAR_2];
 return VAR_1->hw->set_mac(VAR_1, VAR_4, VAR_3);
}
