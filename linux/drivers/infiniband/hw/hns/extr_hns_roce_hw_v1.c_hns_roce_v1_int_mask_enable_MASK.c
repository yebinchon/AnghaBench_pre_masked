
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_comp_vectors; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hns_roce_dev*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct hns_roce_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;
 __le32 VAR_8;
 int VAR_9;


 VAR_6 = FUNC_2(VAR_5, VAR_3);
 VAR_8 = FUNC_0(VAR_6);
 FUNC_3(VAR_8, VAR_1,
       VAR_7);
 FUNC_3(VAR_8, VAR_2, VAR_7);
 VAR_6 = FUNC_1(VAR_8);
 FUNC_4(VAR_5, VAR_3, VAR_6);


 for (VAR_9 = 0; VAR_9 < VAR_5->caps.num_comp_vectors; VAR_9++) {

  FUNC_4(VAR_5, VAR_4 +
      VAR_9 * VAR_0, VAR_7);
 }
}
