
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct bt_bmc {int dummy; } ;



 long VAR_0 ;
 struct bt_bmc* FUNC_0 (struct file*) ;
 int FUNC_1 (struct bt_bmc*) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned int VAR_2,
    unsigned long VAR_3)
{
 struct bt_bmc *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_4);
  return 0;
 }
 return -VAR_0;
}
