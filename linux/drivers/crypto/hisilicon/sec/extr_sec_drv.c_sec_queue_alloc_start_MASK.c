
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int dummy; } ;
struct sec_dev_info {int dev; } ;


 scalar_t__ FUNC_0 (struct sec_queue*) ;
 int FUNC_1 (struct sec_queue*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct sec_queue* FUNC_3 (struct sec_dev_info*) ;
 int FUNC_4 (struct sec_queue*) ;

__attribute__((used)) static struct sec_queue *FUNC_5(struct sec_dev_info *VAR_0)
{
 struct sec_queue *VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_0->dev, "alloc sec queue failed! %ld\n",
   FUNC_1(VAR_1));
  return VAR_1;
 }

 FUNC_4(VAR_1);

 return VAR_1;
}
