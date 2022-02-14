
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_interface {scalar_t__ type; int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

u32 FUNC_0(struct mdp5_interface *VAR_6)
{
 if (VAR_6->type == VAR_0)
  return VAR_5;

 switch (VAR_6->num) {
 case 0: return VAR_1;
 case 1: return VAR_2;
 case 2: return VAR_3;
 case 3: return VAR_4;
 default: return 0;
 }
}
