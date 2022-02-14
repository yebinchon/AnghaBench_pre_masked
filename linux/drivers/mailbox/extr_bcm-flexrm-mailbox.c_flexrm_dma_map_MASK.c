
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcm_message {int type; } ;



 int VAR_0 ;
 int FUNC_0 (struct device*,struct brcm_message*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, struct brcm_message *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 switch (VAR_2->type) {
 case 128:
  return FUNC_0(VAR_1, VAR_2);
 default:
  break;
 }

 return 0;
}
