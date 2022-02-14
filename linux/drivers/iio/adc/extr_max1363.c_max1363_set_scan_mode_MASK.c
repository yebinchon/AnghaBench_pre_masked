
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1363_state {int configbyte; TYPE_1__* current_mode; } ;
struct TYPE_2__ {int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct max1363_state*) ;

__attribute__((used)) static int FUNC_1(struct max1363_state *VAR_3)
{
 VAR_3->configbyte &= ~(VAR_0
       | VAR_1
       | VAR_2);
 VAR_3->configbyte |= VAR_3->current_mode->conf;

 return FUNC_0(VAR_3);
}
