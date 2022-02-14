
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int demod_chip; } ;
struct lgdt330x_state {TYPE_1__ config; } ;


 int VAR_0 ;


 int FUNC_0 (struct lgdt330x_state*) ;
 int FUNC_1 (struct lgdt330x_state*) ;

__attribute__((used)) static int FUNC_2(struct lgdt330x_state *VAR_1)
{
 switch (VAR_1->config.demod_chip) {
 case 129:
  return FUNC_0(VAR_1);
 case 128:
  return FUNC_1(VAR_1);
 default:
  return -VAR_0;
 }
}
