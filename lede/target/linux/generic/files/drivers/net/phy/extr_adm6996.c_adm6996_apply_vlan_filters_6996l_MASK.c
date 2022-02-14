
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct adm6996_priv {scalar_t__* vlan_table; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adm6996_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct adm6996_priv *VAR_1)
{
 u8 VAR_2;
 u16 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1->vlan_table[VAR_4];

  if (VAR_2 == 0) {

   FUNC_2(VAR_1, FUNC_1(VAR_4), 0);
   continue;
  } else {
   VAR_3 = FUNC_0(VAR_2);
   FUNC_2(VAR_1, FUNC_1(VAR_4), VAR_3);
  }
 }
}
