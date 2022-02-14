
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcm_message {int type; } ;




 int FUNC_0 (struct brcm_message*) ;
 int FUNC_1 (struct brcm_message*) ;

__attribute__((used)) static u32 FUNC_2(struct brcm_message *VAR_0)
{
 if (!VAR_0)
  return 0;

 switch (VAR_0->type) {
 case 128:
  return FUNC_1(VAR_0);
 case 129:
  return FUNC_0(VAR_0);
 default:
  return 0;
 };
}
