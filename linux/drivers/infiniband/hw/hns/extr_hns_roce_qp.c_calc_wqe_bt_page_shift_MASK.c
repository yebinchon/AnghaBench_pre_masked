
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtt_ba_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct hns_roce_buf_region {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hns_roce_buf_region*,int,int) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_2,
      struct hns_roce_buf_region *VAR_3,
      int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = VAR_1 + VAR_2->caps.mtt_ba_pg_sz;


 do {
  VAR_6 = (1 << VAR_5) / VAR_0;
  VAR_7 = FUNC_0(VAR_3, VAR_4,
           VAR_6);
  if (VAR_7 <= VAR_6)
   break;

  VAR_5++;
 } while (VAR_7 > VAR_6);

 return VAR_5 - VAR_1;
}
