
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*,struct device*,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct request_queue *VAR_2, struct device *VAR_3)
{
 if (!FUNC_1(VAR_2)) {
  FUNC_0(1, "Attempt to register a non-SCSI queue\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_2, VAR_3, FUNC_3(VAR_3), &VAR_1);
}
