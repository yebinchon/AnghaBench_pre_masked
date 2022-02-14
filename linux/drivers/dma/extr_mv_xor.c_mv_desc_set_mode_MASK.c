
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_desc_slot {int type; struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int desc_command; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mv_xor_desc_slot *VAR_2)
{
 struct mv_xor_desc *VAR_3 = VAR_2->hw_desc;

 switch (VAR_2->type) {
 case 128:
 case 130:
  VAR_3->desc_command |= VAR_1;
  break;
 case 129:
  VAR_3->desc_command |= VAR_0;
  break;
 default:
  FUNC_0();
  return;
 }
}
