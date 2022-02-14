
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct switch_dev {int dummy; } ;
struct TYPE_2__ {int ports; } ;
struct ar7240sw {int* vlan_table; int* vlan_id; TYPE_1__ swdev; scalar_t__ vlan; } ;
typedef int portmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar7240sw*,int,int) ;
 int FUNC_1 (struct ar7240sw*,int,int) ;
 int FUNC_2 (int*,int ,int) ;
 struct ar7240sw* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_4(struct switch_dev *VAR_6)
{
 struct ar7240sw *VAR_7 = FUNC_3(VAR_6);
 u8 VAR_8[VAR_1];
 int VAR_9, VAR_10;


 FUNC_0(VAR_7, VAR_3, 0);

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 if (VAR_7->vlan) {


  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   u8 VAR_11 = VAR_7->vlan_table[VAR_10];

   if (!VAR_11)
    continue;

   for (VAR_9 = 0; VAR_9 < VAR_7->swdev.ports; VAR_9++) {
    u8 VAR_12 = (1 << VAR_9);
    if (VAR_11 & VAR_12)
     VAR_8[VAR_9] |= VAR_11 & ~VAR_12;
   }

   FUNC_0(VAR_7,
    VAR_4 |
    (VAR_7->vlan_id[VAR_10] << VAR_5),
    VAR_7->vlan_table[VAR_10]);
  }
 } else {


  for (VAR_9 = 0; VAR_9 < VAR_7->swdev.ports; VAR_9++) {
   if (VAR_9 == VAR_2)
    continue;

   VAR_8[VAR_9] = 1 << VAR_2;
   VAR_8[VAR_2] |= (1 << VAR_9);
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_7->swdev.ports; VAR_9++)
  FUNC_1(VAR_7, VAR_9, VAR_8[VAR_9]);

 return 0;
}
