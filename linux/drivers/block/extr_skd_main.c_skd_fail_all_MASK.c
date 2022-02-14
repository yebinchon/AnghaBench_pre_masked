
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {int state; } ;
struct request_queue {struct skd_device* queuedata; } ;


 int FUNC_0 (int) ;






 int VAR_0 ;







 int FUNC_1 (struct skd_device*,char*) ;

__attribute__((used)) static bool FUNC_2(struct request_queue *VAR_1)
{
 struct skd_device *VAR_2 = VAR_1->queuedata;

 FUNC_0(VAR_2->state != VAR_0);

 FUNC_1(VAR_2, "req_not_online");
 switch (VAR_2->state) {
 case 133:
 case 134:
 case 131:
 case 132:
 case 128:







 case 140:
 case 138:
 case 139:
  return 0;

 case 137:
 case 130:
 case 129:
 case 135:
 case 136:
 default:
  return 1;
 }
}
