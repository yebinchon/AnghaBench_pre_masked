
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int dummy; } ;
struct sec_dev_info {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sec_dev_info*,struct sec_queue*,int) ;
 int FUNC_2 (struct sec_queue*) ;
 int FUNC_3 (struct sec_queue*) ;
 int FUNC_4 (struct sec_queue*) ;
 int FUNC_5 (struct sec_queue*) ;

__attribute__((used)) static int FUNC_6(struct sec_dev_info *VAR_0, struct sec_queue *VAR_1,
       int VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Queue map failed %d\n", VAR_3);
  FUNC_2(VAR_1);
  return VAR_3;
 }

 FUNC_3(VAR_1);

 return 0;
}
