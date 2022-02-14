
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip17xx_state {TYPE_1__* ports; scalar_t__ vlan_enabled; } ;
struct TYPE_2__ {scalar_t__ pvid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip17xx_state*) ;
 int FUNC_1 (struct ip17xx_state*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ip17xx_state *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 if (VAR_1->vlan_enabled) {


  VAR_3 |= FUNC_1(VAR_1, 22, 0, 0x3fff, 0x003f);




  VAR_3 |= FUNC_1(VAR_1, 22, 1, 0x0fff, 0x0c3f);


  VAR_3 |= FUNC_1(VAR_1, 22, 2, 0x0fff, 0x0000);
 } else {

  VAR_3 |= FUNC_1(VAR_1, 22, 0, 0xbfff, 0x8000);


  VAR_3 |= FUNC_1(VAR_1, 22, 1, 0x0fff, 0x0c3f);
  VAR_3 |= FUNC_1(VAR_1, 22, 2, 0x0fff, 0x0000);
 }


 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  VAR_1->ports[VAR_2].pvid = 0;

 VAR_3 |= FUNC_0(VAR_1);

 return (VAR_3 ? -VAR_0 : 0);
}
