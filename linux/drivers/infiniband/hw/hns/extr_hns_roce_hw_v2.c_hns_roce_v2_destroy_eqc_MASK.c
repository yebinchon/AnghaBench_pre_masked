
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_comp_vectors; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hns_roce_dev*,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_4, int VAR_5)
{
 struct device *VAR_6 = VAR_4->dev;
 int VAR_7;

 if (VAR_5 < VAR_4->caps.num_comp_vectors)
  VAR_7 = FUNC_1(VAR_4, 0, 0, VAR_5 & VAR_3,
     0, VAR_1,
     VAR_2);
 else
  VAR_7 = FUNC_1(VAR_4, 0, 0, VAR_5 & VAR_3,
     0, VAR_0,
     VAR_2);
 if (VAR_7)
  FUNC_0(VAR_6, "[mailbox cmd] destroy eqc(%d) failed.\n", VAR_5);
}
