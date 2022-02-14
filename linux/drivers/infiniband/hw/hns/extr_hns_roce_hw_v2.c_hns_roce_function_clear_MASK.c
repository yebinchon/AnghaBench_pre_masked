
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_func_clear {int func_done; } ;
struct hns_roce_dev {int is_reset; int dev; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_2 (struct hns_roce_cmq_desc*,int ,int) ;
 scalar_t__ FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct hns_roce_dev *VAR_5)
{
 bool VAR_6 = 0;
 struct hns_roce_func_clear *VAR_7;
 struct hns_roce_cmq_desc VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 if (FUNC_3(VAR_5))
  goto out;

 FUNC_2(&VAR_8, VAR_1, 0);
 VAR_7 = (struct hns_roce_func_clear *)VAR_8.data;

 VAR_10 = FUNC_1(VAR_5, &VAR_8, 1);
 if (VAR_10) {
  VAR_6 = 1;
  FUNC_0(VAR_5->dev, "Func clear write failed, ret = %d.\n",
    VAR_10);
  goto out;
 }

 FUNC_5(VAR_4);
 VAR_9 = VAR_2;
 while (VAR_9) {
  if (FUNC_3(VAR_5))
   goto out;
  FUNC_5(VAR_3);
  VAR_9 -= VAR_3;

  FUNC_2(&VAR_8, VAR_1,
           1);

  VAR_10 = FUNC_1(VAR_5, &VAR_8, 1);
  if (VAR_10)
   continue;

  if (FUNC_6(VAR_7->func_done, VAR_0)) {
   VAR_5->is_reset = 1;
   return;
  }
 }

out:
 FUNC_0(VAR_5->dev, "Func clear fail.\n");
 FUNC_4(VAR_5, VAR_10, VAR_6);
}
