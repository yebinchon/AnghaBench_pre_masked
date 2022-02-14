
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
typedef int ssize_t ;




 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct request_queue *VAR_0, char *VAR_1)
{
 switch (FUNC_0(VAR_0)) {
 case 129:
  return FUNC_1(VAR_1, "host-aware\n");
 case 128:
  return FUNC_1(VAR_1, "host-managed\n");
 default:
  return FUNC_1(VAR_1, "none\n");
 }
}
