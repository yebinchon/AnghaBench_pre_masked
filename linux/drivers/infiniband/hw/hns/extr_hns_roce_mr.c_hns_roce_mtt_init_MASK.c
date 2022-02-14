
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_mtt {int order; int page_shift; int mtt_type; int first_seg; } ;
struct hns_roce_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hns_roce_dev*,int,int *,int ) ;

int FUNC_1(struct hns_roce_dev *VAR_3, int VAR_4, int VAR_5,
        struct hns_roce_mtt *VAR_6)
{
 int VAR_7;
 int VAR_8;


 if (!VAR_4) {
  VAR_6->order = -1;
  VAR_6->page_shift = VAR_1;
  return 0;
 }


 VAR_6->page_shift = VAR_5;


 for (VAR_6->order = 0, VAR_8 = VAR_2; VAR_8 < VAR_4;
      VAR_8 <<= 1)
  ++VAR_6->order;


 VAR_7 = FUNC_0(VAR_3, VAR_6->order, &VAR_6->first_seg,
           VAR_6->mtt_type);
 if (VAR_7 == -1)
  return -VAR_0;

 return 0;
}
