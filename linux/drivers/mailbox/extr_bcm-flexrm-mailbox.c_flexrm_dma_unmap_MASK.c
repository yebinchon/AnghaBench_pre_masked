
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcm_message {int type; } ;



 int FUNC_0 (struct device*,struct brcm_message*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct brcm_message *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 switch (VAR_1->type) {
 case 128:
  FUNC_0(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
